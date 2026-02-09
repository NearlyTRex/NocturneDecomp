// Name: core_skeleton.cpp_freeBoundingBoxes_FUN_005a2030
// Address: 005a2030
// Address Range: [[005a2030, 005a2044]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_skeleton_cpp_freeBoundingBoxes_FUN_005a2030(CBoundingBox3D *objs)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_skeleton_cpp_freeBoundingBoxes_FUN_005a2030(CBoundingBox3D *objs)

{
  CBoundingBox3D *pCVar1;
  
  pCVar1 = (CBoundingBox3D *)__arrfini(objs,100,&g_CBoundingBox3DTypeInfo);
  return pCVar1;
}
