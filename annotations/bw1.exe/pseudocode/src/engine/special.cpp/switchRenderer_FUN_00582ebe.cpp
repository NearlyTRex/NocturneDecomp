// Name: engine_special.cpp_switchRenderer_FUN_00582ebe
// Address: 00582ebe
// Address Range: [[00582ebe, 00582f04]]
// Convention: unknown
// Signature: void engine_special_cpp_switchRenderer_FUN_00582ebe(char *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_switchRenderer_FUN_00582ebe(char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  engine_special_cpp_kill_FUN_00581f20();
  pcVar2 = &DAT_006257d0;
  _DAT_02c83374 = param_2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  engine_special_cpp_loadExternalRenderer_FUN_00581310(_DAT_02c834c0);
  return;
}
