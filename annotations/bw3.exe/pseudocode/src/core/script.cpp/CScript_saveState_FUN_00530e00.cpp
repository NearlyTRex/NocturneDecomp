// Name: core_script.cpp_CScript_saveState_FUN_00530e00
// Address: 00530e00
// Address Range: [[00530e00, 0053102a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_saveState_FUN_00530e00(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_saveState_FUN_00530e00(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  
  FUN_005a3140(file_handle,"// CScript version\n");
  FUN_005a3140(file_handle,&DAT_005cfe16,6);
  FUN_005a3140(file_handle,"// gGame->letterboxMode\n");
  FUN_005a3140(file_handle,&DAT_005cfe33,g_CGamePtr->letterbox_mode);
  FUN_005a3140(file_handle,"// gGame->allowDamageFlag\n");
  FUN_005a3140(file_handle,&DAT_005cfe52,g_CGamePtr->allow_damage_flag);
  FUN_005a3140(file_handle,"// gGame->allowEnemyAttackFlag\n");
  FUN_005a3140(file_handle,&DAT_005cfe76,g_CGamePtr->allow_enemy_attack_flag);
  FUN_005a3140(file_handle,"// letterBoxBlackT\n");
  FUN_005a3140(file_handle,&DAT_005cfe8e,(double)_DAT_01ed7010);
  FUN_005a3140(file_handle,"// nextCmd\n");
  FUN_005a3140(file_handle,&DAT_005cfe9e,this_ptr->next_cmd);
  FUN_005a3140(file_handle,"// currentMessage\n");
  FUN_005a3140(file_handle,"\"%s\"\n",this_ptr->current_message);
  FUN_005a3140(file_handle,"// cmdTimer\n");
  FUN_005a3140(file_handle,&DAT_005cfec8,(double)this_ptr->cmd_timer);
  FUN_005a3140(file_handle,"// dialogWavTime\n");
  FUN_005a3140(file_handle,&DAT_005cfede,(double)this_ptr->dialog_wav_time);
  FUN_005a3140(file_handle);
  core_script_cpp_writeActorReference_FUN_00530a90(file_handle);
  FUN_005a3140(file_handle);
  core_script_cpp_writeActorReference_FUN_00530a90(file_handle);
  FUN_005a3140(file_handle);
  FUN_005a3140(file_handle,&DAT_005cff18);
  FUN_005a3140(file_handle);
  iVar2 = 0;
  FUN_005a3140(file_handle,&DAT_005cff36);
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005a3140(file_handle,&DAT_005cff3a);
    } while (iVar2 < this_ptr->call_stack_count);
  }
  FUN_005a3140(file_handle);
  uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00531030(this_ptr);
  FUN_005a3140(file_handle,&DAT_005cff46,uVar1);
  return;
}
