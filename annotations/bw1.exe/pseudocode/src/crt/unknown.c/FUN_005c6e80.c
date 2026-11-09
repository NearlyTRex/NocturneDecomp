// Name: crt_unknown.c_FUN_005c6e80
// Address: 005c6e80
// Address Range: [[005c6e80, 005c6f09]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005c6e80(uint param_1,int param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005c6e80(uint param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1);
    uVar1 = FUN_005c8ae0(param_1);
    if ((0 < param_2) && ((uVar1 & 0x80) == 0)) {
      FUN_005c8b38(param_1,uVar1 | 0x8000);
    }
    DVar2 = SetFilePointer(*(HANDLE *)(DAT_00626838 + param_1 * 4),param_2,(PLONG)0x0,param_3);
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
    if (DVar2 == 0xffffffff) {
      FUN_005c862c();
    }
    return DVar2;
  }
  setErrno(4);
  return 0xffffffff;
}
