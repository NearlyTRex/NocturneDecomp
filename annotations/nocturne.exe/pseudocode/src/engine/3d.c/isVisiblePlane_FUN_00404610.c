// Name: engine_3d.c_isVisiblePlane_FUN_00404610
// Address: 00404610
// Address Range: [[00404610, 0040467a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(int *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  DAT_006b026c = DAT_006b026c + 1;
  uVar4 = 1;
  if (((DAT_006b0280 == 0) &&
      (((*param_1 != 0 || param_1[1] != 0) || param_1[2] != 0) || param_1[3] != 0)) &&
     (lVar3 = (longlong)param_1[1] * (longlong)_DAT_01c039bc +
              (longlong)*param_1 * (longlong)_DAT_01c039b8 +
              (longlong)param_1[2] * (longlong)_DAT_01c039c0,
     iVar5 = (int)((ulonglong)lVar3 >> 0x20), iVar6 = param_1[3] >> 0x1f,
     uVar1 = (uint)((uint)param_1[3] < (uint)lVar3), iVar2 = iVar6 - iVar5, uVar4 = 1,
     (SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) == (int)(iVar2 - uVar1) < 0)) {
    uVar4 = 0;
  }
  return uVar4;
}
