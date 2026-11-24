#pragma once

#include "engine/fwd.h"

#include <string_view>

namespace nocturne::engine {

// The screen as a PNG called filename, in the folder the game runs from; fatal when it can't be
// written. An 8-bit screen's colours are the palette's.
void saveScreenshotGeneral(IScreenDevice &screen, const C2d &two_d, const CDosIo &dosio,
                           std::string_view filename);

} // namespace nocturne::engine
