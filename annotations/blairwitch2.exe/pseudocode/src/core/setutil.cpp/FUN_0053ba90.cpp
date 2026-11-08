// Name: FUN_0053ba90
// Address: 0053ba90
// Address Range: [[0053ba90, 0053bb19]]
// Convention: unknown
// Signature: void FUN_0053ba90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053ba90(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x387;
    FUN_004e4500("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    FUN_0044b600(param_2,*(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
                 *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
