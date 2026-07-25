// Name: FUN_004f4f10
// Address: 004f4f10
// Address Range: [[004f4f10, 004f4f89]]
// Convention: unknown
// Signature: void FUN_004f4f10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004f4f10(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int in_stack_00000008;
  uint local_10 [2];
  
  puVar2 = &DAT_005be180;
  puVar3 = local_10;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  _fwrite(local_10,8,1);
  if ((*(byte *)(in_stack_00000008 + 0xc) & 0x20) == 0) {
    return;
  }
  _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01cc4804 = 0x53b;
  FUN_004c8440("Error writing PBG header");
  return;
}
