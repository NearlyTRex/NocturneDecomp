// Name: FUN_0057cb30
// Address: 0057cb30
// Address Range: [[0057cb30, 0057cb87]]
// Convention: unknown
// Signature: void FUN_0057cb30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057cb30(void)

{
  int iVar1;
  
  if (_DAT_02c82c20 == 0) {
    FUN_0049a0d0(&DAT_02c82c20,"sound","*.wav");
    FUN_0049a0d0(&DAT_02c82c20,"sound","*.mp3");
  }
  FUN_005755c0();
  iVar1 = FUN_00575560();
  if (iVar1 < 1) {
    return;
  }
  FUN_00575120(0x10,2,0xac44);
  return;
}
