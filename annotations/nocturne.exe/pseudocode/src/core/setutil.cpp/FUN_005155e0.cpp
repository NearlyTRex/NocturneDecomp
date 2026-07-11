// Name: FUN_005155e0
// Address: 005155e0
// Address Range: [[005155e0, 00515669]]
// Convention: unknown
// Signature: void FUN_005155e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005155e0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    _DAT_01cc4800 = "..\\core\\setutil.cpp";
    _DAT_01cc4804 = 0x354;
    FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    FUN_004501c0(param_2,*(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
                 *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
