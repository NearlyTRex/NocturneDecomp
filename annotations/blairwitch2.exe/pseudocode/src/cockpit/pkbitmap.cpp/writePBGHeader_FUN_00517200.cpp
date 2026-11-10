// Name: cockpit_pkbitmap.cpp_writePBGHeader_FUN_00517200
// Address: 00517200
// Address Range: [[00517200, 00517279]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00517200(int total_entries,_FILE *file_header)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00517200(int total_entries,_FILE *file_header)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_10 [2];
  
  puVar2 = (uint *)0x61b3c0;
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
  if (((byte)file_header[0xc] & 0x20) == 0) {
    return;
  }
  _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d046a4 = 0x556;
  core_main_c_FUN_004e4500("Error writing PBG header");
  return;
}
