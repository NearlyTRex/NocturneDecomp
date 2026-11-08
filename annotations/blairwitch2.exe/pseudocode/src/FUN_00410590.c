// Name: FUN_00410590
// Address: 00410590
// Address Range: [[00410590, 004105f8]]
// Convention: unknown
// Signature: void FUN_00410590(int param_1,float param_2)

#include "nocturne.h"

void FUN_00410590(int param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_005030c0(param_1 + 0x2b4,&param_2);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        FUN_00410170(param_1);
      }
      else if (uVar1 == 0x6e) {
        *(uint *)(param_1 + 0x25738) = 0;
        *(uint *)(param_1 + 0x2573c) = 0;
        *(uint *)(param_1 + 0x25718) = 0;
      }
    }
  } while (0.0 < param_2);
  return;
}
