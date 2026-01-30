// Name: cockpit_pkbitmap.cpp_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_0054b930(void)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_FUN_0054b930(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  _FILE *in_stack_00000008;
  char local_10 [8];
  
  pcVar2 = "PBM\032PBG\032";
  pcVar3 = local_10;
  for (iVar1 = 1; pcVar2 = pcVar2 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *(uint *)pcVar2;
    pcVar3 = pcVar3 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  _fwrite(local_10,8,1,in_stack_00000008);
  if ((in_stack_00000008->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x538;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}
