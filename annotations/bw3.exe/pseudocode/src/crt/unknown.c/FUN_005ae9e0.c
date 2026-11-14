// Name: crt_unknown.c_FUN_005ae9e0
// Address: 005ae9e0
// Address Range: [[005ae9e0, 005aea3c]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ae9e0(uint param_1)

#include "nocturne.h"

uint FUN_005ae9e0(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1);
    BVar1 = FlushFileBuffers(*(HANDLE *)(DAT_00607bdc + param_1 * 4));
    if (BVar1 == 0) {
      FUN_005ab46c();
      uVar2 = 0xffffffff;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
    return uVar2;
  }
  setErrno(4);
  return 0xffffffff;
}
