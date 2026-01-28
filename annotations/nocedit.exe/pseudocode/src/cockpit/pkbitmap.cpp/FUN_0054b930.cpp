// Name: cockpit_pkbitmap.cpp_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: unknown
// Signature: void cockpit_pkbitmap_cpp_FUN_0054b930 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, undefined4 param_5,FILE *param_6)

#include "nocturne.h"

void cockpit_pkbitmap_cpp_FUN_0054b930
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               uint param_5,FILE *param_6)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char local_10 [4];
  uint local_c;
  
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
  local_c = param_5;
  crt_stdio_c_fwrite_FUN_005fdc00(local_10,8,1,param_6);
  if ((param_6->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x538;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header",unaff_EBX);
  return;
}
