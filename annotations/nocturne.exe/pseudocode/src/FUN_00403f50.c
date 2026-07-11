// Name: FUN_00403f50
// Address: 00403f50
// Address Range: [[00403f50, 00403fa7]]
// Convention: unknown
// Signature: void FUN_00403f50(void)

#include "nocturne.h"

void FUN_00403f50(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00558ae0();
  FUN_00558d50();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c02598)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  iVar2 = FUN_00558a30();
  while( true ) {
    iVar1 = FUN_00558a30();
    if (iVar2 >> 0x10 != iVar1 >> 0x10) break;
    FUN_00558ae0();
  }
  FUN_00558ae0();
  FUN_00558d50();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c02598)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  return;
}
