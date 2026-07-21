// Name: FUN_004f8570
// Address: 004f8570
// Address Range: [[004f8570, 004f8659]]
// Convention: unknown
// Signature: void FUN_004f8570(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8570(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x214) <= param_2)) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x1f1;
    FUN_004c8440("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  iVar1 = _fopen(param_1 + 4,0x58dac5);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x1f6;
    FUN_004c8440("CPodFile::getAuditRecord - can't open %s",param_1 + 4);
  }
  _fseek(iVar1,param_2 * 0x138 + *(int *)(param_1 + 0x218),0);
  _fread(auStack_144,0x138,1,iVar1);
  _fclose(iVar1);
  puVar2 = auStack_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
