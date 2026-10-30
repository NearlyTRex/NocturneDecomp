#pragma once

#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// An event that runs when its condition holds.
struct SRule {
    std::string condition;
    std::string event;

    bool operator==(const SRule &) const = default;
};

// Rules checked in their order.
class CRuleList {
public:
    void clear();
    int evaluateAndRun();
    // The original held five.
    void setRules(std::vector<SRule> rules);

    [[nodiscard]] std::span<const SRule> getRules() const;

private:
    std::vector<SRule> rules_;
};

} // namespace nocturne::core
