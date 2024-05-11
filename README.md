# Criterion Playground

This repo shows a simple showcase how to use [Criterion](https://github.com/Snaipe/Criterion) to test C code managed by
[Cmake](https://cmake.org/).

## Setup

### Prerequisites

You need to install following tools/packages:

* gcc
* cmake
* clang
* meson/ninja

### Compile

```bash
cd build
cmake ..
cmake --build .
```

### Run tests

```bash
cd build
./tests/criterion_playground_tests
```
