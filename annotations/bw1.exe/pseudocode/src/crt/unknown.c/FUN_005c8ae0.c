// Name: crt_unknown.c_FUN_005c8ae0
// Address: 005c8ae0
// Address Range: [[005c8ae0, 005c8b37]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c8ae0(uint param_1)

#include "nocturne.h"

uint FUN_005c8ae0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (0x00000014 <= param_1) {
    return 0;
  }
  if ((int)param_1 < 3) {
    iVar1 = param_1 * 4;
    if ((PTR_DAT_00626834[iVar1 + 1] & 0x40) == 0) {
      PTR_DAT_00626834[iVar1 + 1] = PTR_DAT_00626834[iVar1 + 1] | 0x40;
      iVar2 = unkafter_zombie_cpp_FUN_005cbcc0(param_1);
      if (iVar2 != 0) {
        PTR_DAT_00626834[iVar1 + 1] = PTR_DAT_00626834[iVar1 + 1] | 0x20;
      }
    }
  }
  return *(uint *)(PTR_DAT_00626834 + param_1 * 4);
}
