// Name: core_ground.cpp_FUN_004e6eee
// Address: 004e6eee
// Address Range: [[004e6eee, 004e6fce]]
// Convention: unknown
// Signature: _FILE * core_ground_cpp_FUN_004e6eee(char *param_1,char *param_2,char *param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE * core_ground_cpp_FUN_004e6eee(char *param_1,char *param_2,char *param_3,char *param_4)

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
    if (*pcVar3 == '.') goto LAB_004e6f33;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004e6f33;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004e6f33:
  if (pcVar4 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\ground.cpp";
    _DAT_01d1d404 = 0x40;
    core_main_c_FUN_005030e0("eopen - ext not found!");
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
  p_Var2 = engine_dosio_cpp_FUN_00479180(param_1,acStack_60,param_4);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\ground.cpp";
    _DAT_01d1d404 = 0x44;
    core_main_c_FUN_005030e0("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
