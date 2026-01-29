// Name: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: unknown
// Signature: void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50(void)

#include "nocturne.h"

void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50(void)

{
  int iVar1;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"// CScript version\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// gGame->letterboxMode\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// gGame->allowDamageFlag\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// gGame->allowEnemyAttackFlag\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// letterBoxBlackT\n");
  _fprintf(in_stack_00000008,"%g\n",(double)FLOAT_0310f4a0);
  _fprintf(in_stack_00000008,"// nextCmd\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// currentMessage\n");
  _fprintf(in_stack_00000008,"\"%s\"\n");
  _fprintf(in_stack_00000008,"// cmdTimer\n");
  _fprintf(in_stack_00000008,"%g\n",(double)*(float *)(in_stack_00000004 + 0x4c));
  _fprintf(in_stack_00000008,"// dialogWavTime\n");
  _fprintf(in_stack_00000008,"%g\n",(double)*(float *)(in_stack_00000004 + 0x50));
  _fprintf(in_stack_00000008,"// whoIsSpeaking\n");
  core_script_cpp_FUN_005607e0();
  _fprintf(in_stack_00000008,"// focusActor\n");
  core_script_cpp_FUN_005607e0();
  _fprintf(in_stack_00000008,"// focusActorLocked\n");
  _fprintf(in_stack_00000008,"%d\n");
  _fprintf(in_stack_00000008,"// callStack count, list\n");
  iVar1 = 0;
  _fprintf(in_stack_00000008,"%d\n");
  if (0 < *(int *)(in_stack_00000004 + 0x45c)) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(in_stack_00000008,"%d\n");
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x45c));
  }
  _fprintf(in_stack_00000008,"// CRC\n");
  core_script_cpp_CalculateCRC_FUN_00560d80();
  _fprintf(in_stack_00000008,"%u\n");
  return;
}
