#pragma once

#include "engine/fwd.h"

#include <string_view>

namespace nocturne::engine {

// The keyboard's keys and the first two mouse buttons by name; anything else is
// "(invalid key)".
[[nodiscard]] std::string_view getKeyName(EInputCodeType keycode);

} // namespace nocturne::engine
