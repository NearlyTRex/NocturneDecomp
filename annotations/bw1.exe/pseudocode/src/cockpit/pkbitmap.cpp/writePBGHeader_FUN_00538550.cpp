// Name: cockpit_pkbitmap.cpp_writePBGHeader_FUN_00538550
// Address: 00538550
// Address Range: [[00538550, 005385c9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00538550(int total_entries,_FILE *file_header)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00538550(int total_entries,_FILE *file_header)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_10 [2];
  
  puVar2 = (uint *)0x622820;
  piVar3 = aiStack_10;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)piVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    piVar3 = (uint *)((int)piVar3 + 1);
  }
  aiStack_10[1] = total_entries;
  _fwrite(aiStack_10,8,1,file_header);
  if ((file_header->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1368;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Error writing PBG header");
  return;
}
