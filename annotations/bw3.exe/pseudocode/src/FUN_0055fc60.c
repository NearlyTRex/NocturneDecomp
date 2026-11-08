// Name: FUN_0055fc60
// Address: 0055fc60
// Address Range: [[0055fc60, 0055fcb7]]
// Convention: unknown
// Signature: void FUN_0055fc60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fc60(void)

{
  int iVar1;
  
  if (_DAT_02cf5840 == 0) {
    FUN_00482c70(&DAT_02cf5840,"sound","*.wav");
    FUN_00482c70(&DAT_02cf5840,"sound","*.mp3");
  }
  FUN_00558730();
  iVar1 = FUN_005586d0();
  if (iVar1 < 1) {
    return;
  }
  FUN_00558290(0x10,2,0xac44);
  return;
}
