#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CBugs *factoryFuncBugs();
char *getDeformableModelName(CDeformableModelInstance *model_ptr);

} // namespace nocturne::core
