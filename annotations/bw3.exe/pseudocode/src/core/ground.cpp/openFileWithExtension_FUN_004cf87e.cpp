// Name: core_ground.cpp_openFileWithExtension_FUN_004cf87e
// Address: 004cf87e
// Address Range: [[004cf87e, 004cf95e]]
// Convention: unknown
// Signature: _FILE * core_ground_cpp_openFileWithExtension_FUN_004cf87e(char *param_1,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE * core_ground_cpp_openFileWithExtension_FUN_004cf87e(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char acStack_60 [80];
  
  pcVar4 = acStack_60;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    pcVar3 = acStack_60;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = acStack_60;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004cf8c3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004cf8c3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004cf8c3:
  if (pcVar4 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x40;
    core_main_c_FUN_004e4330("eopen - ext not found!");
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
  p_Var2 = engine_dosio_cpp_FUN_004659c0(param_1,acStack_60,param_4);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0x44;
    core_main_c_FUN_004e4330("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
