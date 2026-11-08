// Name: FUN_00598f60
// Address: 00598f60
// Address Range: [[00598f60, 00598f98]]
// Convention: unknown
// Signature: undefined4 FUN_00598f60(int param_1)

#include "nocturne.h"

uint FUN_00598f60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar1 + 0x24) == 0xe) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    return 0;
  }
  uVar2 = FUN_004254b0(param_1);
  return uVar2;
}
