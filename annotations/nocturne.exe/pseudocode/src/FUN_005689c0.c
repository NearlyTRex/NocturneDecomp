// Name: FUN_005689c0
// Address: 005689c0
// Address Range: [[005689c0, 00568a49]]
// Convention: unknown
// Signature: DWORD FUN_005689c0(uint param_1,int param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005689c0(uint param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_005c1ac0)(param_1);
    uVar1 = FUN_0056f220(param_1);
    if ((0 < param_2) && ((uVar1 & 0x80) == 0)) {
      FUN_0056f278(param_1,uVar1 | 0x8000);
    }
    DVar2 = SetFilePointer(*(HANDLE *)(DAT_005c1f54 + param_1 * 4),param_2,(PLONG)0x0,param_3);
    (*(code *)PTR_FUN_005c1ac4)(param_1);
    if (DVar2 == 0xffffffff) {
      FUN_0056c73c();
    }
    return DVar2;
  }
  FUN_00568e80(4);
  return 0xffffffff;
}
