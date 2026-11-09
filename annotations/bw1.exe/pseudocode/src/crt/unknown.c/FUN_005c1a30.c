// Name: crt_unknown.c_FUN_005c1a30
// Address: 005c1a30
// Address Range: [[005c1a30, 005c1a52]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c1a30(void)

#include "nocturne.h"

void FUN_005c1a30(void)

{
  ushort in_AX;
  bool bVar1;
  bool bVar2;
  
  do {
    bVar1 = (in_AX & 1) != 0;
    in_AX = in_AX >> 1;
    bVar2 = in_AX == 0;
  } while (!bVar1 && !bVar2);
  if (bVar1) {
    while (!bVar2) {
      in_AX = in_AX >> 1;
      bVar2 = in_AX == 0;
    }
  }
  return;
}
