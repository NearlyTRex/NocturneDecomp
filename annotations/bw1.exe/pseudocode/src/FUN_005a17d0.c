// Name: FUN_005a17d0
// Address: 005a17d0
// Address Range: [[005a17d0, 005a17ea]]
// Convention: unknown
// Signature: void FUN_005a17d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005a17d0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005a14b0(param_1);
  *puVar1 = &PTR_FUN_00607424;
  puVar1[1] = 0;
  return;
}
