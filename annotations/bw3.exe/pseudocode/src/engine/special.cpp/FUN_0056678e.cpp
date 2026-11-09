// Name: engine_special.cpp_FUN_0056678e
// Address: 0056678e
// Address Range: [[0056678e, 005667d4]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0056678e(char *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0056678e(char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  engine_special_cpp_kill_FUN_005657f0();
  pcVar2 = &DAT_00606730;
  _DAT_02cf5fd0 = param_2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  engine_special_cpp_FUN_00564be0(_DAT_02cf611c);
  return;
}
