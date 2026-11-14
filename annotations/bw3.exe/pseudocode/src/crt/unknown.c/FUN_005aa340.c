// Name: crt_unknown.c_FUN_005aa340
// Address: 005aa340
// Address Range: [[005aa340, 005aa372]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa340(int param_1)

#include "nocturne.h"

void FUN_005aa340(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0xd) & 0x20) == 0) {
    iVar2 = FUN_005aeb30(*(uint *)(param_1 + 0x10));
    if (iVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 0xd);
      *(byte *)(param_1 + 0xd) = bVar1 | 0x20;
      if ((bVar1 & 7) == 0) {
        *(byte *)(param_1 + 0xd) = bVar1 | 0x22;
      }
    }
  }
  return;
}
