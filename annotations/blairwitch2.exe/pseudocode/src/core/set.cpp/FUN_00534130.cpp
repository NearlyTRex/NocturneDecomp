// Name: core_set.cpp_FUN_00534130
// Address: 00534130
// Address Range: [[00534130, 005341a9]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00534130(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

#include "nocturne.h"

void core_set_cpp_FUN_00534130(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x20c == 0) {
    if (*(int *)(DAT_0060b280 + 0x18) == 0) {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,param_2);
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
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004facd0
                    (*(CMirror **)(param_1 + 0x161664),(SMRGLHeaderPrimitive *)param_2);
          param_2 = param_2 + 0x48;
        } while (iVar1 < param_3);
      }
    }
  }
  return;
}
