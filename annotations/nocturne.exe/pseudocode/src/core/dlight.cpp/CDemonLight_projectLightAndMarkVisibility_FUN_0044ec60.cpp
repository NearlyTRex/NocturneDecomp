// Name: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
// Address: 0044ec60
// Address Range: [[0044ec60, 0044ed48]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60(int param_1,int *param_2,byte param_3,byte param_4)

#include "nocturne.h"

int __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60(int param_1,int *param_2,byte param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = 0;
  uVar1 = 0;
  if ((param_3 & 1) != 0) {
    uVar1 = 0x4000;
    uVar5 = 0x4000;
  }
  if ((param_4 & 1) != 0) {
    uVar5 = uVar5 | 0x8000;
    uVar1 = uVar1 | 0x8000;
  }
  if (0 < param_2[2]) {
    uVar4 = (int)(uVar1 + *param_2) >> 0x10;
    iVar8 = (int)(uVar5 + param_2[1]) >> 0x10;
    if (*(int *)(param_1 + 0x1cb8) == 0) {
      if ((((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x1cc0))) && (-1 < iVar8)) &&
         (iVar8 < *(int *)(param_1 + 0x1cc4))) goto LAB_0044ecf3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1cc0) / 2;
      if ((int)((iVar8 - iVar2) * (iVar8 - iVar2) + (uVar4 - iVar2) * (uVar4 - iVar2)) <=
          iVar2 * iVar2) {
LAB_0044ecf3:
        iVar2 = *(int *)(param_1 + 0x1cc0) * iVar8;
        iVar6 = iVar2 >> 0x1f;
        iVar7 = (int)(uVar1 + *param_2) >> 0x1f;
        pbVar3 = (byte *)(*(int *)(param_1 + 0x2fa0) +
                         ((int)((iVar2 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3) +
                         ((int)((uVar4 + iVar7 * -8) - (uint)(iVar7 << 2 < 0)) >> 3));
        *pbVar3 = *pbVar3 | (&DAT_005ae450)[uVar4 & 7];
        return *(int *)(param_1 + 0x2f94) + (uVar4 + iVar8 * *(int *)(param_1 + 0x1cc0)) * 2;
      }
    }
  }
  return 0;
}
