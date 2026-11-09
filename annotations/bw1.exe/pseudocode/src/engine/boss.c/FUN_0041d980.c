// Name: engine_boss.c_FUN_0041d980
// Address: 0041d980
// Address Range: [[0041d980, 0041d9cf]]
// Convention: unknown
// Signature: void engine_boss_c_FUN_0041d980(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_boss_c_FUN_0041d980(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_3c [13];
  
  bVar3 = 0;
  _DAT_01d1d400 = "..\\engine\\boss.c";
  _DAT_01d1d404 = 0x44;
  core_main_c_FUN_005030e0("modelStruct not supported");
  memset(auStack_3c,0,0x34);
  puVar2 = auStack_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
