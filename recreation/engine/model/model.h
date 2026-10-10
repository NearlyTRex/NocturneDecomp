#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

SMRGLHeaderExtended *loadModelFile(char *filename);
int getMRGLSize(SMRGLHeaderExtended *header);
SMRGLHeaderExtended *loadModelChunk(char *filename, int model_size);

} // namespace nocturne::engine
