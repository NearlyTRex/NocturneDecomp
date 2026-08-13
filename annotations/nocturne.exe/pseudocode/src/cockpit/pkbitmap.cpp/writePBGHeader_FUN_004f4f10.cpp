// Name: cockpit_pkbitmap.cpp_writePBGHeader_FUN_004f4f10
// Address: 004f4f10
// Address Range: [[004f4f10, 004f4f89]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_004f4f10(int total_entries,_FILE *file_header)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_004f4f10(int total_entries,_FILE *file_header)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int local_10 [2];
  
  puVar2 = &DAT_005be180;
  piVar3 = local_10;
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
  local_10[1] = total_entries;
  _fwrite(local_10,8,1,file_header);
  if ((file_header->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1339;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Error writing PBG header");
  return;
}
