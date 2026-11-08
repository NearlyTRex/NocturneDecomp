// Name: FUN_004bb570
// Address: 004bb570
// Address Range: [[004bb570, 004bb5ec]]
// Convention: unknown
// Signature: void FUN_004bb570(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb570(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  iVar1 = FUN_005c0f32(0x120);
  puVar2 = (uint *)0x0;
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_004ba850(iVar1,param_1 + 0x48,*(uint *)(param_1 + 0x2c));
  }
  if (puVar2 == (uint *)0x0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x581;
    FUN_005030e0("Out of memory");
  }
  *puVar2 = *(uint *)(param_1 + 0x40);
  puVar2[1] = *(uint *)(param_1 + 0x44);
  puVar2[6] = *(uint *)(param_1 + 0x34);
  FUN_004bb5f0(param_1,puVar2);
  *(byte *)(param_1 + 0x48) = 0;
  return;
}
