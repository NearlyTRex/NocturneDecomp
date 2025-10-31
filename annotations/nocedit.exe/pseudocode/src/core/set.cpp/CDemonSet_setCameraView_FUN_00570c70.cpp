// Name: core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
// Address: 00570c70
// Address Range: [[00570c70, 00570c9e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c208 [UNCONDITIONAL_CALL]
// Function calls:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->previous_best_camera_index;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,this_ptr->selected_camera_index);
  this_ptr->previous_best_camera_timer = 0.0;
  this_ptr->previous_best_camera_index = iVar1;
  return;
}


// Assembly code:
// 00570c70: PUSH EBX
//   Label: core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
// 00570c71: PUSH ESI
// 00570c72: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00570c76: MOV EDX,dword ptr [EBX + 0x15aea4]
// 00570c7c: PUSH EDX
// 00570c7d: PUSH EBX
// 00570c7e: MOV ESI,dword ptr [EBX + 0x15aea8]
// 00570c84: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 00570c89: MOV dword ptr [EBX + 0x15aeac],0x0
// 00570c93: ADD ESP,0x8
// 00570c96: MOV dword ptr [EBX + 0x15aea8],ESI
// 00570c9c: POP ESI
// 00570c9d: POP EBX
// 00570c9e: RET
