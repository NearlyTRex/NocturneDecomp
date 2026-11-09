// Name: core_set.cpp_FUN_0053ad70
// Address: 0053ad70
// Address Range: [[0053ad70, 0053ade9]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053ad70(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

#include "nocturne.h"

void core_set_cpp_FUN_0053ad70(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x214 == 0) {
    if (*(int *)(DAT_005f2afc + 0x18) == 0) {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(DAT_005f2afc,param_2);
          param_2 = param_2 + 0x48;
        } while (iVar1 < param_3);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
                    (*(CMirror **)(param_1 + 0x161668),(SMRGLHeaderPrimitive *)param_2);
          param_2 = param_2 + 0x48;
        } while (iVar1 < param_3);
      }
    }
  }
  return;
}
