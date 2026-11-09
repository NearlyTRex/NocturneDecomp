// Name: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70
// Address: 0046cb70
// Address Range: [[0046cb70, 0046cb89]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70(CDemonRenderer *this_ptr,CVector3i *origin)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70(CDemonRenderer *this_ptr,CVector3i *origin)

{
  engine_matrix_c_setCameraOrigin_FUN_004e6a40
            (*(int *)origin,*(int *)(origin + 4),*(int *)(origin + 8));
  return;
}
