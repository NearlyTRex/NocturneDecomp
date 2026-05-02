// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
// MANUAL RECONSTRUCTION
// Address Range: [[0048c150, 0048c1a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer *this_ptr,CVector3f *point_ptr)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer *this_ptr,CVector3f *point_ptr)

{
  engine_matrix_c_setCameraOrigin_FUN_0050e270
            ((int)ROUND(ROUND((double)point_ptr->x * 256)),
             (int)ROUND(ROUND((double)point_ptr->y * 256)),
             (int)ROUND(ROUND((double)point_ptr->z * 256)));
  return;
}
