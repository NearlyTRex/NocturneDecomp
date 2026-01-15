// Name: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_WriteScriptFile_FUN_00560b50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: void core_script.cpp_CScript_WriteScriptFile(CScript* pScript, FILE* pFilePtr) */

void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50(void)

{
  int iVar1;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// CScript version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// gGame->letterboxMode\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// gGame->allowDamageFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// gGame->allowEnemyAttackFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// letterBoxBlackT\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%g\n",(double)_DAT_0310f4a0);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// nextCmd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// currentMessage\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// cmdTimer\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%g\n",(double)*(float *)(in_stack_00000004 + 0x4c));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// dialogWavTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%g\n",(double)*(float *)(in_stack_00000004 + 0x50));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// whoIsSpeaking\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// focusActor\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// focusActorLocked\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// callStack count, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
  if (0 < *(int *)(in_stack_00000004 + 0x45c)) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x45c));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// CRC\n");
  core_script_cpp_CalculateCRC_FUN_00560d80();
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%u\n");
  return;
}
