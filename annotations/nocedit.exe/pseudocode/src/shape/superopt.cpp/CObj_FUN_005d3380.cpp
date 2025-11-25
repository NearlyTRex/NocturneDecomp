// Name: shape_superopt.cpp_CObj_FUN_005d3380
// Address: 005d3380
// Address Range: [[005d3380, 005d33c4]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d3380(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d3380(CObj *this_ptr)

{
  CPoly *in_stack_00000008;
  
  if ((this_ptr->poly_array <= in_stack_00000008) &&
     (in_stack_00000008 <= this_ptr->poly_array + this_ptr->count + -1)) {
    return ((int)in_stack_00000008 - (int)this_ptr->poly_array) / 0x68;
  }
  return -1;
}


// Assembly code:
// 005d3380: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3380
// 005d3381: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d3385: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d3389: CMP ECX,dword ptr [EBX + 0xc]
// 005d338c: JC 0x005d33ac
//   XREF to: 005d33ac (CONDITIONAL_JUMP)
// 005d338e: MOV EDX,dword ptr [EBX + 0x8]
// 005d3391: DEC EDX
// 005d3392: LEA EAX,[EDX*0x4 + 0x0]
// 005d3399: SUB EAX,EDX
// 005d339b: SHL EAX,0x2
// 005d339e: ADD EAX,EDX
// 005d33a0: SHL EAX,0x3
// 005d33a3: MOV EDX,dword ptr [EBX + 0xc]
// 005d33a6: ADD EAX,EDX
// 005d33a8: CMP ECX,EAX
// 005d33aa: JBE 0x005d33b3
//   XREF to: 005d33b3 (CONDITIONAL_JUMP)
// 005d33ac: MOV EAX,0xffffffff
//   Label: LAB_005d33ac
// 005d33b1: POP EBX
// 005d33b2: RET
// 005d33b3: SUB ECX,EDX
//   Label: LAB_005d33b3
// 005d33b5: MOV EDX,ECX
// 005d33b7: MOV ECX,0x68
// 005d33bc: MOV EAX,EDX
// 005d33be: SAR EDX,0x1f
// 005d33c1: IDIV ECX
// 005d33c3: POP EBX
// 005d33c4: RET
