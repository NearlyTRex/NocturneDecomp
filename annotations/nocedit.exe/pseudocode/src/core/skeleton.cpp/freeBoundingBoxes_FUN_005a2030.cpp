// Name: core_skeleton.cpp_freeBoundingBoxes_FUN_005a2030
// Address: 005a2030
// Address Range: [[005a2030, 005a2044]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeBoundingBoxes_FUN_005a2030(CBoundingBox3D **array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeBoundingBoxes_FUN_005a2030(CBoundingBox3D **array)

{
  __arrfini(array,100,&g_CBoundingBox3DTypeInfo);
  return;
}
