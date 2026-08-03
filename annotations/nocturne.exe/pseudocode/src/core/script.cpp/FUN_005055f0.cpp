// Name: core_script.cpp_FUN_005055f0
// Address: 005055f0
// Address Range: [[005055f0, 0050581a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005055f0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_005055f0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  
  _fprintf(file_handle,"// CScript version\n");
  _fprintf(file_handle,"%d\n",6);
  _fprintf(file_handle,"// gGame->letterboxMode\n");
  _fprintf(file_handle,"%d\n",g_CGame_PTR_005b9354->letterbox_mode);
  _fprintf(file_handle,"// gGame->allowDamageFlag\n");
  _fprintf(file_handle,"%d\n",g_CGame_PTR_005b9354->allow_damage_flag)
  ;
  _fprintf(file_handle,"// gGame->allowEnemyAttackFlag\n");
  _fprintf(file_handle,"%d\n",g_CGame_PTR_005b9354->allow_enemy_attack_flag);
  _fprintf(file_handle,"// letterBoxBlackT\n");
  _fprintf(file_handle,"%g\n",(double)_DAT_01e56c20);
  _fprintf(file_handle,"// nextCmd\n");
  _fprintf(file_handle,"%d\n",this_ptr->next_cmd);
  _fprintf(file_handle,"// currentMessage\n");
  _fprintf(file_handle,"\"%s\"\n",this_ptr->current_message);
  _fprintf(file_handle,"// cmdTimer\n");
  _fprintf(file_handle,"%g\n",(double)this_ptr->cmd_timer);
  _fprintf(file_handle,"// dialogWavTime\n");
  _fprintf(file_handle,"%g\n",(double)this_ptr->dialog_wav_time);
  _fprintf(file_handle);
  core_script_cpp_writeActorReference_FUN_00505280(file_handle,&this_ptr->who_is_speaking);
  _fprintf(file_handle);
  core_script_cpp_writeActorReference_FUN_00505280(file_handle,&this_ptr->focus_actor);
  _fprintf(file_handle);
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle);
  iVar2 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file_handle,"%d\n");
    } while (iVar2 < this_ptr->call_stack_count);
  }
  _fprintf(file_handle);
  uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(this_ptr);
  _fprintf(file_handle,"%u\n",uVar1);
  return;
}
