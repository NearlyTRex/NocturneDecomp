// Name: core_script.cpp_FUN_00565d00
// Address: 00565d00
// Address Range: [[00565d00, 00565e6f]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00565d00(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00565d00(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00565d00(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar1) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c);
      iVar1 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
      if (-1 < iVar1) {
        switch(*(uint *)(&DAT_0310ad74 + iVar1 * 0x328)) {
        case 3:
          pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
          if (pcVar2 == (char *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No such actor %s",iVar1 * 0x328 + 0x310ab80);
            return;
          }
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
          return;
        case 5:
          core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
          iVar3 = core_script_cpp_FUN_00560160();
          if (-1 < iVar3) {
            DAT_0310fd48 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + iVar3 * 8) + -1;
            DAT_0310fd44 = 0;
            core_script_cpp_FUN_005644e0();
            core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
            core_script_cpp_CScript_Unk18_FUN_005669a0();
            return;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No such label %s",iVar1 * 0x328 + 0x310ab80);
          return;
        case 0xd:
        case 0x19:
          core_msnedit_cpp_FUN_0053eb40();
          return;
        }
      }
    }
  }
  return;
}
