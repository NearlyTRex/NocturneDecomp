// Name: core_script.cpp_CScript_saveState_FUN_0054b710
// Address: 0054b710
// Address Range: [[0054b710, 0054b93a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_saveState_FUN_0054b710(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_saveState_FUN_0054b710(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  
  FUN_005c03c0(file_handle,"// CScript version\n");
  FUN_005c03c0(file_handle,&DAT_005f0185,6);
  FUN_005c03c0(file_handle,"// gGame->letterboxMode\n");
  FUN_005c03c0(file_handle,&DAT_005f01a2,g_CGamePtr->letterbox_mode);
  FUN_005c03c0(file_handle,"// gGame->allowDamageFlag\n");
  FUN_005c03c0(file_handle,&DAT_005f01c1,g_CGamePtr->allow_damage_flag);
  FUN_005c03c0(file_handle,"// gGame->allowEnemyAttackFlag\n");
  FUN_005c03c0(file_handle,&DAT_005f01e5,g_CGamePtr->allow_enemy_attack_flag);
  FUN_005c03c0(file_handle,"// letterBoxBlackT\n");
  FUN_005c03c0(file_handle,&DAT_005f01fd,(double)_DAT_01e818b0);
  FUN_005c03c0(file_handle,"// nextCmd\n");
  FUN_005c03c0(file_handle,&DAT_005f020d,this_ptr->next_cmd);
  FUN_005c03c0(file_handle,"// currentMessage\n");
  FUN_005c03c0(file_handle,"\"%s\"\n",this_ptr->current_message);
  FUN_005c03c0(file_handle,"// cmdTimer\n");
  FUN_005c03c0(file_handle,&DAT_005f0237,(double)this_ptr->cmd_timer);
  FUN_005c03c0(file_handle,"// dialogWavTime\n");
  FUN_005c03c0(file_handle,&DAT_005f024d,(double)this_ptr->dialog_wav_time);
  FUN_005c03c0(file_handle);
  core_script_cpp_writeActorReference_FUN_0054b3a0(file_handle,&this_ptr->who_is_speaking);
  FUN_005c03c0(file_handle);
  core_script_cpp_writeActorReference_FUN_0054b3a0(file_handle,&this_ptr->focus_actor);
  FUN_005c03c0(file_handle);
  FUN_005c03c0(file_handle,&DAT_005f0287);
  FUN_005c03c0(file_handle);
  iVar2 = 0;
  FUN_005c03c0(file_handle,&DAT_005f02a5);
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005c03c0(file_handle,&DAT_005f02a9);
    } while (iVar2 < this_ptr->call_stack_count);
  }
  FUN_005c03c0(file_handle);
  uVar1 = core_script_cpp_CScript_computeChecksum_FUN_0054b940(this_ptr);
  FUN_005c03c0(file_handle,&DAT_005f02b5,uVar1);
  return;
}
