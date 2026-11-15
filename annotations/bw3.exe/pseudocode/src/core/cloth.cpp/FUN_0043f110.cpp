// Name: core_cloth.cpp_FUN_0043f110
// Address: 0043f110
// Address Range: [[0043f110, 0043f151]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043f110(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_0043f110(void)

{
  int bone_index;
  CCloth *in_stack_00000004;
  
  bone_index = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(DAT_005f2afc,0xff);
  if (0 < in_stack_00000004->collide_bone_count) {
    do {
      core_cloth_cpp_FUN_0043f160(in_stack_00000004,bone_index,0);
      bone_index = bone_index + 1;
    } while (bone_index < in_stack_00000004->collide_bone_count);
  }
  return;
}
