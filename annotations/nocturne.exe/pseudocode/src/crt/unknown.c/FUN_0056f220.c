// Name: crt_unknown.c_FUN_0056f220
// Address: 0056f220
// Address Range: [[0056f220, 0056f277]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056f220(uint param_1)

#include "nocturne.h"

uint FUN_0056f220(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (0x00000014 <= param_1) {
    return 0;
  }
  if ((int)param_1 < 3) {
    iVar1 = param_1 * 4;
    if ((PTR_DAT_005c1fe4[iVar1 + 1] & 0x40) == 0) {
      PTR_DAT_005c1fe4[iVar1 + 1] = PTR_DAT_005c1fe4[iVar1 + 1] | 0x40;
      iVar2 = IsSpecialDevice(param_1);
      if (iVar2 != 0) {
        PTR_DAT_005c1fe4[iVar1 + 1] = PTR_DAT_005c1fe4[iVar1 + 1] | 0x20;
      }
    }
  }
  return *(uint *)(PTR_DAT_005c1fe4 + param_1 * 4);
}
