// Name: core_set.cpp_CDemonSet_FUN_00570e20
// Address: 00570e20
// Address Range: [[00570e20, 00570e56]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570e20(CDemonSet * this_ptr)
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ac765 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd7c5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_00570e60 (00570e60) at 00570e96 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570e20(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  float in_stack_0000000c;
  
  this_ptr->cameras[in_stack_00000008].ambient_value = in_stack_0000000c;
  if (in_stack_00000008 != this_ptr->selected_camera_index) {
    return;
  }
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,in_stack_0000000c);
  return;
}


// Assembly code:
// 00570e20: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570e20
// 00570e21: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00570e25: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00570e29: IMUL EAX,ECX,0x1a4
// 00570e2f: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00570e33: MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX
// 00570e3a: CMP ECX,dword ptr [EDX + 0x15aea4]
// 00570e40: JZ 0x00570e44
//   XREF to: 00570e44 (CONDITIONAL_JUMP)
// 00570e42: POP EBX
// 00570e43: RET
// 00570e44: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_00570e44
//   XREF to: Stack[0xc] (READ)
// 00570e48: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00570e4d: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 00570e52: ADD ESP,0x8
// 00570e55: POP EBX
// 00570e56: RET
