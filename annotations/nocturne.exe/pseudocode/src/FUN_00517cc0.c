// Name: FUN_00517cc0
// Address: 00517cc0
// Address Range: [[00517cc0, 00517d9d]]
// Convention: unknown
// Signature: void FUN_00517cc0(int *param_1)

#include "nocturne.h"

void FUN_00517cc0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      uVar1 = FUN_0056445f(piVar2[0x10],&DAT_005a1ee0);
      FUN_00564486(uVar1);
      piVar2[0x10] = 0;
      FUN_00564486(piVar2[0x1f]);
      piVar2[0x1f] = 0;
      FUN_00564486(piVar2[0x24]);
      piVar2[0x24] = 0;
      FUN_00564486(piVar2[0x29]);
      piVar2[0x29] = 0;
      piVar2[0xb] = 0;
      piVar2[0x15] = 0;
      piVar2[0x1a] = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_00563cc0(param_1 + 0x30,0,0xb40);
  param_1[0x300] = 0;
  *param_1 = 0;
  return;
}
