// Name: core_cloth.cpp_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cd1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_005b0c90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_005b0c90(void)

{
  int bone_index;
  CCloth *in_stack_00000004;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,0xff);
  if (0 < in_stack_00000004->collide_bone_count) {
    do {
      core_cloth_cpp_FUN_005b0ce0(in_stack_00000004,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < in_stack_00000004->collide_bone_count);
  }
  return;
}
