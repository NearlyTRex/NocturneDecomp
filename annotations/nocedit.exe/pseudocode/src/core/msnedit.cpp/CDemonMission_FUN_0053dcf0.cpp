// Name: core_msnedit.cpp_CDemonMission_FUN_0053dcf0
// Address: 0053dcf0
// Address Range: [[0053dcf0, 0053df8c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053dcf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053dcf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int config_param1;
  CPickList local_760;
  CPickList local_3b8;
  
  config_param1 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_760);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_760.base,"Hide actors using list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_760.base,"Hide actors using wildcard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_760.base,"Hide actors by type");
    config_param1 =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                   (&local_760,"Hide actors",config_param1,0);
    if (config_param1 < 0) break;
    if (config_param1 == 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b8);
      for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor
          ) {
        if (pCVar1->unk14 == 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b8.base,pCVar1->actor_name);
        }
      }
      iVar4 = 0;
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_3b8.base);
      while (iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_3b8,"Hide actors.  Press ESC When done.",iVar4,0), -1 < iVar4)
      {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3b8.base,iVar4);
        pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
        if (pcVar2 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xdd9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        pcVar2[0x148] = '\x01';
        pcVar2[0x149] = '\0';
        pcVar2[0x14a] = '\0';
        pcVar2[0x14b] = '\0';
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_3b8.base,iVar4);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b8,0);
    }
    if ((config_param1 == 1) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Hide actors by name using wildcard",&DAT_00680660,100,1
                          ), iVar4 != 0)) {
      iVar4 = 0;
      for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor
          ) {
        if ((pCVar1->unk14 == 0) &&
           (iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                              (&DAT_00680660,pCVar1->actor_name,0), iVar3 != 0)) {
          iVar4 = iVar4 + 1;
          pCVar1->unk14 = 1;
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors hidden",iVar4);
    }
    if ((config_param1 == 2) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Hide actors by type",&DAT_006806c8,100,1),
       iVar4 != 0)) {
      iVar4 = 0;
      for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor
          ) {
        if ((pCVar1->unk14 == 0) &&
           (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,&DAT_006806c8), iVar3 != 0)) {
          iVar4 = iVar4 + 1;
          pCVar1->unk14 = 1;
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors hidden",iVar4);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
    }
    else {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_760,0);
  return;
}
