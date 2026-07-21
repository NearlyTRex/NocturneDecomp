// Name: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
// Address: 0045ff20
// Address Range: [[0045ff20, 00460074]]
// Convention: unknown
// Signature: int engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((param_1[3] != 0) &&
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar2 == 0)) {
    return 0;
  }
  iVar4 = 0;
  local_14 = 0xffffffff;
  iVar2 = param_2;
  if (0 < *(int *)(param_2 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x18);
      *(int *)(&DAT_01b4d76c + iVar3) = iVar1;
      iVar3 = iVar3 + 4;
      local_14 = local_14 & *(uint *)(*param_1 + 0x10 + iVar1 * 0x30);
      iVar2 = iVar2 + 0xc;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (param_1[1] == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_0052f031;
      }
      else {
        _DAT_01c00c7c = &LAB_0052f823;
      }
      _DAT_01c039a4 = 6;
      _DAT_01c039a0 = 0x2e7;
      if ((param_1[8] == 0) && (iVar2 = 0, 0 < *(int *)(param_2 + 4))) {
        iVar3 = 0;
        iVar4 = param_2;
        do {
          iVar1 = *(int *)(&DAT_01b4d76c + iVar3);
          *(uint *)(*param_1 + 0x18 + iVar1 * 0x30) = *(uint *)(iVar4 + 0x1c);
          *(uint *)(*param_1 + iVar1 * 0x30 + 0x1c) = *(uint *)(iVar4 + 0x20);
          iVar4 = iVar4 + 0xc;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    else {
      _DAT_01c039a0 = 1;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = &LAB_00463b27;
    }
    iVar2 = engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                      (param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return iVar2;
}
