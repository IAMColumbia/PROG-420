FROM gcc:9.2.0

WORKDIR /usr/src/app

RUN apt-get -qq update \
    && apt-get -qq install --no-install-recommends cmake \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir src

COPY . .

WORKDIR /usr/src/app/src

RUN cmake .

RUN make


CMD ["./app"]
