#pragma once

#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

void staticInit();
char *getGroundTypeCode(EGroundType type);
std::uint32_t getGroundTypeColor(EGroundType type);

} // namespace nocturne::core
