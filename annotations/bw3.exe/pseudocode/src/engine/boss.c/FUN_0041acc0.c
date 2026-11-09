// Name: engine_boss.c_FUN_0041acc0
// Address: 0041acc0
// Address Range: [[0041acc0, 0041ad0f]]
// Convention: unknown
// Signature: void engine_boss_c_FUN_0041acc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_boss_c_FUN_0041acc0(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_3c [13];
  
  bVar3 = 0;
  _DAT_01d71de0 = "..\\engine\\boss.c";
  _DAT_01d71de4 = 0x44;
  core_main_c_FUN_004e4330("modelStruct not supported");
  memset(auStack_3c,0,0x34);
  puVar2 = auStack_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
