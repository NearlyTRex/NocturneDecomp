// Name: engine_special.cpp_switchRenderer_FUN_00566790
// Address: 00566790
// Address Range: [[00566790, 005667d4]]
// Convention: unknown
// Signature: void engine_special_cpp_switchRenderer_FUN_00566790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_special_cpp_switchRenderer_FUN_00566790(void)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000004;
  uint in_stack_00000008;
  
  engine_special_cpp_kill_FUN_005657f0();
  pcVar2 = &DAT_00606730;
  _DAT_02cf5fd0 = in_stack_00000008;
  do {
    cVar1 = *in_stack_00000004;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000004[1];
    in_stack_00000004 = in_stack_00000004 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  engine_special_cpp_loadExternalRenderer_FUN_00564be0(_DAT_02cf611c);
  return;
}
