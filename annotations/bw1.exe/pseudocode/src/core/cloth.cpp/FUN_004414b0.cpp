// Name: core_cloth.cpp_FUN_004414b0
// Address: 004414b0
// Address Range: [[004414b0, 004414f1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_004414b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_004414b0(void)

{
  int bone_index;
  CCloth *in_stack_00000004;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,0xff);
  if (0 < in_stack_00000004->collide_bone_count) {
    do {
      core_cloth_cpp_FUN_00441500(in_stack_00000004,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < in_stack_00000004->collide_bone_count);
  }
  return;
}
