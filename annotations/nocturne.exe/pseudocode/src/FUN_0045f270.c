// Name: FUN_0045f270
// Address: 0045f270
// Address Range: [[0045f270, 0045f3b5]]
// Convention: unknown
// Signature: int FUN_0045f270(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045f270(int *param_1,int param_2)

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
  local_14 = 0xffffffff;
  iVar3 = 0;
  iVar2 = param_2;
  if (0 < *(int *)(param_2 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x18);
      *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
      iVar4 = iVar4 + 4;
      local_14 = local_14 & *(uint *)(*param_1 + 0x10 + iVar1 * 0x30);
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if ((param_1[1] == 0) && (param_1[8] == 0)) {
      iVar4 = 0;
      iVar2 = 0;
      iVar3 = param_2;
      if (0 < *(int *)(param_2 + 4)) {
        do {
          iVar1 = *(int *)(&DAT_01b4d76c + iVar2);
          *(uint *)(*param_1 + 0x18 + iVar1 * 0x30) = *(uint *)(iVar3 + 0x1c);
          *(uint *)(*param_1 + iVar1 * 0x30 + 0x1c) = *(uint *)(iVar3 + 0x20);
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      _DAT_01c039a0 = 0xc1;
      _DAT_01c039a4 = 3;
      _DAT_01c00c7c = FUN_00464200;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = FUN_00463a79;
    }
    iVar2 = engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                      (param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return iVar2;
}
