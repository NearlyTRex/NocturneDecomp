// Name: FUN_00573b00
// Address: 00573b00
// Address Range: [[00573b00, 00573b2c]]
// Convention: unknown
// Signature: void FUN_00573b00(void)

#include "nocturne.h"

void FUN_00573b00(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x2c745ec;
  FUN_00575d20();
  do {
    FUN_00571d70(puVar1);
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_02c78cec);
  FUN_00573e70();
  return;
}
