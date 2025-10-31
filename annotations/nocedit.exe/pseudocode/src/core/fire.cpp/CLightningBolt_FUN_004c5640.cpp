// Name: core_fire.cpp_CLightningBolt_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c567e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_FUN_004c5640(CLightningBolt * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8f50 (004c8f50) at 004c8f7b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_FUN_004c5640(CLightningBolt *this_ptr)

{
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  this_ptr->field0_0x0[0x14] = '\0';
  this_ptr->field0_0x0[0x15] = '\0';
  this_ptr->field0_0x0[0x16] = -0x80;
  this_ptr->field0_0x0[0x17] = '>';
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = in_stack_0000000c;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = in_stack_00000010;
  return;
}


// Assembly code:
// 004c5640: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CLightningBolt_FUN_004c5640
//   XREF to: Stack[0x4] (READ)
// 004c5644: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004c5648: LEA EAX,[EDX + 0x4]
// 004c564b: CMP EAX,ECX
// 004c564d: JNZ 0x004c566b
//   XREF to: 004c566b (CONDITIONAL_JUMP)
// 004c564f: MOV dword ptr [EDX + 0x14],0x3e800000
//   Label: LAB_004c564f
// 004c5656: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004c565a: MOV dword ptr [EDX],0x0
// 004c5660: MOV dword ptr [EDX + 0x10],EAX
// 004c5663: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004c5667: MOV dword ptr [EDX + 0x18],EAX
// 004c566a: RET
// 004c566b: PUSH EBX
//   Label: LAB_004c566b
// 004c566c: MOV EBX,dword ptr [ECX]
// 004c566e: MOV dword ptr [EAX],EBX
// 004c5670: MOV EBX,dword ptr [ECX + 0x4]
// 004c5673: MOV dword ptr [EAX + 0x4],EBX
// 004c5676: MOV EBX,dword ptr [ECX + 0x8]
// 004c5679: MOV dword ptr [EAX + 0x8],EBX
// 004c567c: POP EBX
// 004c567d: JMP 0x004c564f
//   XREF to: 004c564f (UNCONDITIONAL_JUMP)
