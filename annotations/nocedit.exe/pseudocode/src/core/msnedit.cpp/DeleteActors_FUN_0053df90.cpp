// Name: core_msnedit.cpp_DeleteActors_FUN_0053df90
// Address: 0053df90
// Address Range: [[0053df90, 0053e21c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DeleteActors_FUN_0053df90()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DeleteActors(uint param_1) */

void core_msnedit_cpp_DeleteActors_FUN_0053df90(void)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  CDemonMission *in_stack_00000004;
  uint in_stack_fffff89c;
  uint in_stack_fffff8a0;
  char **in_stack_fffff8a4;
  CStrList_vtable *in_stack_fffff8a8;
  uint in_stack_fffff8ac;
  CPickList local_3bc;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3bc);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_3bc.base,"Delete actors using list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_3bc.base,"Delete actors using wildcard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3bc.base,"Delete actors by type");
    local_14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_3bc,"Delete actors",local_14,0);
    if (local_14 < 0) break;
    if (local_14 == 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff89c);
      for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
          pCVar1 = pCVar1->next_actor) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff89c,pCVar1->actor_name);
      }
      iVar5 = 0;
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff89c);
      while (iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff89c,"Delete actors.  Press ESC When done.",
                                iVar5,0), -1 < iVar5) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff89c,iVar5);
        pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
        if (pcVar3 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xe1a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)&stack0xfffff89c,iVar5);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff89c,0,in_stack_fffff89c,in_stack_fffff8a0,
                 (uint)in_stack_fffff8a4,(uint)in_stack_fffff8a8,in_stack_fffff8ac);
    }
    if ((local_14 == 1) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Delete actors by name using wildcard",&DAT_00680730,100,1
                          ), iVar5 != 0)) {
      iVar5 = 0;
      pCVar1 = in_stack_00000004->first_actor;
      while (pCVar1 != (CDemonActor *)0x0) {
        pCVar2 = pCVar1->next_actor;
        iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                          (&DAT_00680730,pCVar1->actor_name,0);
        pCVar1 = pCVar2;
        if (iVar4 != 0) {
          iVar5 = iVar5 + 1;
          core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors deleted",iVar5);
    }
    if ((local_14 == 2) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Delete actors by type",&DAT_00680798,100,1),
       iVar5 != 0)) {
      iVar5 = 0;
      pCVar1 = in_stack_00000004->first_actor;
      while (pCVar1 != (CDemonActor *)0x0) {
        pCVar2 = pCVar1->next_actor;
        iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,&DAT_00680798);
        pCVar1 = pCVar2;
        if (iVar4 != 0) {
          iVar5 = iVar5 + 1;
          core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        }
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"%d actors deleted",iVar5);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_3bc,0,in_stack_fffff89c,in_stack_fffff8a0,(uint)in_stack_fffff8a4,
               (uint)in_stack_fffff8a8,in_stack_fffff8ac);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_3bc,0,in_stack_fffff89c,in_stack_fffff8a0,(uint)in_stack_fffff8a4,
             (uint)in_stack_fffff8a8,in_stack_fffff8ac);
  return;
}
