// Name: FUN_00490420
// Address: 00490420
// Address Range: [[00490420, 00490458]]
// Convention: unknown
// Signature: void FUN_00490420(int param_1)

#include "nocturne.h"

void FUN_00490420(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 4;
    FUN_00564486(*(uint *)(iVar1 + 0x144));
    *(uint *)(iVar1 + 0x144) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x10);
  FUN_0048fe50(param_1);
  return;
}
