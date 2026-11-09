// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490
// Address: 00483490
// Address Range: [[00483490, 004834a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_00483490(CDemonRenderer *this_ptr,CVector3i *origin)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_00483490(CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_00509000
            (*(int *)origin,*(int *)(origin + 4),*(int *)(origin + 8));
  return;
}
