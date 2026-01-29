// Name: core_cloth.cpp_freeClothBones_FUN_0043e4a0
// Address: 0043e4a0
// Address Range: [[0043e4a0, 0043e4b4]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_freeClothBones_FUN_0043e4a0(SClothBone **array)

#include "nocturne.h"

void __cdecl core_cloth_cpp_freeClothBones_FUN_0043e4a0(SClothBone **array)

{
  __arrfini(array,0x32,&g_SClothBoneTypeInfo);
  return;
}
