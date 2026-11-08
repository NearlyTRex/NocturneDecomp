// Name: FUN_00547460
// Address: 00547460
// Address Range: [[00547460, 0054747a]]
// Convention: unknown
// Signature: void FUN_00547460(int param_1)

#include "nocturne.h"

void FUN_00547460(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x21b8) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x78);
  return;
}
