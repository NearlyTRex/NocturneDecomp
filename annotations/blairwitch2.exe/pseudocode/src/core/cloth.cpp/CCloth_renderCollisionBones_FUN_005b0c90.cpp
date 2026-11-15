// Name: core_cloth.cpp_CCloth_renderCollisionBones_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cd1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_005b0c90(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_005b0c90(CCloth *this_ptr)

{
  int bone_index;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,0xff);
  if (0 < this_ptr->collide_bone_count) {
    do {
      core_cloth_cpp_CCloth_renderBone_FUN_005b0ce0(this_ptr,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < this_ptr->collide_bone_count);
  }
  return;
}
