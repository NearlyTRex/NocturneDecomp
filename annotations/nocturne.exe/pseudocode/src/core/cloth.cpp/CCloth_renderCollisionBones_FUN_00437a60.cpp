// Name: core_cloth.cpp_CCloth_renderCollisionBones_FUN_00437a60
// Address: 00437a60
// Address Range: [[00437a60, 00437aa1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_00437a60(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_00437a60(CCloth *this_ptr)

{
  int bone_index;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
            (g_CDemonRenderer_PTR_005ae704,0xff);
  if (0 < this_ptr->collide_bone_count) {
    do {
      core_cloth_cpp_CCloth_renderBone_FUN_00437ab0(this_ptr,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < this_ptr->collide_bone_count);
  }
  return;
}
