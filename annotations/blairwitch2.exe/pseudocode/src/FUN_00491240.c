// Name: FUN_00491240
// Address: 00491240
// Address Range: [[00491240, 00491272]]
// Convention: unknown
// Signature: undefined4 FUN_00491240(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00491240(int param_1,int param_2)

{
  if (param_2 == -1) {
    return 0xbf800000;
  }
  return *(uint *)(param_2 * 4 + param_1 + 0x3354);
}
