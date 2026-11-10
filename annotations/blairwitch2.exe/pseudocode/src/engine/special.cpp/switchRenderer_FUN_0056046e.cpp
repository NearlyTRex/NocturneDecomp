// Name: engine_special.cpp_switchRenderer_FUN_0056046e
// Address: 0056046e
// Address Range: [[0056046e, 005604b4]]
// Convention: unknown
// Signature: void engine_special_cpp_switchRenderer_FUN_0056046e(char *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_switchRenderer_FUN_0056046e(char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  engine_special_cpp_kill_FUN_0055f4d0();
  pcVar2 = &DAT_0061e180;
  _DAT_0264bba4 = param_2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  engine_special_cpp_FUN_0055e8c0(_DAT_0264bcf0);
  return;
}
