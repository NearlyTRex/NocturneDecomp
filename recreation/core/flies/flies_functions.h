#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CFlies *factoryFuncFlies();
CFlies *findFliesByFollowActor(CDemonActor *actor);

} // namespace nocturne::core
