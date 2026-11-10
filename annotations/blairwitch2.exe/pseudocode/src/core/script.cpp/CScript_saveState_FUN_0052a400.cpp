// Name: core_script.cpp_CScript_saveState_FUN_0052a400
// Address: 0052a400
// Address Range: [[0052a400, 0052a62a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_saveState_FUN_0052a400(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_saveState_FUN_0052a400(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  
  FUN_005b8010(file_handle,"// CScript version\n");
  FUN_005b8010(file_handle,&DAT_005e5161,6);
  FUN_005b8010(file_handle,"// gGame->letterboxMode\n");
  FUN_005b8010(file_handle,&DAT_005e517e,g_CGamePtr->letterbox_mode);
  FUN_005b8010(file_handle,"// gGame->allowDamageFlag\n");
  FUN_005b8010(file_handle,&DAT_005e519d,*(uint *)&g_CGamePtr->field_0x248);
  FUN_005b8010(file_handle,"// gGame->allowEnemyAttackFlag\n");
  FUN_005b8010(file_handle,&DAT_005e51c1,*(uint *)&g_CGamePtr->field_0x24c);
  FUN_005b8010(file_handle,"// letterBoxBlackT\n");
  FUN_005b8010(file_handle,&DAT_005e51d9,(double)_DAT_01e65900);
  FUN_005b8010(file_handle,"// nextCmd\n");
  FUN_005b8010(file_handle,&DAT_005e51e9,this_ptr->next_cmd);
  FUN_005b8010(file_handle,"// currentMessage\n");
  FUN_005b8010(file_handle,"\"%s\"\n",this_ptr->current_message);
  FUN_005b8010(file_handle,"// cmdTimer\n");
  FUN_005b8010(file_handle,&DAT_005e5213,(double)this_ptr->cmd_timer);
  FUN_005b8010(file_handle,"// dialogWavTime\n");
  FUN_005b8010(file_handle,&DAT_005e5229,(double)this_ptr->dialog_wav_time);
  FUN_005b8010(file_handle);
  core_script_cpp_writeActorReference_FUN_0052a090(file_handle);
  FUN_005b8010(file_handle);
  core_script_cpp_writeActorReference_FUN_0052a090(file_handle);
  FUN_005b8010(file_handle);
  FUN_005b8010(file_handle,&DAT_005e5263);
  FUN_005b8010(file_handle);
  iVar2 = 0;
  FUN_005b8010(file_handle,&DAT_005e5281);
  if (0 < this_ptr->call_stack_count) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005b8010(file_handle,&DAT_005e5285);
    } while (iVar2 < this_ptr->call_stack_count);
  }
  FUN_005b8010(file_handle);
  uVar1 = core_script_cpp_CScript_computeChecksum_FUN_0052a630(this_ptr);
  FUN_005b8010(file_handle,&DAT_005e5291,uVar1);
  return;
}
