// Name: core_script.cpp_CScript_loadState_FUN_00560820
// Address: 00560820
// Address Range: [[00560820, 00560b46]]
// Convention: unknown
// Signature: int core_script_cpp_CScript_loadState_FUN_00560820(void)

#include "nocturne.h"

/* Signature: void core_script.cpp_CScript_loadState(CScript* pScript, uint pFilePtr, int
   param_3) */

int core_script_cpp_CScript_loadState_FUN_00560820(void)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  char local_118 [256];
  int local_18;
  int local_14;
  
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%d\n",&local_18);
  if (6 < local_18) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xf56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%d\n",&g_CGamePtr->letterbox_mode);
  if (1 < local_18) {
    _fgets(local_118,0xff,in_stack_00000008);
    _fscanf(in_stack_00000008,"%d\n",&g_CGamePtr->allow_damage_flag);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,in_stack_00000008);
    _fscanf(in_stack_00000008,"%d\n",&g_CGamePtr->allow_enemy_attack_flag);
  }
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%g\n",&FLOAT_0310f4a0);
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%d\n",in_stack_00000004 + 0x48);
  _fgets(local_118,0xff,in_stack_00000008);
  *(byte *)(in_stack_00000004 + 0x54) = 0;
  _fscanf(in_stack_00000008,"\"%[^\"]",in_stack_00000004 + 0x54);
  _fscanf(in_stack_00000008,"\"\n",in_stack_00000004 + 0x54);
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%g\n",in_stack_00000004 + 0x4c);
  _fgets(local_118,0xff,in_stack_00000008);
  _fscanf(in_stack_00000008,"%g\n",in_stack_00000004 + 0x50);
  _fgets(local_118,0xff,in_stack_00000008);
  core_script_cpp_GetReferencedActor_FUN_00560760();
  _fgets(local_118,0xff,in_stack_00000008);
  iVar1 = core_script_cpp_GetReferencedActor_FUN_00560760();
  if (4 < local_18) {
    _fgets(local_118,0xff,in_stack_00000008);
    iVar1 = _fscanf(in_stack_00000008,"%d\n",in_stack_00000004 + 0x14)
    ;
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,in_stack_00000008);
    iVar3 = 0;
    iVar1 = _fscanf(in_stack_00000008,"%d\n",in_stack_00000004 + 0x45c);
    if (0 < *(int *)(in_stack_00000004 + 0x45c)) {
      iVar2 = in_stack_00000004 + 0x460;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(in_stack_00000008,"%d\n",iVar2);
        iVar1 = *(int *)(in_stack_00000004 + 0x45c);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,in_stack_00000008);
    _fscanf(in_stack_00000008,"%u\n",&local_14);
    iVar1 = core_script_cpp_CalculateCRC_FUN_00560d80();
    if (iVar1 != local_14) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return extraout_EAX;
    }
  }
  return iVar1;
}
