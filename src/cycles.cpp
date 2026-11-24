// cycles.cpp — part of gag-farm-helper.

#include "gagfarmhelper/cycles.h"

#include <cstdio>

namespace gagfarmhelper {

Cycles::Cycles(const std::string& config_path)
    : config_path_(config_path) {}

void Cycles::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cycles::run() {
    if (verbose_) std::fprintf(stderr, "[gag-farm-helper] cycles: run\n");
    // core logic lives here
    return true;
}

}  // namespace gagfarmhelper
