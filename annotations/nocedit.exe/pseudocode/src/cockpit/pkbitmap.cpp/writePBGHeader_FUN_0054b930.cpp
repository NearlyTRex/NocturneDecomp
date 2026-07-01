// Name: cockpit_pkbitmap.cpp_writePBGHeader_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_0054b930(int total_entries,_FILE *file_header)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_0054b930(int total_entries,_FILE *file_header)

{
  int iVar1;
  int iVar2;
  char *pcVar2;
  int *ppCVar3;
  int local_10 [2];
  
  pcVar2 = "PBM\032PBG\032" + 4;
  ppCVar3 = local_10;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppCVar3 = *(int *)pcVar2;
    pcVar2 = (char *)((int)pcVar2 + 4);
    ppCVar3 = ppCVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)ppCVar3 = (char)*(int *)pcVar2;
    pcVar2 = (char *)((int)pcVar2 + 1);
    ppCVar3 = (int *)((int)ppCVar3 + 1);
  }
  local_10[1] = total_entries;
  _fwrite(local_10,8,1,file_header);
  if ((file_header->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1336;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}
