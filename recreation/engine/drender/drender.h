#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

using CustomScanlineFunc = void(int, SSoftwareEdge *, SSoftwareEdge *);

void staticInit();
int qsortByCapturedFaceDepthAscending(SFace **face_ptr_a, SFace **face_ptr_b);
int qsortByCapturedFaceDepthDescending(SFace **face_ptr_a, SFace **face_ptr_b);

} // namespace nocturne::engine
