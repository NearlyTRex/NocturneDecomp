// Name: core_msnedit.cpp_HideActors_FUN_0053dcf0
// Address: 0053dcf0
// Address Range: [[0053dcf0, 0053df8c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_HideActors_FUN_0053dcf0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_HideActors(uint param_1) */

void core_msnedit_cpp_HideActors_FUN_0053dcf0(void)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  int iVar3;
  CStrList_remove *config_param1;
  BADSPACEBASE *in_ESP;
  int config_param1_00;
  CDemonMission *in_stack_00000004;
  char *in_stack_fffff8b4;
  CStrList_vtable *in_stack_fffff8b8;
  CStrList_vtable *in_stack_fffff8bc;
  CStrList_vtable *in_stack_fffff8c0;
  CStrList *in_stack_fffff8c4;
  CStrList_remove *in_stack_fffff8c8;
  char **in_stack_fffff8cc;
  CStrList_vtable *in_stack_fffff8d0;
  char **in_stack_fffff8d4;
  CStrList_vtable *in_stack_fffff8d8;
  CStrList_handleInput *in_stack_fffff8dc;
  byte auStack_3a0 [20];
  CStrList aCStack_38c [55];
  
  config_param1_00 = 0;
  do {
    while( true ) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8a0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8a4,"Hide actors using list.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8a8,"Hide actors using wildcard");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8ac,"Hide actors by type");
      config_param1_00 =
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)&stack0xfffff8b0,"Hide actors",config_param1_00,0);
      if (config_param1_00 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff8b4,0,(uint)in_stack_fffff8b4,(uint)in_stack_fffff8b8,
                   (uint)in_stack_fffff8bc,(uint)in_stack_fffff8c0,(uint)in_stack_fffff8c4);
        return;
      }
      if (config_param1_00 == 0) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc5c);
        for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
            pCVar1 = pCVar1->next_actor) {
          if (pCVar1->field26_0x148 == 0) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_3a0,pCVar1->actor_name)
            ;
          }
        }
        config_param1 = (CStrList_remove *)0x0;
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)auStack_3a0);
        while (config_param1 =
                    (CStrList_remove *)
                    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              ((CPickList *)(auStack_3a0 + 4),"Hide actors.  Press ESC When done.",
                               (int)config_param1,0), -1 < (int)config_param1) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                    ((CStrList *)(auStack_3a0 + 8),(int)config_param1);
          pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
          if (pcVar2 == (char *)0x0) {
            g_CurrentFilename = "..\\core\\msnedit.cpp";
            g_CurrentLineNumber = 0xdd9;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          }
          in_stack_fffff8c4 = aCStack_38c;
          pcVar2[0x148] = '\x01';
          pcVar2[0x149] = '\0';
          pcVar2[0x14a] = '\0';
          pcVar2[0x14b] = '\0';
          in_stack_fffff8c0 = (CStrList_vtable *)0x53de07;
          in_stack_fffff8c8 = config_param1;
          shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(in_stack_fffff8c4,(int)config_param1);
        }
        in_stack_fffff8b4 = (char *)0x53de55;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)(auStack_3a0 + 8),0,(uint)in_stack_fffff8c0,(uint)in_stack_fffff8c4,
                   (uint)in_stack_fffff8c8,(uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0);
      }
      if (config_param1_00 == 1) {
        in_stack_fffff8b4 = "Hide actors by name using wildcard";
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Hide actors by name using wildcard",&DAT_00680660,100,1
                          );
        if (iVar3 != 0) {
          for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
              pCVar1 = pCVar1->next_actor) {
            if ((pCVar1->field26_0x148 == 0) &&
               (iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                  (&DAT_00680660,pCVar1->actor_name,0), iVar3 != 0)) {
              pCVar1->field26_0x148 = 1;
            }
          }
          in_stack_fffff8b4 = &g_CEditorToolsPtr->field0_0x0;
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"%d actors hidden");
        }
      }
      if (config_param1_00 == 2) break;
LAB_0053deb7:
      in_stack_fffff8bc = (CStrList_vtable *)&stack0xfffff8c4;
      in_stack_fffff8c0 = (CStrList_vtable *)0x0;
      in_stack_fffff8b8 = (CStrList_vtable *)0x53dec3;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff8c4,0,(uint)in_stack_fffff8c4,(uint)in_stack_fffff8c8,
                 (uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0,(uint)in_stack_fffff8d4);
    }
    in_stack_fffff8b4 = "Hide actors by type";
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Hide actors by type",&DAT_006806c8,100,1);
    if (iVar3 == 0) goto LAB_0053deb7;
    for (pCVar1 = in_stack_00000004->first_actor; pCVar1 != (CDemonActor *)0x0;
        pCVar1 = pCVar1->next_actor) {
      if ((pCVar1->field26_0x148 == 0) &&
         (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,&DAT_006806c8), iVar3 != 0)) {
        pCVar1->field26_0x148 = 1;
      }
    }
    in_stack_fffff8b8 = (CStrList_vtable *)0x53df3d;
    in_stack_fffff8bc = (CStrList_vtable *)g_CEditorToolsPtr;
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%d actors hidden");
    in_stack_fffff8c4 = (CStrList *)&stack0xfffff8cc;
    in_stack_fffff8c8 = (CStrList_remove *)0x0;
    in_stack_fffff8c0 = (CStrList_vtable *)0x53df4c;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff8cc,0,(uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0,
               (uint)in_stack_fffff8d4,(uint)in_stack_fffff8d8,(uint)in_stack_fffff8dc);
  } while( true );
}
