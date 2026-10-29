#pragma once

#include <optional>

namespace nocturne::platform {

// How often a line that fires every frame is written: the first `first` times, then every
// `every`-th, as the decomp's DLOG_RL has it. A call site holds one of its own.
class CLogRate {
public:
    constexpr CLogRate(int first, int every) : first_(first), every_(every) {}

    // The call's number, counting from 1, when this one is written.
    [[nodiscard]] std::optional<int> take();

private:
    int first_;
    int every_;
    int calls_ = 0;
};

} // namespace nocturne::platform
