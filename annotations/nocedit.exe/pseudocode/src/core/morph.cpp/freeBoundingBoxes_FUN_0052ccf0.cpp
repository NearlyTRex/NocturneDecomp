// Name: core_morph.cpp_freeBoundingBoxes_FUN_0052ccf0
// Address: 0052ccf0
// Address Range: [[0052ccf0, 0052cd04]]
// Convention: __cdecl
// Signature: void core_morph.cpp_freeBoundingBoxes_FUN_0052ccf0(CBoundingBox3D * * array)

#include "nocturne.h"

void __cdecl core_morph_cpp_freeBoundingBoxes_FUN_0052ccf0(CBoundingBox3D **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,2,&g_CBoundingBox3DTypeInfo);
  return;
}
