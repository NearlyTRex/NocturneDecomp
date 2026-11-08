// Name: FUN_0055a100
// Address: 0055a100
// Address Range: [[0055a100, 0055a157]]
// Convention: unknown
// Signature: void FUN_0055a100(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a100(void)

{
  int iVar1;
  
  if (_DAT_0264b450 == 0) {
    FUN_00481a70(&DAT_0264b450,"sound","*.wav");
    FUN_00481a70(&DAT_0264b450,"sound","*.mp3");
  }
  FUN_00552b90();
  iVar1 = FUN_00552b30();
  if (iVar1 < 1) {
    return;
  }
  FUN_005526f0(0x10,2,0xac44);
  return;
}
