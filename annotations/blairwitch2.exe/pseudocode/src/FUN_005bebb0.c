// Name: FUN_005bebb0
// Address: 005bebb0
// Address Range: [[005bebb0, 005bec39]]
// Convention: unknown
// Signature: DWORD FUN_005bebb0(uint param_1,int param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005bebb0(uint param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    uVar1 = FUN_005c0820(param_1);
    if ((0 < param_2) && ((uVar1 & 0x80) == 0)) {
      FUN_005c0878(param_1,uVar1 | 0x8000);
    }
    DVar2 = SetFilePointer(*(HANDLE *)(DAT_0061f4d8 + param_1 * 4),param_2,(PLONG)0x0,param_3);
    (*(code *)PTR_FUN_0061f2ac)(param_1);
    if (DVar2 == 0xffffffff) {
      FUN_005c036c();
    }
    return DVar2;
  }
  FUN_005be180(4);
  return 0xffffffff;
}
