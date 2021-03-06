#!/bin/bash

V8_VERSION=3.31.74.1

tar cvzf precompiled-libraries.tar.gz \
  .v8-build-64 \
  3rdParty/V8-${V8_VERSION}/include \
  3rdParty/V8-${V8_VERSION}/out/x64.release/obj.target/tools/gyp \
  3rdParty/V8-${V8_VERSION}/third_party/icu/source/common \
  3rdParty/V8-${V8_VERSION}/third_party/icu/source/i18n \
  3rdParty/V8-${V8_VERSION}/third_party/icu/source/io \
  3rdParty/V8-${V8_VERSION}/out/x64.release/obj.target/third_party/icu
