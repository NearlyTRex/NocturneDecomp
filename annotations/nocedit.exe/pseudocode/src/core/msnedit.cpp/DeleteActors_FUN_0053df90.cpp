// Name: core_msnedit.cpp_DeleteActors_FUN_0053df90
// Address: 0053df90
// Address Range: [[0053df90, 0053e21c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DeleteActors_FUN_0053df90()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a6ed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Delete_actors_using_list_0063ce65
//   TerminatedCString s_Delete_actors_using_wild_0063ce7f
//   TerminatedCString s_Delete_actors_by_type_0063ce9c
//   TerminatedCString s_Delete_actors_0063ceb2
//   TerminatedCString s_Delete_actors_Press_ESC__0063cec0
//   TerminatedCString s_core_msnedit_cpp_0063cee5
//   TerminatedCString s_Hell_froze_0063cef9
//   TerminatedCString s_Delete_actors_by_name_us_0063cf05
//   TerminatedCString s_d_actors_deleted_0063cf2a
//   TerminatedCString s_Delete_actors_by_type_0063cf3c
//   TerminatedCString s_d_actors_deleted_0063cf52
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_00680730
//   undefined4 DAT_00680798
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
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

/* Signature: undefined1 core_msnedit.cpp_DeleteActors(undefined4 param_1) */

void core_msnedit_cpp_DeleteActors_FUN_0053df90
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDemonMission *param_5,undefined4 param_6,undefined4 param_7,int param_8)

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
  undefined4 local_14;
  
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


// Assembly code:
// 0053df90: PUSH EBX
//   Label: core_msnedit.cpp_DeleteActors_FUN_0053df90
// 0053df91: PUSH ESI
// 0053df92: PUSH EDI
// 0053df93: PUSH EBP
// 0053df94: SUB ESP,0x754
// 0053df9a: MOV EBX,dword ptr [ESP + 0x768]
//   XREF to: Stack[0x4] (READ)
// 0053dfa1: XOR EDX,EDX
// 0053dfa3: MOV dword ptr [ESP + 0x750],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053dfaa: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_0053dfaa
//   XREF to: Stack[-0x3bc] (DATA)
// 0053dfb1: PUSH EAX
// 0053dfb2: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053dfb7: ADD ESP,0x4
// 0053dfba: PUSH 0x63ce65
//   XREF to: 0063ce65 (DATA)
// 0053dfbf: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053dfc6: PUSH EAX
// 0053dfc7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dfcc: ADD ESP,0x8
// 0053dfcf: PUSH 0x63ce7f
//   XREF to: 0063ce7f (DATA)
// 0053dfd4: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053dfdb: PUSH EAX
// 0053dfdc: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dfe1: ADD ESP,0x8
// 0053dfe4: PUSH 0x63ce9c
//   XREF to: 0063ce9c (DATA)
// 0053dfe9: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053dff0: PUSH EAX
// 0053dff1: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053dff6: ADD ESP,0x8
// 0053dff9: PUSH 0x0
// 0053dffb: MOV ECX,dword ptr [ESP + 0x754]
//   XREF to: Stack[-0x14] (READ)
// 0053e002: PUSH ECX
// 0053e003: PUSH 0x63ceb2
//   XREF to: 0063ceb2 (DATA)
// 0053e008: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053e00f: PUSH EAX
// 0053e010: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053e015: ADD ESP,0x10
// 0053e018: MOV dword ptr [ESP + 0x750],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053e01f: TEST EAX,EAX
// 0053e021: JL 0x0053e200
//   XREF to: 0053e200 (CONDITIONAL_JUMP)
// 0053e027: JNZ 0x0053e0f0
//   XREF to: 0053e0f0 (CONDITIONAL_JUMP)
// 0053e02d: MOV EAX,ESP
// 0053e02f: PUSH EAX
// 0053e030: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053e035: MOV ESI,dword ptr [EBX + 0x548]
// 0053e03b: ADD ESP,0x4
// 0053e03e: TEST ESI,ESI
// 0053e040: JZ 0x0053e05a
//   XREF to: 0053e05a (CONDITIONAL_JUMP)
// 0053e042: PUSH ESI
//   Label: LAB_0053e042
// 0053e043: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x764] (DATA)
// 0053e047: PUSH EAX
// 0053e048: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053e04d: MOV ESI,dword ptr [ESI + 0x14c]
// 0053e053: ADD ESP,0x8
// 0053e056: TEST ESI,ESI
// 0053e058: JNZ 0x0053e042
//   XREF to: 0053e042 (CONDITIONAL_JUMP)
// 0053e05a: MOV EAX,ESP
//   Label: LAB_0053e05a
// 0053e05c: PUSH EAX
// 0053e05d: XOR ESI,ESI
// 0053e05f: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053e064: ADD ESP,0x4
// 0053e067: XOR EBP,EBP
// 0053e069: PUSH EBP
//   Label: LAB_0053e069
// 0053e06a: PUSH ESI
// 0053e06b: PUSH 0x63cec0
//   XREF to: 0063cec0 (DATA)
// 0053e070: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x764] (DATA)
// 0053e074: PUSH EAX
// 0053e075: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053e07a: ADD ESP,0x10
// 0053e07d: MOV ESI,EAX
// 0053e07f: TEST EAX,EAX
// 0053e081: JL 0x0053e0e1
//   XREF to: 0053e0e1 (CONDITIONAL_JUMP)
// 0053e083: PUSH EAX
// 0053e084: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x764] (DATA)
// 0053e088: PUSH EAX
// 0053e089: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053e08e: ADD ESP,0x8
// 0053e091: PUSH EAX
// 0053e092: PUSH EBX
// 0053e093: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053e098: ADD ESP,0x8
// 0053e09b: MOV EDI,EAX
// 0053e09d: TEST EAX,EAX
// 0053e09f: JZ 0x0053e0bd
//   XREF to: 0053e0bd (CONDITIONAL_JUMP)
// 0053e0a1: PUSH 0x1
//   Label: LAB_0053e0a1
// 0053e0a3: PUSH EDI
// 0053e0a4: PUSH EBX
// 0053e0a5: CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
//   XREF to: 0053bc80 (UNCONDITIONAL_CALL)
// 0053e0aa: ADD ESP,0xc
// 0053e0ad: PUSH ESI
// 0053e0ae: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x764] (DATA)
// 0053e0b2: PUSH EAX
// 0053e0b3: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 0053e0b8: ADD ESP,0x8
// 0053e0bb: JMP 0x0053e069
//   XREF to: 0053e069 (UNCONDITIONAL_JUMP)
// 0053e0bd: MOV EAX,0x63cee5
//   Label: LAB_0053e0bd
//   XREF to: 0063cee5 (PARAM)
// 0053e0c2: MOV EDX,0xe1a
// 0053e0c7: PUSH 0x63cef9
//   XREF to: 0063cef9 (DATA)
// 0053e0cc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0053e0d1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0053e0d7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053e0dc: ADD ESP,0x4
// 0053e0df: JMP 0x0053e0a1
//   XREF to: 0053e0a1 (UNCONDITIONAL_JUMP)
// 0053e0e1: PUSH 0x0
//   Label: LAB_0053e0e1
// 0053e0e3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x764] (DATA)
// 0053e0e7: PUSH EAX
// 0053e0e8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053e0ed: ADD ESP,0x8
// 0053e0f0: MOV ECX,dword ptr [ESP + 0x750]
//   Label: LAB_0053e0f0
//   XREF to: Stack[-0x14] (READ)
// 0053e0f7: CMP ECX,0x1
// 0053e0fa: JNZ 0x0053e16e
//   XREF to: 0053e16e (CONDITIONAL_JUMP)
// 0053e100: PUSH ECX
// 0053e101: PUSH 0x64
// 0053e103: PUSH 0x680730
//   XREF to: 00680730 (DATA)
// 0053e108: PUSH 0x63cf05
//   XREF to: 0063cf05 (DATA)
// 0053e10d: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053e113: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053e114: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053e119: ADD ESP,0x14
// 0053e11c: TEST EAX,EAX
// 0053e11e: JZ 0x0053e16e
//   XREF to: 0053e16e (CONDITIONAL_JUMP)
// 0053e120: MOV ESI,dword ptr [EBX + 0x548]
// 0053e126: XOR EBP,EBP
// 0053e128: TEST ESI,ESI
// 0053e12a: JZ 0x0053e159
//   XREF to: 0053e159 (CONDITIONAL_JUMP)
// 0053e12c: PUSH 0x0
//   Label: LAB_0053e12c
// 0053e12e: PUSH ESI
// 0053e12f: PUSH 0x680730
//   XREF to: 00680730 (DATA)
// 0053e134: MOV EDI,dword ptr [ESI + 0x14c]
// 0053e13a: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 0053e13f: ADD ESP,0xc
// 0053e142: TEST EAX,EAX
// 0053e144: JZ 0x0053e153
//   XREF to: 0053e153 (CONDITIONAL_JUMP)
// 0053e146: PUSH 0x1
// 0053e148: PUSH ESI
// 0053e149: PUSH EBX
// 0053e14a: INC EBP
// 0053e14b: CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
//   XREF to: 0053bc80 (UNCONDITIONAL_CALL)
// 0053e150: ADD ESP,0xc
// 0053e153: MOV ESI,EDI
//   Label: LAB_0053e153
// 0053e155: TEST EDI,EDI
// 0053e157: JNZ 0x0053e12c
//   XREF to: 0053e12c (CONDITIONAL_JUMP)
// 0053e159: PUSH EBP
//   Label: LAB_0053e159
// 0053e15a: PUSH 0x63cf2a
//   XREF to: 0063cf2a (DATA)
// 0053e15f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053e165: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053e166: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053e16b: ADD ESP,0xc
// 0053e16e: CMP dword ptr [ESP + 0x750],0x2
//   Label: LAB_0053e16e
//   XREF to: Stack[-0x14] (READ)
// 0053e176: JZ 0x0053e18f
//   XREF to: 0053e18f (CONDITIONAL_JUMP)
// 0053e178: PUSH 0x0
//   Label: LAB_0053e178
// 0053e17a: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053e181: PUSH EAX
// 0053e182: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053e187: ADD ESP,0x8
// 0053e18a: JMP 0x0053dfaa
//   XREF to: 0053dfaa (UNCONDITIONAL_JUMP)
// 0053e18f: PUSH 0x1
//   Label: LAB_0053e18f
// 0053e191: PUSH 0x64
// 0053e193: PUSH 0x680798
//   XREF to: 00680798 (DATA)
// 0053e198: PUSH 0x63cf3c
//   XREF to: 0063cf3c (DATA)
// 0053e19d: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e1a2: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053e1a3: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053e1a8: ADD ESP,0x14
// 0053e1ab: TEST EAX,EAX
// 0053e1ad: JZ 0x0053e178
//   XREF to: 0053e178 (CONDITIONAL_JUMP)
// 0053e1af: MOV ESI,dword ptr [EBX + 0x548]
// 0053e1b5: XOR EBP,EBP
// 0053e1b7: TEST ESI,ESI
// 0053e1b9: JZ 0x0053e1e6
//   XREF to: 0053e1e6 (CONDITIONAL_JUMP)
// 0053e1bb: PUSH 0x680798
//   Label: LAB_0053e1bb
//   XREF to: 00680798 (DATA)
// 0053e1c0: PUSH ESI
// 0053e1c1: MOV EDI,dword ptr [ESI + 0x14c]
// 0053e1c7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0053e1cc: ADD ESP,0x8
// 0053e1cf: TEST EAX,EAX
// 0053e1d1: JZ 0x0053e1e0
//   XREF to: 0053e1e0 (CONDITIONAL_JUMP)
// 0053e1d3: PUSH 0x1
// 0053e1d5: PUSH ESI
// 0053e1d6: PUSH EBX
// 0053e1d7: INC EBP
// 0053e1d8: CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
//   XREF to: 0053bc80 (UNCONDITIONAL_CALL)
// 0053e1dd: ADD ESP,0xc
// 0053e1e0: MOV ESI,EDI
//   Label: LAB_0053e1e0
// 0053e1e2: TEST EDI,EDI
// 0053e1e4: JNZ 0x0053e1bb
//   XREF to: 0053e1bb (CONDITIONAL_JUMP)
// 0053e1e6: PUSH EBP
//   Label: LAB_0053e1e6
// 0053e1e7: PUSH 0x63cf52
//   XREF to: 0063cf52 (DATA)
// 0053e1ec: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e1f2: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053e1f3: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053e1f8: ADD ESP,0xc
// 0053e1fb: JMP 0x0053e178
//   XREF to: 0053e178 (UNCONDITIONAL_JUMP)
// 0053e200: PUSH 0x0
//   Label: LAB_0053e200
// 0053e202: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3bc] (DATA)
// 0053e209: PUSH EAX
// 0053e20a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053e20f: ADD ESP,0x8
// 0053e212: ADD ESP,0x754
// 0053e218: POP EBP
// 0053e219: POP EDI
// 0053e21a: POP ESI
// 0053e21b: POP EBX
// 0053e21c: RET
