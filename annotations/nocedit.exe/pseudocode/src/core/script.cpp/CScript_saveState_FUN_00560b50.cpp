// Name: core_script.cpp_CScript_saveState_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_saveState_FUN_00560b50(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_saveState_FUN_00560b50(CScript *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"// CScript version\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// gGame->letterboxMode\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// gGame->allowDamageFlag\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// gGame->allowEnemyAttackFlag\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// letterBoxBlackT\n");
  _fprintf(file_handle,"%g\n",(double)g_ScriptTimeScale);
  _fprintf(file_handle,"// nextCmd\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// currentMessage\n");
  _fprintf(file_handle,"\"%s\"\n");
  _fprintf(file_handle,"// cmdTimer\n");
  _fprintf(file_handle,"%g\n",(double)this_ptr->cmd_timer);
  _fprintf(file_handle,"// dialogWavTime\n");
  _fprintf(file_handle,"%g\n",(double)this_ptr->dialog_wav_time);
  _fprintf(file_handle,"// whoIsSpeaking\n");
  core_script_cpp_writeActorReference_FUN_005607e0
            (file_handle,(CDemonActor *)&this_ptr->who_is_speaking);
  _fprintf(file_handle,"// focusActor\n");
  core_script_cpp_writeActorReference_FUN_005607e0
            (file_handle,(CDemonActor *)&this_ptr->focus_actor);
  _fprintf(file_handle,"// focusActorLocked\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// callStack count, list\n");
  iVar1 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%d\n");
    } while (iVar1 < this_ptr->call_stack_count);
  }
  _fprintf(file_handle,"// CRC\n");
  core_script_cpp_CScript_computeChecksum_FUN_00560d80(this_ptr);
  _fprintf(file_handle,"%u\n");
  return;
}
