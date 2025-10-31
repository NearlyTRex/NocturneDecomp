// Name: core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
// Address: 0053c140
// Address Range: [[0053c140, 0053c203]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
// Cross-references:
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bfa7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053af7b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b7d0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bc07 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053bcf0 (0053bcf0) at 0053bd20 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dbae [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005392ad [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b2f0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565dc3 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567bae [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da951 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dabe0 (005dabe0) at 005dad82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_msnedit_cpp_0063c825
//   TerminatedCString s_wt_0063c839
//   TerminatedCString s_core_msnedit_cpp_0063c83c
//   TerminatedCString s_UNDO_TMP_00680800
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02f7c52c
//   undefined4 DAT_02f7c53c
//   undefined4 g_CEdCheckInstance.checked_state
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_save_FUN_0040af30
//   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   crt_io.c_deleteFile_FUN_005ff9d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp(undefined4 param_1,
   undefined4 param_2) */

void core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140(void)

{
  FILE *file_handle;
  CDemonMission *in_stack_00000004;
  int in_stack_0000000c;
  
  crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
  DAT_02f7c52c = 0xffffffff;
  *(int *)(in_stack_00000004->field2_0xc + 0x1c) = in_stack_0000000c;
  if (in_stack_0000000c != 0) {
    *(undefined4 *)(in_stack_0000000c + 0x148) = 0;
    if (*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x2c) !=
        *(int *)in_stack_00000004->field0_0x0) {
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
    }
    if ((DAT_02f7c53c == 0) && (g_CEdCheckInstance.checked_state != 0)) {
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),1);
    }
    file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("$$UNDO$$.TMP",(char *)0x0,"wt",
                             "..\\core\\msnedit.cpp",0x9fe);
    if (file_handle != (FILE *)0x0) {
      core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
      core_actor_cpp_CDemonActor_save_FUN_0040af30
                (*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),file_handle);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",0xa02);
      return;
    }
  }
  return;
}


// Assembly code:
// 0053c140: PUSH EBX
//   Label: core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
// 0053c141: PUSH ESI
// 0053c142: PUSH EDI
// 0053c143: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053c147: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053c14c: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0053c151: ADD ESP,0x4
// 0053c154: MOV EDX,0xffffffff
// 0053c159: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0053c15d: MOV dword ptr [0x02f7c52c],EDX
//   XREF to: 02f7c52c (WRITE)
// 0053c163: MOV dword ptr [EBX + 0x28],EAX
// 0053c166: TEST EAX,EAX
// 0053c168: JZ 0x0053c1cb
//   XREF to: 0053c1cb (CONDITIONAL_JUMP)
// 0053c16a: MOV dword ptr [EAX + 0x148],0x0
// 0053c174: MOV ESI,dword ptr [EBX + 0x28]
// 0053c177: MOV EDI,dword ptr [EBX]
// 0053c179: MOV EAX,dword ptr [ESI + 0x2c]
// 0053c17c: CMP EAX,EDI
// 0053c17e: JNZ 0x0053c1cf
//   XREF to: 0053c1cf (CONDITIONAL_JUMP)
// 0053c180: CMP dword ptr [0x02f7c53c],0x0
//   Label: LAB_0053c180
//   XREF to: 02f7c53c (READ)
// 0053c187: JNZ 0x0053c1a7
//   XREF to: 0053c1a7 (CONDITIONAL_JUMP)
// 0053c189: CMP dword ptr [0x02f7c548],0x0
//   XREF to: 02f7c548 (READ)
// 0053c190: JZ 0x0053c1a7
//   XREF to: 0053c1a7 (CONDITIONAL_JUMP)
// 0053c192: PUSH 0x1
// 0053c194: MOV ECX,dword ptr [EBX + 0x28]
// 0053c197: PUSH ECX
// 0053c198: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053c19e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0053c19f: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 0053c1a4: ADD ESP,0xc
// 0053c1a7: PUSH 0x9fe
//   Label: LAB_0053c1a7
// 0053c1ac: PUSH 0x63c825
//   XREF to: 0063c825 (DATA)
// 0053c1b1: PUSH 0x63c839
//   XREF to: 0063c839 (DATA)
// 0053c1b6: PUSH 0x0
// 0053c1b8: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053c1bd: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0053c1c2: MOV ESI,EAX
// 0053c1c4: ADD ESP,0x14
// 0053c1c7: TEST EAX,EAX
// 0053c1c9: JNZ 0x0053c1db
//   XREF to: 0053c1db (CONDITIONAL_JUMP)
// 0053c1cb: POP EDI
//   Label: LAB_0053c1cb
// 0053c1cc: POP ESI
// 0053c1cd: POP EBX
// 0053c1ce: RET
// 0053c1cf: PUSH EAX
//   Label: LAB_0053c1cf
// 0053c1d0: PUSH EBX
// 0053c1d1: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 0053c1d6: ADD ESP,0x8
// 0053c1d9: JMP 0x0053c180
//   XREF to: 0053c180 (UNCONDITIONAL_JUMP)
// 0053c1db: CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   Label: LAB_0053c1db
//   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
// 0053c1e0: PUSH ESI
// 0053c1e1: MOV EDI,dword ptr [EBX + 0x28]
// 0053c1e4: PUSH EDI
// 0053c1e5: CALL core_actor.cpp_CDemonActor_save_FUN_0040af30
//   XREF to: 0040af30 (UNCONDITIONAL_CALL)
// 0053c1ea: ADD ESP,0x8
// 0053c1ed: PUSH 0xa02
// 0053c1f2: PUSH 0x63c83c
//   XREF to: 0063c83c (DATA)
// 0053c1f7: PUSH ESI
// 0053c1f8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053c1fd: ADD ESP,0xc
// 0053c200: POP EDI
// 0053c201: POP ESI
// 0053c202: POP EBX
// 0053c203: RET
