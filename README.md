An experiment aiming to be build similarly to (https://github.com/Moxibyte/MoxPP), but using Bazel

## Prerequisites

- Install Conan (https://docs.conan.io/2/installation.html)
- Install Bazel (https://bazel.build/install)
- Clone the repository
- Install all the dependencies

        conan install . --build=missing

## Usage

- Build main

        bazelisk --bazelrc=./conan/conan_bzl.rc build --config=conan-config //src:main

- Build tests

        bazelisk --bazelrc=./conan/conan_bzl.rc build --config=conan-config //test:test
