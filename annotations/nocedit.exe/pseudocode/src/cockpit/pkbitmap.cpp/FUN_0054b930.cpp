// Name: cockpit_pkbitmap.cpp_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: unknown
// Signature: undefined cockpit_pkbitmap.cpp_FUN_0054b930()

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0054b930(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  FILE *in_stack_00000008;
  int in_stack_0000000c;
  
  pcVar2 = "PBM\032PBG\032";
  pcVar3 = &stack0xfffffff0;
  for (iVar1 = 1; pcVar2 = pcVar2 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *(uint *)pcVar2;
    pcVar3 = pcVar3 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&stack0xfffffff0,8,1,in_stack_00000008);
  if ((*(byte *)(in_stack_0000000c + 0xc) & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x538;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}
