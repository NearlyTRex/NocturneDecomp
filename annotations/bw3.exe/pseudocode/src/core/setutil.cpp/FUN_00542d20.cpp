// Name: FUN_00542d20
// Address: 00542d20
// Address Range: [[00542d20, 00542da9]]
// Convention: unknown
// Signature: void FUN_00542d20(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542d20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x387;
    FUN_004e4330("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    FUN_0045db40(param_2,*(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
                 *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
