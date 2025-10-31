// Name: core_fire.cpp_CStake_FUN_004bfe20
// Address: 004bfe20
// Address Range: [[004bfe20, 004bfe80]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_FUN_004bfe20(CStake * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7bb0 (004c7bb0) at 004c7cde [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_FUN_004bfe20(CStake *this_ptr)

{
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  if (this_ptr->field0_0x0 + 0x10 != (char *)in_stack_0000000c) {
    *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = *in_stack_0000000c;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = in_stack_0000000c[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = in_stack_0000000c[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(this_ptr->field0_0x0 + 0x1c),(CVector3f *)(this_ptr->field0_0x0 + 0x10)
            );
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  this_ptr->field0_0x0[600] = '\0';
  this_ptr->field0_0x0[0x259] = '\0';
  this_ptr->field0_0x0[0x25a] = '\0';
  this_ptr->field0_0x0[0x25b] = '\0';
  return;
}


// Assembly code:
// 004bfe20: PUSH EBX
//   Label: core_fire.cpp_CStake_FUN_004bfe20
// 004bfe21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bfe25: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004bfe29: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004bfe2d: LEA EAX,[EBX + 0x4]
// 004bfe30: CMP EAX,EDX
// 004bfe32: JNZ 0x004bfe6d
//   XREF to: 004bfe6d (CONDITIONAL_JUMP)
// 004bfe34: LEA EAX,[EBX + 0x10]
//   Label: LAB_004bfe34
// 004bfe37: CMP EAX,ECX
// 004bfe39: JZ 0x004bfe4b
//   XREF to: 004bfe4b (CONDITIONAL_JUMP)
// 004bfe3b: MOV EDX,dword ptr [ECX]
// 004bfe3d: MOV dword ptr [EAX],EDX
// 004bfe3f: MOV EDX,dword ptr [ECX + 0x4]
// 004bfe42: MOV dword ptr [EAX + 0x4],EDX
// 004bfe45: MOV EDX,dword ptr [ECX + 0x8]
// 004bfe48: MOV dword ptr [EAX + 0x8],EDX
// 004bfe4b: LEA EAX,[EBX + 0x10]
//   Label: LAB_004bfe4b
// 004bfe4e: PUSH EAX
// 004bfe4f: LEA EAX,[EBX + 0x1c]
// 004bfe52: PUSH EAX
// 004bfe53: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004bfe58: MOV dword ptr [EBX],0x0
// 004bfe5e: ADD ESP,0x8
// 004bfe61: MOV dword ptr [EBX + 0x258],0x0
// 004bfe6b: POP EBX
// 004bfe6c: RET
// 004bfe6d: PUSH ESI
//   Label: LAB_004bfe6d
// 004bfe6e: MOV ESI,dword ptr [EDX]
// 004bfe70: MOV dword ptr [EAX],ESI
// 004bfe72: MOV ESI,dword ptr [EDX + 0x4]
// 004bfe75: MOV dword ptr [EAX + 0x4],ESI
// 004bfe78: MOV ESI,dword ptr [EDX + 0x8]
// 004bfe7b: MOV dword ptr [EAX + 0x8],ESI
// 004bfe7e: POP ESI
// 004bfe7f: JMP 0x004bfe34
//   XREF to: 004bfe34 (UNCONDITIONAL_JUMP)
