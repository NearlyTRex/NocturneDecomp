// Name: FUN_0052dd20
// Address: 0052dd20
// Address Range: [[0052dd20, 0052dd77]]
// Convention: unknown
// Signature: void FUN_0052dd20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052dd20(void)

{
  int iVar1;
  
  if (_DAT_02dc9610 == 0) {
    FUN_004748b0(&DAT_02dc9610,"sound","*.wav");
    FUN_004748b0(&DAT_02dc9610,"sound","*.mp3");
  }
  FUN_00528500();
  iVar1 = FUN_005284f0();
  if (iVar1 == 0) {
    return;
  }
  FUN_005280c0(0x10,2,0xac44);
  return;
}
