// Name: core_mission.cpp_FUN_00524c20
// Address: 00524c20
// Address Range: [[00524c20, 00524df7]]
// Convention: __cdecl
// Signature: void core_mission.cpp_FUN_00524c20(void)
// Cross-references:
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522dfa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHero_006394d8
//   TerminatedCString s_Warning_mission_has_no_h_006394de
//   TerminatedCString s_Mission_has_no_hero_plac_00639517
//   TerminatedCString s_core_mission_cpp_006395d9
//   TerminatedCString s_Hell_froze_finding_hero_006395ed
//   TerminatedCString s_core_mission_cpp_00639606
//   TerminatedCString s_Replaced_hero_OK_You_wil_0063961a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CHeroPlaceholderClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_hero.cpp_FUN_004f3c00
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00524c20(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CHeroPlaceholder *this_ptr;
  COrientation *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonMission *in_stack_00000004;
  uint in_stack_fffffc50;
  char **in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  uint in_stack_fffffc74;
  uint in_stack_fffffc78;
  uint in_stack_fffffc7c;
  char **in_stack_fffffc80;
  CStrList_vtable *in_stack_fffffc84;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
  actor_ptr = in_stack_00000004->first_actor;
  while( true ) {
    if (actor_ptr == (CDemonActor *)0x0) {
      if ((int)in_stack_fffffc50 < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffffc50,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",-1,0);
        if (-1 < iVar1) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc54,iVar1);
          pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
          if (pcVar3 == (char *)0x0) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x685;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding hero.");
          }
          this_ptr = (CHeroPlaceholder *)
                     shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                               (0x15c,"..\\core\\mission.cpp",0x689);
          if (this_ptr != (CHeroPlaceholder *)0x0) {
            this_ptr = core_hero_cpp_FUN_004f3c00(this_ptr);
          }
          this_ptr->field1_0x158 = 0;
          (this_ptr->base_actor).location.position.x = *(float *)(pcVar3 + 0x20);
          (this_ptr->base_actor).location.position.y = *(float *)(pcVar3 + 0x24);
          (this_ptr->base_actor).location.position.z = *(float *)(pcVar3 + 0x28);
          pCVar4 = &(this_ptr->base_actor).orient;
          (this_ptr->base_actor).location.area_id = *(int *)(pcVar3 + 0x2c);
          if (pCVar4 != (COrientation *)(pcVar3 + 0x30)) {
            pCVar4->pitch = *(float *)(pcVar3 + 0x30);
            (this_ptr->base_actor).orient.bank = *(float *)(pcVar3 + 0x34);
            (this_ptr->base_actor).orient.heading = *(float *)(pcVar3 + 0x38);
          }
          core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
          core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
          core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffffc78,0,in_stack_fffffc74,in_stack_fffffc78,
                     in_stack_fffffc7c,(uint)in_stack_fffffc80,(uint)in_stack_fffffc84);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc54,0,(uint)in_stack_fffffc54,(uint)in_stack_fffffc58,
                 (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc4c,actor_ptr->actor_name);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((pCVar2 != (CDemonActor *)0x0) && (*(int *)pCVar2[1].actor_name == 0)) break;
    actor_ptr = actor_ptr->next_actor;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,(uint)in_stack_fffffc54,
             (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,(uint)in_stack_fffffc60);
  return;
}


// Assembly code:
// 00524c20: PUSH EBX
//   Label: core_mission.cpp_FUN_00524c20
// 00524c21: PUSH EDI
// 00524c22: PUSH EBP
// 00524c23: SUB ESP,0x3a8
// 00524c29: MOV EDI,dword ptr [ESP + 0x3b8]
//   XREF to: Stack[0x4] (READ)
// 00524c30: MOV EAX,ESP
// 00524c32: PUSH EAX
// 00524c33: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00524c38: MOV EBX,dword ptr [EDI + 0x548]
// 00524c3e: ADD ESP,0x4
// 00524c41: TEST EBX,EBX
// 00524c43: JZ 0x00524c87
//   XREF to: 00524c87 (CONDITIONAL_JUMP)
// 00524c45: PUSH 0x6394d8
//   Label: LAB_00524c45
//   XREF to: 006394d8 (DATA)
// 00524c4a: PUSH EBX
// 00524c4b: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00524c50: ADD ESP,0x8
// 00524c53: TEST EAX,EAX
// 00524c55: JZ 0x00524c65
//   XREF to: 00524c65 (CONDITIONAL_JUMP)
// 00524c57: PUSH EBX
// 00524c58: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524c5c: PUSH EAX
// 00524c5d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00524c62: ADD ESP,0x8
// 00524c65: MOV EBP,dword ptr [0x02db8848]
//   Label: LAB_00524c65
//   XREF to: 02db8848 (READ)
// 00524c6b: PUSH EBP
// 00524c6c: PUSH EBX
// 00524c6d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00524c72: ADD ESP,0x8
// 00524c75: TEST EAX,EAX
// 00524c77: JNZ 0x00524da5
//   XREF to: 00524da5 (CONDITIONAL_JUMP)
// 00524c7d: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00524c7d
// 00524c83: TEST EBX,EBX
// 00524c85: JNZ 0x00524c45
//   XREF to: 00524c45 (CONDITIONAL_JUMP)
// 00524c87: CMP dword ptr [ESP],0x1
//   Label: LAB_00524c87
//   XREF to: Stack[-0x3b4] (DATA)
// 00524c8b: JL 0x00524dcb
//   XREF to: 00524dcb (CONDITIONAL_JUMP)
// 00524c91: PUSH 0x0
// 00524c93: PUSH -0x1
// 00524c95: PUSH 0x639517
//   XREF to: 00639517 (DATA)
// 00524c9a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524c9e: PUSH EAX
// 00524c9f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00524ca4: ADD ESP,0x10
// 00524ca7: TEST EAX,EAX
// 00524ca9: JL 0x00524ddf
//   XREF to: 00524ddf (CONDITIONAL_JUMP)
// 00524caf: PUSH ESI
// 00524cb0: PUSH EAX
// 00524cb1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524cb5: PUSH EAX
// 00524cb6: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00524cbb: ADD ESP,0x8
// 00524cbe: PUSH EAX
// 00524cbf: PUSH EDI
// 00524cc0: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 00524cc5: ADD ESP,0x8
// 00524cc8: MOV ESI,EAX
// 00524cca: TEST EAX,EAX
// 00524ccc: JNZ 0x00524cf1
//   XREF to: 00524cf1 (CONDITIONAL_JUMP)
// 00524cce: MOV ECX,0x6395d9
//   XREF to: 006395d9 (PARAM)
// 00524cd3: MOV EBX,0x685
// 00524cd8: PUSH 0x6395ed
//   XREF to: 006395ed (DATA)
// 00524cdd: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00524ce3: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00524ce9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524cee: ADD ESP,0x4
// 00524cf1: PUSH 0x689
//   Label: LAB_00524cf1
// 00524cf6: PUSH 0x639606
//   XREF to: 00639606 (DATA)
// 00524cfb: PUSH 0x15c
// 00524d00: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00524d05: ADD ESP,0xc
// 00524d08: TEST EAX,EAX
// 00524d0a: JZ 0x00524d15
//   XREF to: 00524d15 (CONDITIONAL_JUMP)
// 00524d0c: PUSH EAX
// 00524d0d: CALL core_hero.cpp_FUN_004f3c00
//   XREF to: 004f3c00 (UNCONDITIONAL_CALL)
// 00524d12: ADD ESP,0x4
// 00524d15: MOV EBP,EAX
//   Label: LAB_00524d15
// 00524d17: LEA EDX,[ESI + 0x20]
// 00524d1a: MOV dword ptr [EAX + 0x158],0x0
// 00524d24: LEA EBX,[EAX + 0x20]
// 00524d27: MOV ECX,dword ptr [EDX]
// 00524d29: MOV dword ptr [EBX],ECX
// 00524d2b: MOV ECX,dword ptr [EDX + 0x4]
// 00524d2e: MOV dword ptr [EBX + 0x4],ECX
// 00524d31: MOV ECX,dword ptr [EDX + 0x8]
// 00524d34: MOV dword ptr [EBX + 0x8],ECX
// 00524d37: MOV EDX,dword ptr [EDX + 0xc]
// 00524d3a: ADD EAX,0x30
// 00524d3d: MOV dword ptr [EBX + 0xc],EDX
// 00524d40: LEA EBX,[ESI + 0x30]
// 00524d43: CMP EAX,EBX
// 00524d45: JZ 0x00524d57
//   XREF to: 00524d57 (CONDITIONAL_JUMP)
// 00524d47: MOV EDX,dword ptr [EBX]
// 00524d49: MOV dword ptr [EAX],EDX
// 00524d4b: MOV EDX,dword ptr [EBX + 0x4]
// 00524d4e: MOV dword ptr [EAX + 0x4],EDX
// 00524d51: MOV EDX,dword ptr [EBX + 0x8]
// 00524d54: MOV dword ptr [EAX + 0x8],EDX
// 00524d57: PUSH EBP
//   Label: LAB_00524d57
// 00524d58: PUSH EDI
// 00524d59: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 00524d5e: ADD ESP,0x8
// 00524d61: PUSH 0x1
// 00524d63: PUSH ESI
// 00524d64: PUSH EDI
// 00524d65: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 00524d6a: ADD ESP,0xc
// 00524d6d: PUSH EBP
// 00524d6e: PUSH EDI
// 00524d6f: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 00524d74: ADD ESP,0x8
// 00524d77: PUSH 0x63961a
//   XREF to: 0063961a (DATA)
// 00524d7c: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00524d82: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00524d83: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00524d88: ADD ESP,0x8
// 00524d8b: PUSH 0x0
// 00524d8d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524d91: PUSH EAX
// 00524d92: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00524d97: ADD ESP,0x8
// 00524d9a: POP ESI
// 00524d9b: ADD ESP,0x3a8
// 00524da1: POP EBP
// 00524da2: POP EDI
// 00524da3: POP EBX
// 00524da4: RET
// 00524da5: MOV EDX,dword ptr [EAX + 0x158]
//   Label: LAB_00524da5
// 00524dab: TEST EDX,EDX
// 00524dad: JNZ 0x00524c7d
//   XREF to: 00524c7d (CONDITIONAL_JUMP)
// 00524db3: PUSH EDX
// 00524db4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524db8: PUSH EAX
// 00524db9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00524dbe: ADD ESP,0x8
// 00524dc1: ADD ESP,0x3a8
// 00524dc7: POP EBP
// 00524dc8: POP EDI
// 00524dc9: POP EBX
// 00524dca: RET
// 00524dcb: PUSH 0x6394de
//   Label: LAB_00524dcb
//   XREF to: 006394de (DATA)
// 00524dd0: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00524dd6: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00524dd7: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00524ddc: ADD ESP,0x8
// 00524ddf: PUSH 0x0
//   Label: LAB_00524ddf
// 00524de1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 00524de5: PUSH EAX
// 00524de6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00524deb: ADD ESP,0x8
// 00524dee: ADD ESP,0x3a8
// 00524df4: POP EBP
// 00524df5: POP EDI
// 00524df6: POP EBX
// 00524df7: RET
