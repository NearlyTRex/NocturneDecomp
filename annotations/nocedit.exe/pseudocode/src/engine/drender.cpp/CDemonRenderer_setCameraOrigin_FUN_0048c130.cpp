// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
// Address: 0048c130
// Address Range: [[0048c130, 0048c149]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130 (CDemonRenderer *this_ptr,CVector3i *origin)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
          (CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_0050e270(origin->x,origin->y,origin->z);
  return;
}
