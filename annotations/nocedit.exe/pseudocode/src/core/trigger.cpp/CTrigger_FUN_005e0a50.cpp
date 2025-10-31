// Name: core_trigger.cpp_CTrigger_FUN_005e0a50
// Address: 005e0a50
// Address Range: [[005e0a50, 005e0a9c]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e0a50(CTrigger * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0a50(CTrigger *this_ptr)

{
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840
            (&this_ptr->base_actor,in_stack_00000008);
  if ((*(int *)(this_ptr->field1_0x158 + 0x1c) == 5) &&
     (*(int *)(this_ptr->field1_0x158 + 0x19c) == in_stack_00000008->field2_0x8)) {
    this_ptr->field1_0x158[0x198] = '\x01';
    this_ptr->field1_0x158[0x199] = '\0';
    this_ptr->field1_0x158[0x19a] = '\0';
    this_ptr->field1_0x158[0x19b] = '\0';
  }
  in_stack_00000008->alpha_or_wetness = 0.0;
  in_stack_00000008->reflectivity = 1.0;
  in_stack_00000008->angle_copy = in_stack_00000008->angle_or_rotation;
  return;
}


// Assembly code:
// 005e0a50: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e0a50
// 005e0a51: PUSH ESI
// 005e0a52: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e0a56: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e0a5a: PUSH EBX
// 005e0a5b: PUSH ESI
// 005e0a5c: CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   XREF to: 00409840 (UNCONDITIONAL_CALL)
// 005e0a61: MOV EDX,dword ptr [ESI + 0x174]
// 005e0a67: ADD ESP,0x8
// 005e0a6a: CMP EDX,0x5
// 005e0a6d: JNZ 0x005e0a7a
//   XREF to: 005e0a7a (CONDITIONAL_JUMP)
// 005e0a6f: MOV ECX,dword ptr [ESI + 0x2f4]
// 005e0a75: CMP ECX,dword ptr [EBX + 0x8]
// 005e0a78: JZ 0x005e0a91
//   XREF to: 005e0a91 (CONDITIONAL_JUMP)
// 005e0a7a: MOV dword ptr [EBX + 0x50],0x0
//   Label: LAB_005e0a7a
// 005e0a81: MOV dword ptr [EBX + 0x48],0x3f800000
// 005e0a88: MOV EAX,dword ptr [EBX + 0x44]
// 005e0a8b: MOV dword ptr [EBX + 0x4c],EAX
// 005e0a8e: POP ESI
// 005e0a8f: POP EBX
// 005e0a90: RET
// 005e0a91: MOV dword ptr [ESI + 0x2f0],0x1
//   Label: LAB_005e0a91
// 005e0a9b: JMP 0x005e0a7a
//   XREF to: 005e0a7a (UNCONDITIONAL_JUMP)
