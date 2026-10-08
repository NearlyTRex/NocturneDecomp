#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
CKeyFramedModel *loadModel(char *filename);
void freeAllModels();

} // namespace nocturne::core
