// Name: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
// Address: 004602a0
// Address Range: [[004602a0, 00460369]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[3] == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(*param_1 + 0x10 + *(int *)(iVar1 + 0x18) * 0x30);
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (param_1[1] == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = &LAB_0052f031;
        }
        else {
          _DAT_01c00c7c = &LAB_0052f823;
        }
        _DAT_01c039a4 = 6;
        _DAT_01c039a0 = 0x267;
      }
      else {
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = &LAB_00463a79;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
    }
  }
  return;
}
