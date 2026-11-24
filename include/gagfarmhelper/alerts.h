// alerts — part of gag-farm-helper.

#pragma once

#include <string>
#include <vector>

namespace gagfarmhelper {

class Alerts {
public:
    explicit Alerts(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace gagfarmhelper
