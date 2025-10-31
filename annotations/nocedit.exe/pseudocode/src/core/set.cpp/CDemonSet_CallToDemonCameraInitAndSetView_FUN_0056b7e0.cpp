// Name: core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
// Address: 0056b7e0
// Address Range: [[0056b7e0, 0056b806]]
// Convention: unknown
// Signature: undefined core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0()
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004ddfdd [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd0a7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 (00539060) at 005390a9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b302 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50

#include "nocturne.h"

void core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0(void)

{
  CDemonSet *in_stack_00000008;
  int in_stack_00000010;
  
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,in_stack_00000010);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (in_stack_00000008,in_stack_00000008->selected_camera_index);
  return;
}


// Assembly code:
// 0056b7e0: MOV EDX,dword ptr [ESP + 0x10]
//   Label: core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   XREF to: Stack[0x10] (READ)
// 0056b7e4: PUSH EDX
// 0056b7e5: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056b7ea: CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   XREF to: 0044c190 (UNCONDITIONAL_CALL)
// 0056b7ef: ADD ESP,0x8
// 0056b7f2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0056b7f6: MOV ECX,dword ptr [EAX + 0x15aea4]
// 0056b7fc: PUSH ECX
// 0056b7fd: PUSH EAX
// 0056b7fe: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0056b803: ADD ESP,0x8
// 0056b806: RET
