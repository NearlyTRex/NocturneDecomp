// Name: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
// Address: 00575b00
// Address Range: [[00575b00, 00575b18]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00(CDemonSet * this_ptr, int camera_index, float hold_time)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ad715 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054cd5b [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055f85c [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00
          (CDemonSet *this_ptr,int camera_index,float hold_time)

{
  this_ptr->pending_camera_index = camera_index;
  this_ptr->camera_switch_cooldown = hold_time;
  return;
}


// Assembly code:
// 00575b00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
//   XREF to: Stack[0x4] (READ)
// 00575b04: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00575b08: MOV dword ptr [EAX + 0x15aeb0],EDX
// 00575b0e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00575b12: MOV dword ptr [EAX + 0x15aeb4],EDX
// 00575b18: RET
