// Name: core_set.cpp_FUN_005553e0
// Address: 005553e0
// Address Range: [[005553e0, 00555459]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_005553e0(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

#include "nocturne.h"

void core_set_cpp_FUN_005553e0(int param_1,SMRGLPrimitivePoly *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x20c == 0) {
    if (*(int *)(DAT_00612560 + 0x18) == 0) {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,param_2);
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
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_00519c20
                    (*(CMirror **)(param_1 + 0x161668),(SMRGLHeaderPrimitive *)param_2);
          param_2 = param_2 + 0x48;
        } while (iVar1 < param_3);
      }
    }
  }
  return;
}
