// main.cpp — entry point. Wires config and subsystems together.

#include "gagfarmhelper/settings.h"
#include "gagfarmhelper/farmer.h"
#include "gagfarmhelper/cycles.h"
#include "gagfarmhelper/alerts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gagfarmhelper::Settings settings = gagfarmhelper::Settings::load_default();
    gagfarmhelper::Farmer farmer(settings.store_path);
    gagfarmhelper::Cycles cycles(settings.store_path);
    gagfarmhelper::Alerts alerts(settings.store_path);
    std::fprintf(stderr, "[gag-farm-helper] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
