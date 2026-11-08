// Name: FUN_004032b0
// Address: 004032b0
// Address Range: [[004032b0, 00403307]]
// Convention: unknown
// Signature: void FUN_004032b0(void)

#include "nocturne.h"

void FUN_004032b0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_005b24f0();
  FUN_005b2740();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c50950)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  iVar2 = FUN_005b2420();
  while( true ) {
    iVar1 = FUN_005b2420();
    if (iVar2 >> 0x10 != iVar1 >> 0x10) break;
    FUN_005b24f0();
  }
  FUN_005b24f0();
  FUN_005b2740();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_01c50950)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 600);
  return;
}
