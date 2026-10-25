#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// deferred: the pool of 256 models, with this
// nocedit 0x00476c50
CKeyFramedModel *loadModel(char *filename);
void freeAllModels();

} // namespace nocturne::core
