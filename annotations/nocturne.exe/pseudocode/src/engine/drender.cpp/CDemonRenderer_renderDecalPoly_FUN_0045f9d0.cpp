// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
// Address: 0045f9d0
// Address Range: [[0045f9d0, 0045faf8]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar2 != 0)) {
    if (param_1[1] == 0) {
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        iVar3 = param_2;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (param_1[8] == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(iVar5 + *param_1 + 0x18) = *(uint *)(iVar3 + 0x1c);
            *(uint *)(*param_1 + iVar5 + 0x1c) = *(uint *)(iVar3 + 0x20);
          }
          *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar3 = param_2;
        do {
          *(uint *)(&DAT_01b4d76c + iVar4) = *(uint *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      _DAT_01c039a0 = 0x41;
      _DAT_01c039a4 = 6;
      _DAT_01c00c7c = &LAB_004649dd;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = &LAB_00463a79;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return;
}
