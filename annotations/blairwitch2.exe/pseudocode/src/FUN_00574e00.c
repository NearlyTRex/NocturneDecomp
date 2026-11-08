// Name: FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e76]]
// Convention: unknown
// Signature: int FUN_00574e00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00574e00(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_0070ca74 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = FUN_00574490(_DAT_02652eb0,*(uint *)(param_1 + 4) & 0xffff,param_1 + 8);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = FUN_00573b80(_DAT_02652eb0,param_1 + 8);
    }
    *(int *)(param_1 + 4) = iVar1;
    _DAT_02652eac = iVar1;
    FUN_00574520(_DAT_02652eb0,param_1,bVar2);
    return param_1 + 0x18;
  }
  return param_1 + 0x18;
}
