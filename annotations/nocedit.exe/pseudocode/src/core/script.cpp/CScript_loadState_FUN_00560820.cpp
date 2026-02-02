// Name: core_script.cpp_CScript_loadState_FUN_00560820
// Address: 00560820
// Address Range: [[00560820, 00560b46]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_loadState_FUN_00560820(CScript *this_ptr,_FILE *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_loadState_FUN_00560820(CScript *this_ptr,_FILE *param_2)

{
  uint extraout_EAX;
  uint uVar1;
  int extraout_EAX_00;
  int *piVar2;
  int iVar3;
  char local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",&local_18);
  if (6 < local_18) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xf56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",&g_CGamePtr->letterbox_mode);
  if (1 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%d\n",&g_CGamePtr->allow_damage_flag);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%d\n",&g_CGamePtr->allow_enemy_attack_flag);
  }
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",&g_ScriptTimeScale);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",&this_ptr->next_cmd);
  _fgets(local_118,0xff,param_2);
  this_ptr->current_message[0] = '\0';
  _fscanf(param_2,"\"%[^\"]",this_ptr->current_message);
  _fscanf(param_2,"\"\n",this_ptr->current_message);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",&this_ptr->cmd_timer);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",&this_ptr->dialog_wav_time);
  _fgets(local_118,0xff,param_2);
  core_script_cpp_GetReferencedActor_FUN_00560760(param_2,(int *)&this_ptr->who_is_speaking);
  _fgets(local_118,0xff,param_2);
  core_script_cpp_GetReferencedActor_FUN_00560760(param_2,(int *)&this_ptr->focus_actor);
  uVar1 = extraout_EAX;
  if (4 < local_18) {
    _fgets(local_118,0xff,param_2);
    uVar1 = _fscanf(param_2,"%d\n",&this_ptr->focus_actor_locked);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,param_2);
    iVar3 = 0;
    uVar1 = _fscanf(param_2,"%d\n",&this_ptr->call_stack_count);
    if (0 < this_ptr->call_stack_count) {
      piVar2 = this_ptr->call_stack;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(param_2,"%d\n",piVar2);
        uVar1 = this_ptr->call_stack_count;
        piVar2 = piVar2 + 1;
      } while (iVar3 < (int)uVar1);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%u\n",&local_14);
    uVar1 = core_script_cpp_CScript_FUN_00560d80(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return extraout_EAX_00;
    }
  }
  return uVar1;
}
