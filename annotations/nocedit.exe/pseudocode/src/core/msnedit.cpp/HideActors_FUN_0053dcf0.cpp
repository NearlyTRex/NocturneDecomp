// Name: core_msnedit.cpp_HideActors_FUN_0053dcf0
// Address: 0053dcf0
// Address Range: [[0053dcf0, 0053df8c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_HideActors_FUN_0053dcf0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a7f8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Hide_actors_using_list_0063cd76
//   TerminatedCString s_Hide_actors_using_wildca_0063cd8e
//   TerminatedCString s_Hide_actors_by_type_0063cda9
//   TerminatedCString s_Hide_actors_0063cdbd
//   TerminatedCString s_Hide_actors_Press_ESC_Wh_0063cdc9
//   TerminatedCString s_core_msnedit_cpp_0063cdec
//   TerminatedCString s_Hell_froze_0063ce00
//   TerminatedCString s_Hide_actors_by_name_usin_0063ce0c
//   TerminatedCString s_d_actors_hidden_0063ce2f
//   TerminatedCString s_Hide_actors_by_type_0063ce40
//   TerminatedCString s_d_actors_hidden_0063ce54
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_00680660
//   undefined4 DAT_006806c8
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00524030
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_HideActors(undefined4 param_1) */

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
  undefined1 auStack_3a0 [20];
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


// Assembly code:
// 0053dcf0: PUSH EBX
//   Label: core_msnedit.cpp_HideActors_FUN_0053dcf0
// 0053dcf1: PUSH ESI
// 0053dcf2: PUSH EDI
// 0053dcf3: PUSH EBP
// 0053dcf4: SUB ESP,0x750
// 0053dcfa: MOV EDI,dword ptr [ESP + 0x764]
//   XREF to: Stack[0x4] (READ)
// 0053dd01: XOR EBP,EBP
// 0053dd03: MOV EAX,ESP
//   Label: LAB_0053dd03
// 0053dd05: PUSH EAX
// 0053dd06: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053dd0b: ADD ESP,0x4
// 0053dd0e: PUSH 0x63cd76
//   XREF to: 0063cd76 (DATA)
// 0053dd13: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053dd17: PUSH EAX
// 0053dd18: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dd1d: ADD ESP,0x8
// 0053dd20: PUSH 0x63cd8e
//   XREF to: 0063cd8e (DATA)
// 0053dd25: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053dd29: PUSH EAX
// 0053dd2a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dd2f: ADD ESP,0x8
// 0053dd32: PUSH 0x63cda9
//   XREF to: 0063cda9 (DATA)
// 0053dd37: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053dd3b: PUSH EAX
// 0053dd3c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dd41: ADD ESP,0x8
// 0053dd44: PUSH 0x0
// 0053dd46: PUSH EBP
// 0053dd47: PUSH 0x63cdbd
//   XREF to: 0063cdbd (DATA)
// 0053dd4c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x760] (DATA)
// 0053dd50: PUSH EAX
// 0053dd51: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053dd56: ADD ESP,0x10
// 0053dd59: MOV EBP,EAX
// 0053dd5b: TEST EAX,EAX
// 0053dd5d: JL 0x0053df73
//   XREF to: 0053df73 (CONDITIONAL_JUMP)
// 0053dd63: JNZ 0x0053de58
//   XREF to: 0053de58 (CONDITIONAL_JUMP)
// 0053dd69: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053dd70: PUSH EAX
// 0053dd71: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053dd76: MOV EBX,dword ptr [EDI + 0x548]
// 0053dd7c: ADD ESP,0x4
// 0053dd7f: TEST EBX,EBX
// 0053dd81: JZ 0x0053dd9a
//   XREF to: 0053dd9a (CONDITIONAL_JUMP)
// 0053dd83: CMP dword ptr [EBX + 0x148],0x0
//   Label: LAB_0053dd83
// 0053dd8a: JZ 0x0053de0c
//   XREF to: 0053de0c (CONDITIONAL_JUMP)
// 0053dd90: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053dd90
// 0053dd96: TEST EBX,EBX
// 0053dd98: JNZ 0x0053dd83
//   XREF to: 0053dd83 (CONDITIONAL_JUMP)
// 0053dd9a: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_0053dd9a
//   XREF to: Stack[-0x3b8] (DATA)
// 0053dda1: PUSH EAX
// 0053dda2: XOR EBX,EBX
// 0053dda4: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053dda9: ADD ESP,0x4
// 0053ddac: PUSH 0x0
//   Label: LAB_0053ddac
// 0053ddae: PUSH EBX
// 0053ddaf: PUSH 0x63cdc9
//   XREF to: 0063cdc9 (DATA)
// 0053ddb4: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053ddbb: PUSH EAX
// 0053ddbc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053ddc1: ADD ESP,0x10
// 0053ddc4: MOV EBX,EAX
// 0053ddc6: TEST EAX,EAX
// 0053ddc8: JL 0x0053de46
//   XREF to: 0053de46 (CONDITIONAL_JUMP)
// 0053ddce: PUSH EAX
// 0053ddcf: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053ddd6: PUSH EAX
// 0053ddd7: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053dddc: ADD ESP,0x8
// 0053dddf: PUSH EAX
// 0053dde0: PUSH EDI
// 0053dde1: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053dde6: ADD ESP,0x8
// 0053dde9: MOV ESI,EAX
// 0053ddeb: TEST EAX,EAX
// 0053dded: JZ 0x0053de22
//   XREF to: 0053de22 (CONDITIONAL_JUMP)
// 0053ddef: PUSH EBX
//   Label: LAB_0053ddef
// 0053ddf0: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053ddf7: PUSH EAX
// 0053ddf8: MOV dword ptr [ESI + 0x148],0x1
// 0053de02: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 0053de07: ADD ESP,0x8
// 0053de0a: JMP 0x0053ddac
//   XREF to: 0053ddac (UNCONDITIONAL_JUMP)
// 0053de0c: PUSH EBX
//   Label: LAB_0053de0c
// 0053de0d: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053de14: PUSH EAX
// 0053de15: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053de1a: ADD ESP,0x8
// 0053de1d: JMP 0x0053dd90
//   XREF to: 0053dd90 (UNCONDITIONAL_JUMP)
// 0053de22: MOV ECX,0x63cdec
//   Label: LAB_0053de22
//   XREF to: 0063cdec (PARAM)
// 0053de27: MOV EAX,0xdd9
// 0053de2c: PUSH 0x63ce00
//   XREF to: 0063ce00 (DATA)
// 0053de31: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053de37: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0053de3c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053de41: ADD ESP,0x4
// 0053de44: JMP 0x0053ddef
//   XREF to: 0053ddef (UNCONDITIONAL_JUMP)
// 0053de46: PUSH 0x0
//   Label: LAB_0053de46
// 0053de48: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053de4f: PUSH EAX
// 0053de50: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053de55: ADD ESP,0x8
// 0053de58: CMP EBP,0x1
//   Label: LAB_0053de58
// 0053de5b: JNZ 0x0053deb2
//   XREF to: 0053deb2 (CONDITIONAL_JUMP)
// 0053de5d: PUSH EBP
// 0053de5e: PUSH 0x64
// 0053de60: PUSH 0x680660
//   XREF to: 00680660 (DATA)
// 0053de65: PUSH 0x63ce0c
//   XREF to: 0063ce0c (DATA)
// 0053de6a: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053de70: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053de71: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053de76: ADD ESP,0x14
// 0053de79: TEST EAX,EAX
// 0053de7b: JZ 0x0053deb2
//   XREF to: 0053deb2 (CONDITIONAL_JUMP)
// 0053de7d: MOV EBX,dword ptr [EDI + 0x548]
// 0053de83: XOR ESI,ESI
// 0053de85: TEST EBX,EBX
// 0053de87: JZ 0x0053de9d
//   XREF to: 0053de9d (CONDITIONAL_JUMP)
// 0053de89: MOV EAX,dword ptr [EBX + 0x148]
//   Label: LAB_0053de89
// 0053de8f: TEST EAX,EAX
// 0053de91: JZ 0x0053decb
//   XREF to: 0053decb (CONDITIONAL_JUMP)
// 0053de93: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053de93
// 0053de99: TEST EBX,EBX
// 0053de9b: JNZ 0x0053de89
//   XREF to: 0053de89 (CONDITIONAL_JUMP)
// 0053de9d: PUSH ESI
//   Label: LAB_0053de9d
// 0053de9e: PUSH 0x63ce2f
//   XREF to: 0063ce2f (DATA)
// 0053dea3: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053dea9: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053deaa: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053deaf: ADD ESP,0xc
// 0053deb2: CMP EBP,0x2
//   Label: LAB_0053deb2
// 0053deb5: JZ 0x0053deeb
//   XREF to: 0053deeb (CONDITIONAL_JUMP)
// 0053deb7: PUSH 0x0
//   Label: LAB_0053deb7
// 0053deb9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053debd: PUSH EAX
// 0053debe: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053dec3: ADD ESP,0x8
// 0053dec6: JMP 0x0053dd03
//   XREF to: 0053dd03 (UNCONDITIONAL_JUMP)
// 0053decb: PUSH EAX
//   Label: LAB_0053decb
// 0053decc: PUSH EBX
// 0053decd: PUSH 0x680660
//   XREF to: 00680660 (DATA)
// 0053ded2: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 0053ded7: ADD ESP,0xc
// 0053deda: TEST EAX,EAX
// 0053dedc: JZ 0x0053de93
//   XREF to: 0053de93 (CONDITIONAL_JUMP)
// 0053dede: INC ESI
// 0053dedf: MOV dword ptr [EBX + 0x148],0x1
// 0053dee9: JMP 0x0053de93
//   XREF to: 0053de93 (UNCONDITIONAL_JUMP)
// 0053deeb: PUSH 0x1
//   Label: LAB_0053deeb
// 0053deed: PUSH 0x64
// 0053deef: PUSH 0x6806c8
//   XREF to: 006806c8 (DATA)
// 0053def4: PUSH 0x63ce40
//   XREF to: 0063ce40 (DATA)
// 0053def9: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053deff: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053df00: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053df05: ADD ESP,0x14
// 0053df08: TEST EAX,EAX
// 0053df0a: JZ 0x0053deb7
//   XREF to: 0053deb7 (CONDITIONAL_JUMP)
// 0053df0c: MOV EBX,dword ptr [EDI + 0x548]
// 0053df12: XOR ESI,ESI
// 0053df14: TEST EBX,EBX
// 0053df16: JZ 0x0053df2b
//   XREF to: 0053df2b (CONDITIONAL_JUMP)
// 0053df18: CMP dword ptr [EBX + 0x148],0x0
//   Label: LAB_0053df18
// 0053df1f: JZ 0x0053df54
//   XREF to: 0053df54 (CONDITIONAL_JUMP)
// 0053df21: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053df21
// 0053df27: TEST EBX,EBX
// 0053df29: JNZ 0x0053df18
//   XREF to: 0053df18 (CONDITIONAL_JUMP)
// 0053df2b: PUSH ESI
//   Label: LAB_0053df2b
// 0053df2c: PUSH 0x63ce54
//   XREF to: 0063ce54 (DATA)
// 0053df31: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053df37: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053df38: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053df3d: ADD ESP,0xc
// 0053df40: PUSH 0x0
// 0053df42: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053df46: PUSH EAX
// 0053df47: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053df4c: ADD ESP,0x8
// 0053df4f: JMP 0x0053dd03
//   XREF to: 0053dd03 (UNCONDITIONAL_JUMP)
// 0053df54: PUSH 0x6806c8
//   Label: LAB_0053df54
//   XREF to: 006806c8 (DATA)
// 0053df59: PUSH EBX
// 0053df5a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0053df5f: ADD ESP,0x8
// 0053df62: TEST EAX,EAX
// 0053df64: JZ 0x0053df21
//   XREF to: 0053df21 (CONDITIONAL_JUMP)
// 0053df66: INC ESI
// 0053df67: MOV dword ptr [EBX + 0x148],0x1
// 0053df71: JMP 0x0053df21
//   XREF to: 0053df21 (UNCONDITIONAL_JUMP)
// 0053df73: PUSH 0x0
//   Label: LAB_0053df73
// 0053df75: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x760] (DATA)
// 0053df79: PUSH EAX
// 0053df7a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053df7f: ADD ESP,0x8
// 0053df82: ADD ESP,0x750
// 0053df88: POP EBP
// 0053df89: POP EDI
// 0053df8a: POP ESI
// 0053df8b: POP EBX
// 0053df8c: RET
