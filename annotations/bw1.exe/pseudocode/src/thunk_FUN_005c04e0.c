// Name: thunk_FUN_005c04e0
// Address: 005c3160
// Address Range: [[005c3160, 005c3164]]
// Convention: unknown
// Signature: int thunk_FUN_005c04e0(byte *param_1,byte *param_2)

#include "nocturne.h"

int thunk_FUN_005c04e0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = *param_2;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 + 0x20;
    }
    if ((bVar1 != bVar2) || (bVar2 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar1 - (uint)bVar2;
}
