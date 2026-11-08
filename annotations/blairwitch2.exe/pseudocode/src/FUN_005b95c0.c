// Name: FUN_005b95c0
// Address: 005b95c0
// Address Range: [[005b95c0, 005b95e2]]
// Convention: unknown
// Signature: void FUN_005b95c0(void)

#include "nocturne.h"

void FUN_005b95c0(void)

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
