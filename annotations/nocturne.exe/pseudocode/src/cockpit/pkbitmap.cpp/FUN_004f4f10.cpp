// Name: cockpit_pkbitmap.cpp_FUN_004f4f10
// Address: 004f4f10
// Address Range: [[004f4f10, 004f4f89]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_004f4f10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbitmap_cpp_FUN_004f4f10(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  _FILE *in_stack_00000008;
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
  _fwrite(local_10,8,1,in_stack_00000008);
  if ((in_stack_00000008->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1339;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Error writing PBG header");
  return;
}
