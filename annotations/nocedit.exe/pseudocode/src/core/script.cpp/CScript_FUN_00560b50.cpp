// Name: core_script.cpp_CScript_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00560b50(CScript *this_ptr,_FILE *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00560b50(CScript *this_ptr,_FILE *param_2)

{
  int iVar1;
  
  _fprintf(param_2,"// CScript version\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// gGame->letterboxMode\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// gGame->allowDamageFlag\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// gGame->allowEnemyAttackFlag\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// letterBoxBlackT\n");
  _fprintf(param_2,"%g\n",(double)g_ScriptTimeScale);
  _fprintf(param_2,"// nextCmd\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// currentMessage\n");
  _fprintf(param_2,"\"%s\"\n");
  _fprintf(param_2,"// cmdTimer\n");
  _fprintf(param_2,"%g\n",(double)this_ptr->cmd_timer);
  _fprintf(param_2,"// dialogWavTime\n");
  _fprintf(param_2,"%g\n",(double)this_ptr->dialog_wav_time);
  _fprintf(param_2,"// whoIsSpeaking\n");
  core_script_cpp_FUN_005607e0(param_2,(int *)&this_ptr->who_is_speaking);
  _fprintf(param_2,"// focusActor\n");
  core_script_cpp_FUN_005607e0(param_2,(int *)&this_ptr->focus_actor);
  _fprintf(param_2,"// focusActorLocked\n");
  _fprintf(param_2,"%d\n");
  _fprintf(param_2,"// callStack count, list\n");
  iVar1 = 0;
  _fprintf(param_2,"%d\n");
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(param_2,"%d\n");
    } while (iVar1 < this_ptr->call_stack_count);
  }
  _fprintf(param_2,"// CRC\n");
  core_script_cpp_CScript_FUN_00560d80(this_ptr);
  _fprintf(param_2,"%u\n");
  return;
}
