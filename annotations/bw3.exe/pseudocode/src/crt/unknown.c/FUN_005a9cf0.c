// Name: crt_unknown.c_FUN_005a9cf0
// Address: 005a9cf0
// Address Range: [[005a9cf0, 005a9d79]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005a9cf0(uint param_1,int param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005a9cf0(uint param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1);
    uVar1 = FUN_005ab920(param_1);
    if ((0 < param_2) && ((uVar1 & 0x80) == 0)) {
      FUN_005ab978(param_1,uVar1 | 0x8000);
    }
    DVar2 = SetFilePointer(*(HANDLE *)(DAT_00607bdc + param_1 * 4),param_2,(PLONG)0x0,param_3);
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
    if (DVar2 == 0xffffffff) {
      FUN_005ab46c();
    }
    return DVar2;
  }
  setErrno(4);
  return 0xffffffff;
}
