#include "core/event/rulelist.h"

#include <span>
#include <utility>
#include <vector>

namespace nocturne::core {

// nocedit 0x004b1670
void CRuleList::clear() {
    rules_.clear();
}

void CRuleList::setRules(std::vector<SRule> rules) {
    rules_ = std::move(rules);
}

std::span<const SRule> CRuleList::getRules() const {
    return rules_;
}

} // namespace nocturne::core
