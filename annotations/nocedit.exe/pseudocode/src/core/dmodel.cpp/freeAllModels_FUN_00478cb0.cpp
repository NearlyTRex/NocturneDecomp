// Name: core_dmodel.cpp_freeAllModels_FUN_00478cb0
// Address: 00478cb0
// Address Range: [[00478cb0, 00478cda]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_freeAllModels_FUN_00478cb0(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d6e5 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3d6 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087e6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_005248e0 (005248e0) at 005248f7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afb0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_KeyframeModelCount
//   CKeyFramedModel[256] g_CKeyFramedModelPool
//   undefined4 DAT_026acb5c
//   CKeyFramedModel* g_KeyFrameModelPoolEnd
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690

#include "nocturne.h"

void __cdecl core_dmodel_cpp_freeAllModels_FUN_00478cb0(void)

{
  CKeyFramedModel *this_ptr;
  
  this_ptr = g_CKeyFramedModelPool;
  do {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CKeyFramedModel *)&g_KeyFrameModelPoolEnd);
  g_KeyframeModelCount = 0;
  return;
}


// Assembly code:
// 00478cb0: PUSH EBX
//   Label: core_dmodel.cpp_freeAllModels_FUN_00478cb0
// 00478cb1: PUSH ESI
// 00478cb2: MOV EBX,0x26a7484
//   XREF to: 026a7484 (PARAM)
// 00478cb7: LEA ESI,[EBX + 0x56d800]
//   XREF to: 02c14c84 (DATA)
// 00478cbd: PUSH EBX
//   Label: LAB_00478cbd
//   XREF to: 026a7484 (DATA)
//   XREF to: 026acb5c (DATA)
// 00478cbe: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00478cc3: ADD EBX,0x56d8
//   XREF to: 026acb5c (PARAM)
// 00478cc9: ADD ESP,0x4
// 00478ccc: CMP EBX,ESI
// 00478cce: JNZ 0x00478cbd
//   XREF to: 00478cbd (CONDITIONAL_JUMP)
// 00478cd0: XOR EDX,EDX
// 00478cd2: MOV dword ptr [0x026a7480],EDX
//   XREF to: 026a7480 (WRITE)
// 00478cd8: POP ESI
// 00478cd9: POP EBX
// 00478cda: RET
