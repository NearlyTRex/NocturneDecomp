// Name: shape_superopt.cpp_CPoly_FUN_005cd0b0
// Address: 005cd0b0
// Address Range: [[005cd0b0, 005cd110]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_FUN_005cd0b0(CPoly * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_FUN_005cd0b0(CPoly *this_ptr)

{
  CVert *pCVar1;
  uint in_stack_00000008;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((((pCVar1[this_ptr->vertex_idx_0].flags2 & in_stack_00000008) == in_stack_00000008) &&
      ((pCVar1[this_ptr->vertex_idx_1].flags2 & in_stack_00000008) == in_stack_00000008)) &&
     ((pCVar1[this_ptr->vertex_idx_2].flags2 & in_stack_00000008) == in_stack_00000008)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005cd0b0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd0b0
// 005cd0b1: PUSH ESI
// 005cd0b2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cd0b6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005cd0ba: MOV EAX,dword ptr [ESI + 0x4]
// 005cd0bd: SHL EAX,0x3
// 005cd0c0: MOV EBX,dword ptr [ESI]
// 005cd0c2: MOV ECX,EAX
// 005cd0c4: SHL EAX,0x3
// 005cd0c7: MOV EBX,dword ptr [EBX + 0x4]
// 005cd0ca: SUB EAX,ECX
// 005cd0cc: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30]
// 005cd0d0: AND EAX,EDX
// 005cd0d2: CMP EAX,EDX
// 005cd0d4: JNZ 0x005cd104
//   XREF to: 005cd104 (CONDITIONAL_JUMP)
// 005cd0d6: MOV EAX,dword ptr [ESI + 0x8]
// 005cd0d9: SHL EAX,0x3
// 005cd0dc: MOV ECX,EAX
// 005cd0de: SHL EAX,0x3
// 005cd0e1: SUB EAX,ECX
// 005cd0e3: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30]
// 005cd0e7: AND EAX,EDX
// 005cd0e9: CMP EAX,EDX
// 005cd0eb: JNZ 0x005cd104
//   XREF to: 005cd104 (CONDITIONAL_JUMP)
// 005cd0ed: MOV EAX,dword ptr [ESI + 0xc]
// 005cd0f0: SHL EAX,0x3
// 005cd0f3: MOV ECX,EAX
// 005cd0f5: SHL EAX,0x3
// 005cd0f8: SUB EAX,ECX
// 005cd0fa: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x30]
// 005cd0fe: AND EAX,EDX
// 005cd100: CMP EAX,EDX
// 005cd102: JZ 0x005cd109
//   XREF to: 005cd109 (CONDITIONAL_JUMP)
// 005cd104: XOR EAX,EAX
//   Label: LAB_005cd104
// 005cd106: POP ESI
// 005cd107: POP EBX
// 005cd108: RET
// 005cd109: MOV EAX,0x1
//   Label: LAB_005cd109
// 005cd10e: POP ESI
// 005cd10f: POP EBX
// 005cd110: RET
