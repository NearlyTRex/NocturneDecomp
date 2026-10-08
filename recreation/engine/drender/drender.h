#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::engine {

using CustomScanlineFunc = void(int, core::SSoftwareEdge *, core::SSoftwareEdge *);

void staticInit();
int qsortByCapturedFaceDepthAscending(SFace **face_ptr_a, SFace **face_ptr_b);
int qsortByCapturedFaceDepthDescending(SFace **face_ptr_a, SFace **face_ptr_b);

} // namespace nocturne::engine
