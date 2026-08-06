// Name: core_script.cpp_CScript_loadState_FUN_005052c0
// Address: 005052c0
// Address Range: [[005052c0, 005055e6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&local_18);
  if (6 < local_18) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 3926;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&g_CGame_PTR_005b9354->letterbox_mode);
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&g_CGame_PTR_005b9354->allow_damage_flag);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&g_CGame_PTR_005b9354->allow_enemy_attack_flag);
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n",&DAT_01e56c20);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&this_ptr->next_cmd);
  _fgets(local_118,0xff,file_handle);
  this_ptr->current_message[0] = '\0';
  _fscanf(file_handle,"\"%[^\"]",this_ptr->current_message);
  _fscanf(file_handle,"\"\n",this_ptr->current_message);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n",&this_ptr->cmd_timer);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n",&this_ptr->dialog_wav_time);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00505200
            (file_handle,(CDemonActor *)&this_ptr->who_is_speaking);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00505200(file_handle,(CDemonActor *)&this_ptr->focus_actor)
  ;
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&this_ptr->focus_actor_locked);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar3 = 0;
    _fscanf(file_handle,"%d\n",&this_ptr->call_stack_count);
    if (0 < this_ptr->call_stack_count) {
      piVar2 = this_ptr->call_stack;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(file_handle,"%d\n",piVar2);
        piVar2 = piVar2 + 1;
      } while (iVar3 < this_ptr->call_stack_count);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%u\n",&local_14);
    uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0046fb40
                (g_CEditorTools_PTR_005b6d50,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
