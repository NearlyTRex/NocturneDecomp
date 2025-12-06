// Name: core_msnedit.cpp_DeleteActors_FUN_0053df90
// Address: 0053df90
// Address Range: [[0053df90, 0053e21c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DeleteActors_FUN_0053df90()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DeleteActors(uint param_1) */

void core_msnedit_cpp_DeleteActors_FUN_0053df90
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonMission *param_5,uint param_6,uint param_7,int param_8)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *config_param1;
  char *in_stack_fffff8b0;
  uint in_stack_fffff8b4;
  CPickList *in_stack_fffff8b8;
  CDemonMission *in_stack_fffff8bc;
  CStrList_vtable *in_stack_fffff8c0;
  CStrList_vtable *in_stack_fffff8c4;
  CStrList_vtable *in_stack_fffff8c8;
  CStrList_dtor *in_stack_fffff8cc;
  CStrList_remove *in_stack_fffff8d0;
  CPickList local_3bc;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3bc);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&local_3bc.base_strlist.capacity,"Delete actors using list.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&local_3bc.base_strlist.data_array,"Delete actors using wildcard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&local_3bc.base_strlist.vtable,"Delete actors by type");
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)local_3bc.field1_0x10,"Delete actors",unaff_EBX,0);
    if (iVar3 < 0) break;
    if (iVar3 == 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8b0);
      for (pCVar1 = param_5->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor)
      {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff8b4,pCVar1->actor_name);
      }
      config_param1 = (CStrList_vtable *)0x0;
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff8b4);
      while( true ) {
        config_param1 =
             (CStrList_vtable *)
             shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)&stack0xfffff8b8,"Delete actors.  Press ESC When done.",
                        (int)config_param1,0);
        if ((int)config_param1 < 0) break;
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                  ((CStrList *)&stack0xfffff8bc,(int)config_param1);
        pcVar4 = core_mission_cpp_CDemonMission_FUN_00524030(param_5);
        if (pcVar4 == (char *)0x0) {
          g_CurrentFilename = "..\\core\\msnedit.cpp";
          g_CurrentLineNumber = 0xe1a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        in_stack_fffff8bc = param_5;
        core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        in_stack_fffff8c4 = (CStrList_vtable *)&stack0xfffff8cc;
        in_stack_fffff8c0 = (CStrList_vtable *)0x53e0b8;
        in_stack_fffff8c8 = config_param1;
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  ((CStrList *)&stack0xfffff8cc,(int)config_param1);
      }
      in_stack_fffff8b0 = (char *)0x53e0ed;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff8bc,0,(uint)in_stack_fffff8bc,(uint)in_stack_fffff8c0,
                 (uint)in_stack_fffff8c4,(uint)in_stack_fffff8c8,(uint)in_stack_fffff8cc);
    }
    if (param_8 == 1) {
      in_stack_fffff8b0 = "Delete actors by name using wildcard";
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Delete actors by name using wildcard",&DAT_00680730,100,1);
      if (iVar3 != 0) {
        pCVar1 = param_5->first_actor;
        while (pCVar1 != (CDemonActor *)0x0) {
          pCVar2 = pCVar1->next_actor;
          iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (&DAT_00680730,pCVar1->actor_name,0);
          pCVar1 = pCVar2;
          if (iVar3 != 0) {
            core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
          }
        }
        in_stack_fffff8b0 = &g_CEditorToolsPtr->field0_0x0;
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"%d actors deleted");
      }
    }
    if (param_8 == 2) {
      in_stack_fffff8b0 = "Delete actors by type";
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Delete actors by type",&DAT_00680798,100,1);
      if (iVar3 != 0) {
        in_stack_fffff8c0 = (CStrList_vtable *)0x0;
        pCVar1 = param_5->first_actor;
        while (pCVar1 != (CDemonActor *)0x0) {
          pCVar2 = pCVar1->next_actor;
          in_stack_fffff8b0 = (char *)0x53e1cc;
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,&DAT_00680798);
          pCVar1 = pCVar2;
          if (iVar3 != 0) {
            in_stack_fffff8c0 = (CStrList_vtable *)((int)&in_stack_fffff8c0->dtor + 1);
            in_stack_fffff8b0 = (char *)0x53e1dd;
            core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
          }
        }
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"%d actors deleted");
      }
    }
    in_stack_fffff8bc = (CDemonMission *)0x0;
    in_stack_fffff8b8 = (CPickList *)(local_3bc.field1_0x10 + 0x14);
    in_stack_fffff8b4 = 0x53e187;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (in_stack_fffff8b8,0,(uint)in_stack_fffff8c0,(uint)in_stack_fffff8c4,
               (uint)in_stack_fffff8c8,(uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(local_3bc.field1_0x10 + 4),0,(uint)in_stack_fffff8b0,in_stack_fffff8b4,
             (uint)in_stack_fffff8b8,(uint)in_stack_fffff8bc,(uint)in_stack_fffff8c0);
  return;
}
