// Name: FUN_0055c5f0
// Address: 0055c5f0
// Address Range: [[0055c5f0, 0055c6ee]]
// Convention: unknown
// Signature: void FUN_0055c5f0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055c5f0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x140) != 0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0xf7;
    FUN_005030e0("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",param_1);
  }
  if ((char *)(param_2 + 4) != param_1 + 0x100) {
    *(uint *)(param_2 + 4) = *(uint *)(param_1 + 0x100);
    *(uint *)(param_2 + 8) = *(uint *)(param_1 + 0x104);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_1 + 0x108);
  }
  pcVar5 = param_1 + 0x118;
  puVar4 = (uint *)(param_2 + 0x10);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  pcVar5 = (char *)(param_2 + 0x40);
  *(uint *)(param_2 + 0x38) = *(uint *)(param_1 + 0x144);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_00453540(param_2,*(uint *)(param_1 + 0x148));
  if (*(float *)(param_1 + 0x148) < *(float *)(0x01E82168 + 0x14d150)) {
    FUN_00445430(PTR_DAT_00611100,"Ambient set low by script\n");
  }
  if (*(float *)(param_1 + 0x148) <= (float)_DAT_005f11e9) {
    return;
  }
  FUN_00445430(PTR_DAT_00611100,"Ambient set ridiculously high\n");
  return;
}
