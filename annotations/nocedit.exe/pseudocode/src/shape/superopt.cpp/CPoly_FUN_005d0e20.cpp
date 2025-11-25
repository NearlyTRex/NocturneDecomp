// Name: shape_superopt.cpp_CPoly_FUN_005d0e20
// Address: 005d0e20
// Address Range: [[005d0e20, 005d0ed5]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_FUN_005d0e20(CPoly * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_FUN_005d0e20(CPoly *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int in_stack_00000008;
  
  piVar2 = (int *)(in_stack_00000008 + 4);
  piVar1 = &this_ptr->vertex_idx_0;
  if ((((((this_ptr->vertex_idx_0 != *(int *)(in_stack_00000008 + 8)) ||
         (*piVar2 != this_ptr->vertex_idx_1)) &&
        ((*(int *)(in_stack_00000008 + 0xc) != *piVar1 ||
         (*(int *)(in_stack_00000008 + 8) != this_ptr->vertex_idx_1)))) &&
       ((*piVar2 != *piVar1 || (*(int *)(in_stack_00000008 + 0xc) != this_ptr->vertex_idx_1)))) &&
      ((*(int *)(in_stack_00000008 + 0xc) != this_ptr->vertex_idx_1 ||
       (*(int *)(in_stack_00000008 + 8) != this_ptr->vertex_idx_2)))) &&
     (((((*piVar2 != this_ptr->vertex_idx_1 ||
         (*(int *)(in_stack_00000008 + 0xc) != this_ptr->vertex_idx_2)) &&
        ((*(int *)(in_stack_00000008 + 8) != this_ptr->vertex_idx_1 ||
         (*piVar2 != this_ptr->vertex_idx_2)))) &&
       ((*piVar2 != this_ptr->vertex_idx_2 || (*(int *)(in_stack_00000008 + 0xc) != *piVar1)))) &&
      (((*(int *)(in_stack_00000008 + 8) != this_ptr->vertex_idx_2 || (*piVar2 != *piVar1)) &&
       ((*(int *)(in_stack_00000008 + 0xc) != this_ptr->vertex_idx_2 ||
        (*(int *)(in_stack_00000008 + 8) != *piVar1)))))))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d0e20: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005d0e20
// 005d0e21: PUSH ESI
// 005d0e22: PUSH EDI
// 005d0e23: PUSH EBP
// 005d0e24: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0e28: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d0e2c: MOV ECX,dword ptr [EAX + 0x4]
// 005d0e2f: MOV EBX,dword ptr [EDX + 0x8]
// 005d0e32: ADD EDX,0x4
// 005d0e35: ADD EAX,0x4
// 005d0e38: CMP ECX,EBX
// 005d0e3a: JNZ 0x005d0e47
//   XREF to: 005d0e47 (CONDITIONAL_JUMP)
// 005d0e3c: MOV ESI,dword ptr [EDX]
// 005d0e3e: CMP ESI,dword ptr [EAX + 0x4]
// 005d0e41: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e47: MOV EDI,dword ptr [EDX + 0x8]
//   Label: LAB_005d0e47
// 005d0e4a: CMP EDI,dword ptr [EAX]
// 005d0e4c: JNZ 0x005d0e5a
//   XREF to: 005d0e5a (CONDITIONAL_JUMP)
// 005d0e4e: MOV EBP,dword ptr [EDX + 0x4]
// 005d0e51: CMP EBP,dword ptr [EAX + 0x4]
// 005d0e54: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e5a: MOV EBX,dword ptr [EDX]
//   Label: LAB_005d0e5a
// 005d0e5c: CMP EBX,dword ptr [EAX]
// 005d0e5e: JNZ 0x005d0e6c
//   XREF to: 005d0e6c (CONDITIONAL_JUMP)
// 005d0e60: MOV ESI,dword ptr [EDX + 0x8]
// 005d0e63: CMP ESI,dword ptr [EAX + 0x4]
// 005d0e66: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e6c: MOV EDI,dword ptr [EDX + 0x8]
//   Label: LAB_005d0e6c
// 005d0e6f: CMP EDI,dword ptr [EAX + 0x4]
// 005d0e72: JNZ 0x005d0e7c
//   XREF to: 005d0e7c (CONDITIONAL_JUMP)
// 005d0e74: MOV EBP,dword ptr [EDX + 0x4]
// 005d0e77: CMP EBP,dword ptr [EAX + 0x8]
// 005d0e7a: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e7c: MOV EBX,dword ptr [EDX]
//   Label: LAB_005d0e7c
// 005d0e7e: CMP EBX,dword ptr [EAX + 0x4]
// 005d0e81: JNZ 0x005d0e8b
//   XREF to: 005d0e8b (CONDITIONAL_JUMP)
// 005d0e83: MOV ESI,dword ptr [EDX + 0x8]
// 005d0e86: CMP ESI,dword ptr [EAX + 0x8]
// 005d0e89: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e8b: MOV EDI,dword ptr [EDX + 0x4]
//   Label: LAB_005d0e8b
// 005d0e8e: CMP EDI,dword ptr [EAX + 0x4]
// 005d0e91: JNZ 0x005d0e9a
//   XREF to: 005d0e9a (CONDITIONAL_JUMP)
// 005d0e93: MOV EBP,dword ptr [EDX]
// 005d0e95: CMP EBP,dword ptr [EAX + 0x8]
// 005d0e98: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0e9a: MOV EBX,dword ptr [EDX]
//   Label: LAB_005d0e9a
// 005d0e9c: CMP EBX,dword ptr [EAX + 0x8]
// 005d0e9f: JNZ 0x005d0ea8
//   XREF to: 005d0ea8 (CONDITIONAL_JUMP)
// 005d0ea1: MOV ESI,dword ptr [EDX + 0x8]
// 005d0ea4: CMP ESI,dword ptr [EAX]
// 005d0ea6: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0ea8: MOV EDI,dword ptr [EDX + 0x4]
//   Label: LAB_005d0ea8
// 005d0eab: CMP EDI,dword ptr [EAX + 0x8]
// 005d0eae: JNZ 0x005d0eb6
//   XREF to: 005d0eb6 (CONDITIONAL_JUMP)
// 005d0eb0: MOV EBP,dword ptr [EDX]
// 005d0eb2: CMP EBP,dword ptr [EAX]
// 005d0eb4: JZ 0x005d0ec5
//   XREF to: 005d0ec5 (CONDITIONAL_JUMP)
// 005d0eb6: MOV EBX,dword ptr [EDX + 0x8]
//   Label: LAB_005d0eb6
// 005d0eb9: CMP EBX,dword ptr [EAX + 0x8]
// 005d0ebc: JNZ 0x005d0ecf
//   XREF to: 005d0ecf (CONDITIONAL_JUMP)
// 005d0ebe: MOV ESI,dword ptr [EDX + 0x4]
// 005d0ec1: CMP ESI,dword ptr [EAX]
// 005d0ec3: JNZ 0x005d0ecf
//   XREF to: 005d0ecf (CONDITIONAL_JUMP)
// 005d0ec5: MOV EAX,0x1
//   Label: LAB_005d0ec5
// 005d0eca: POP EBP
// 005d0ecb: POP EDI
// 005d0ecc: POP ESI
// 005d0ecd: POP EBX
// 005d0ece: RET
// 005d0ecf: XOR EAX,EAX
//   Label: LAB_005d0ecf
// 005d0ed1: POP EBP
// 005d0ed2: POP EDI
// 005d0ed3: POP ESI
// 005d0ed4: POP EBX
// 005d0ed5: RET
