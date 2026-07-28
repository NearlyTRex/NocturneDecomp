// Name: core_ground.cpp_openFileWithExtension_FUN_004b1090
// Address: 004b1090
// Address Range: [[004b1090, 004b116e]]
// Convention: unknown
// Signature: _FILE * core_ground_cpp_openFileWithExtension_FUN_004b1090(char *param_1,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

_FILE * core_ground_cpp_openFileWithExtension_FUN_004b1090(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char local_60 [80];
  
  pcVar4 = local_60;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    pcVar3 = local_60;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_60;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004b10d3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004b10d3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004b10d3:
  if (pcVar4 == (char *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x40;
    core_main_c_FUN_004c8440("eopen - ext not found!");
  }
  pcVar4 = pcVar4 + 1;
  do {
    cVar1 = *param_3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60(param_1,local_60,param_4);
  if (p_Var2 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0x44;
    core_main_c_FUN_004c8440("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
