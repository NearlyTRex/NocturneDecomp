// Name: core_cloth.cpp_CCloth_renderCollisionBones_FUN_0043b790
// Address: 0043b790
// Address Range: [[0043b790, 0043b7d1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_0043b790(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_0043b790(CCloth *this_ptr)

{
  int bone_index;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff);
  if (0 < this_ptr->collide_bone_count) {
    do {
      core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(this_ptr,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < this_ptr->collide_bone_count);
  }
  return;
}
