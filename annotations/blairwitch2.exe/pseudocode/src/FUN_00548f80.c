// Name: FUN_00548f80
// Address: 00548f80
// Address Range: [[00548f80, 00548fb6]]
// Convention: unknown
// Signature: void FUN_00548f80(void)

#include "nocturne.h"

void FUN_00548f80(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x20ccff4;
  do {
    FUN_00541160(puVar1);
    puVar1 = puVar1 + 0x2ac0;
  } while (puVar1 != &DAT_02177ff4);
  FUN_005b77c0(&DAT_02177ff4,0,0x100);
  return;
}
