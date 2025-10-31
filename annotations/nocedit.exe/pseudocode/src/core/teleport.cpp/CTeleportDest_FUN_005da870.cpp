// Name: core_teleport.cpp_CTeleportDest_FUN_005da870
// Address: 005da870
// Address Range: [[005da870, 005da96c]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da870(CTeleportDest * this_ptr)
// Globals:
//   TerminatedCString s_CTeleport_00654c4a
//   TerminatedCString s_No_teleporters_go_to_s_00654c54
//   TerminatedCString s_Teleporters_which_go_to__00654c6c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_FUN_0053cc30
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da870(CTeleportDest *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char **in_stack_fffffba8;
  CStrList_vtable *pCStack_454;
  CStrList_vtable *in_stack_fffffbb8;
  CStrList_vtable *in_stack_fffffbbc;
  uint in_stack_fffffbc0;
  char **in_stack_fffffbc4;
  CStrList_vtable *in_stack_fffffbc8;
  char acStack_b0 [4];
  char acStack_ac [168];
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
  if (iVar1 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffba0);
    core_msnedit_cpp_FUN_0053cc30();
    if ((int)in_stack_fffffba8 < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No teleporters go to %s");
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b0,"Teleporters which go to %s");
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&pCStack_454,acStack_ac,-1,0);
      if (-1 < iVar1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffbb0,iVar1);
        pCStack_454 = (CStrList_vtable *)
                      core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      }
    }
    pCStack_454 = (CStrList_vtable *)0x5da8eb;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffbbc,0,(uint)in_stack_fffffbb8,(uint)in_stack_fffffbbc,
               in_stack_fffffbc0,(uint)in_stack_fffffbc4,(uint)in_stack_fffffbc8);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  return;
}


// Assembly code:
// 005da870: PUSH EBX
//   Label: core_teleport.cpp_CTeleportDest_FUN_005da870
// 005da871: SUB ESP,0x470
// 005da877: MOV EBX,dword ptr [ESP + 0x478]
//   XREF to: Stack[0x4] (READ)
// 005da87e: PUSH 0x14
// 005da880: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005da885: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005da886: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005da888: CALL dword ptr [EDX + 0x4]
// 005da88b: ADD ESP,0x8
// 005da88e: TEST EAX,EAX
// 005da890: JZ 0x005da95c
//   XREF to: 005da95c (CONDITIONAL_JUMP)
// 005da896: PUSH EDI
// 005da897: LEA EAX,[ESP + 0x4]
// 005da89b: PUSH EAX
// 005da89c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005da8a1: ADD ESP,0x4
// 005da8a4: PUSH 0x5da850
//   XREF to: 005da850 (DATA)
// 005da8a9: PUSH 0x654c4a
//   XREF to: 00654c4a (DATA)
// 005da8ae: PUSH EBX
// 005da8af: LEA EAX,[ESP + 0x10]
// 005da8b3: PUSH EAX
// 005da8b4: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005da8ba: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 005da8bb: CALL core_msnedit.cpp_FUN_0053cc30
//   XREF to: 0053cc30 (UNCONDITIONAL_CALL)
// 005da8c0: ADD ESP,0x14
// 005da8c3: CMP dword ptr [ESP + 0x4],0x1
// 005da8c8: JGE 0x005da8f7
//   XREF to: 005da8f7 (CONDITIONAL_JUMP)
// 005da8ca: PUSH EBX
// 005da8cb: PUSH 0x654c54
//   XREF to: 00654c54 (DATA)
// 005da8d0: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005da8d6: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005da8d7: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005da8dc: ADD ESP,0xc
// 005da8df: PUSH 0x0
//   Label: LAB_005da8df
// 005da8e1: LEA EAX,[ESP + 0x8]
// 005da8e5: PUSH EAX
// 005da8e6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005da8eb: ADD ESP,0x8
// 005da8ee: POP EDI
// 005da8ef: ADD ESP,0x470
// 005da8f5: POP EBX
// 005da8f6: RET
// 005da8f7: PUSH EBX
//   Label: LAB_005da8f7
// 005da8f8: PUSH 0x654c6c
//   XREF to: 00654c6c (DATA)
// 005da8fd: LEA EAX,[ESP + 0x3b4]
// 005da904: PUSH EAX
// 005da905: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005da90a: ADD ESP,0xc
// 005da90d: PUSH 0x0
// 005da90f: PUSH -0x1
// 005da911: LEA EAX,[ESP + 0x3b4]
// 005da918: PUSH EAX
// 005da919: LEA EAX,[ESP + 0x10]
// 005da91d: PUSH EAX
// 005da91e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005da923: ADD ESP,0x10
// 005da926: TEST EAX,EAX
// 005da928: JL 0x005da8df
//   XREF to: 005da8df (CONDITIONAL_JUMP)
// 005da92a: PUSH ESI
// 005da92b: PUSH EAX
// 005da92c: LEA EAX,[ESP + 0xc]
// 005da930: PUSH EAX
// 005da931: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005da936: ADD ESP,0x8
// 005da939: PUSH EAX
// 005da93a: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005da940: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 005da941: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 005da946: ADD ESP,0x8
// 005da949: PUSH EAX
// 005da94a: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005da950: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 005da951: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 005da956: ADD ESP,0x8
// 005da959: POP ESI
// 005da95a: JMP 0x005da8df
//   XREF to: 005da8df (UNCONDITIONAL_JUMP)
// 005da95c: PUSH EBX
//   Label: LAB_005da95c
// 005da95d: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005da962: ADD ESP,0x4
// 005da965: ADD ESP,0x470
// 005da96b: POP EBX
// 005da96c: RET
