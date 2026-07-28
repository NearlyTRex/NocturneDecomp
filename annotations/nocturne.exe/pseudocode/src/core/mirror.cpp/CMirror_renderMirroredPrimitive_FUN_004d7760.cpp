// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
// Address: 004d7760
// Address Range: [[004d7760, 004d77e4]]
// Convention: unknown
// Signature: void core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *param_1,int param_2)

{
  uint uVar1;
  
  _DAT_01cc942c = *(uint *)(param_2 + 4);
  _DAT_01cc9430 = *(uint *)(param_2 + 8);
  _DAT_01cc9434 = *(uint *)(param_2 + 0xc);
  _DAT_01cc9438 = *(uint *)(param_2 + 0x10);
  _DAT_01cc943c = *(uint *)(param_2 + 0x14);
  _DAT_01cc9440 = *(uint *)(param_2 + 0x18);
  _DAT_01cc9444 = *(uint *)(param_2 + 0x24);
  _DAT_01cc9448 = *(uint *)(param_2 + 0x30);
  _DAT_01cc944c = *(uint *)(param_2 + 0x3c);
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
                    (param_1,(SMRGLHeaderPrimitive *)0x1cc9428);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (DAT_005ae704,&param_1->clip_primitive);
  return;
}
