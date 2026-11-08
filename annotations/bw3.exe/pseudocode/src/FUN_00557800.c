// Name: FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 00557831]]
// Convention: unknown
// Signature: void FUN_00557800(void)

#include "nocturne.h"

void FUN_00557800(void)

{
  int iVar1;
  
  FUN_00558e90();
  iVar1 = 0x2cebc24;
  FUN_00556c60();
  do {
    FUN_00553520(iVar1);
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x2cf2824);
  FUN_00556fd0();
  return;
}
