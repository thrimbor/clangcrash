#!/usr/bin/env sh

"/usr/bin/clang-14" "-cc1" -ferror-limit 3 "-triple" "i386-pc-windows-msvc19.20.0" "-emit-obj" "-disable-free"  "-disable-llvm-verifier" "-discard-value-names" "-mrelocation-model" "static" "-ffreestanding" "-target-cpu" "pentium3" "-sys-header-deps" "-D" "NXDK" "-D" "__STDC__=1" "-U" "__STDC_NO_THREADS__" "-std=c++17" "-fno-use-cxa-atexit" "-fms-extensions" "-fms-compatibility" "-fms-compatibility-version=19.20" "-x" "c++" "sample.cpp"
