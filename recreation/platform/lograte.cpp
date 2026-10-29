#include "platform/lograte.h"

#include <optional>

namespace nocturne::platform {

std::optional<int> CLogRate::take() {
    ++calls_;
    if (calls_ <= first_ || calls_ % every_ == 0) {
        return calls_;
    }
    return std::nullopt;
}

} // namespace nocturne::platform
