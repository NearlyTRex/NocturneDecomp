// Name: core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
// Address: 0053d190
// Address Range: [[0053d190, 0053d21a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538727 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 00537fc7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a640 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_world_0063cb13
//   TerminatedCString s_Warning_s_exists_in_moun_0063cb19
//   TerminatedCString s_scr_0063cb90
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CScript* g_CScriptPtr = 0310f858
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
//   CScript g_CScriptInstance
// Function calls:
//   core_mission.cpp_CDemonMission_save_FUN_00522e30
//   core_script.cpp_FUN_00566180
//   crt_file.c_makepath_FUN_005febfc
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_CheckWorldMountedAndSave(undefined4 param_1, undefined4
   param_2) */

void core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190(void)

{
  CPodFile *pCVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  CDemonMission *in_stack_0000000c;
  undefined1 *puStack_100;
  undefined1 auStack_fc [244];
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"world",in_stack_00000008,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Warning: %s exists in mounted pod %s.\n\nI'm saving the mission to local file, anyway.\n\nJust thought you'd like to know.",in_stack_00000008,
               pCVar1->filename);
  }
  core_mission_cpp_CDemonMission_save_FUN_00522e30(in_stack_0000000c);
  crt_file_c_makepath_FUN_005febfc
            ((char *)&puStack_100,(char *)0x0,(char *)0x0,in_stack_0000000c->field2_0xc + 0x38,
             "scr");
  puStack_100 = auStack_fc;
  core_script_cpp_FUN_00566180();
  return;
}


// Assembly code:
// 0053d190: PUSH EBX
//   Label: core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
// 0053d191: PUSH ESI
// 0053d192: SUB ESP,0x104
// 0053d198: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x8] (READ)
// 0053d19f: PUSH 0x0
// 0053d1a1: PUSH EBX
// 0053d1a2: PUSH 0x63cb13
//   XREF to: 0063cb13 (DATA)
// 0053d1a7: MOV EDX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 0053d1ad: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 0053d1ae: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 0053d1b3: ADD ESP,0x10
// 0053d1b6: TEST EAX,EAX
// 0053d1b8: JNZ 0x0053d200
//   XREF to: 0053d200 (CONDITIONAL_JUMP)
// 0053d1ba: PUSH EBX
//   Label: LAB_0053d1ba
// 0053d1bb: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 0053d1c2: PUSH EBX
// 0053d1c3: CALL core_mission.cpp_CDemonMission_save_FUN_00522e30
//   XREF to: 00522e30 (UNCONDITIONAL_CALL)
// 0053d1c8: ADD ESP,0x8
// 0053d1cb: PUSH 0x63cb90
//   XREF to: 0063cb90 (DATA)
// 0053d1d0: LEA EAX,[EBX + 0x44]
// 0053d1d3: PUSH EAX
// 0053d1d4: PUSH 0x0
// 0053d1d6: PUSH 0x0
// 0053d1d8: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x10c] (DATA)
// 0053d1dc: PUSH EAX
// 0053d1dd: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0053d1e2: ADD ESP,0x14
// 0053d1e5: MOV EAX,ESP
// 0053d1e7: PUSH EAX
// 0053d1e8: MOV ESI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 0053d1ee: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 0053d1ef: CALL core_script.cpp_FUN_00566180
//   XREF to: 00566180 (UNCONDITIONAL_CALL)
// 0053d1f4: ADD ESP,0x8
// 0053d1f7: ADD ESP,0x104
// 0053d1fd: POP ESI
// 0053d1fe: POP EBX
// 0053d1ff: RET
// 0053d200: ADD EAX,0x4
//   Label: LAB_0053d200
// 0053d203: PUSH EAX
// 0053d204: PUSH EBX
// 0053d205: PUSH 0x63cb19
//   XREF to: 0063cb19 (DATA)
// 0053d20a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053d210: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053d211: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053d216: ADD ESP,0x10
// 0053d219: JMP 0x0053d1ba
//   XREF to: 0053d1ba (UNCONDITIONAL_JUMP)
