// Name: cockpit_pkbitmap.cpp_FUN_00510230
// Address: 00510230
// Address Range: [[00510230, 005102a9]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_00510230(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbitmap_cpp_FUN_00510230(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint auStack_10 [2];
  
  puVar2 = (uint *)0x6036fc;
  puVar3 = auStack_10;
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
  auStack_10[1] = param_1;
  _fwrite(auStack_10,8,1,param_2);
  if ((*(byte *)(param_2 + 0xc) & 0x20) == 0) {
    return;
  }
  _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d71de4 = 0x558;
  core_main_c_FUN_004e4330("Error writing PBG header");
  return;
}
