#pragma once

#include <cstdint>

namespace nocturne::core {

// Whether a model's part is drawn. Files save it as a number, any but 0 being shown; the skeleton
// editor's 3 for the part it shows alone is one of those.
enum class EPartVisibility : std::uint8_t {
    kHidden = 0,
    kShown = 1,
};

} // namespace nocturne::core
