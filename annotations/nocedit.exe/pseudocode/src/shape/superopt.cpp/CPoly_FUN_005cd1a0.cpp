// Name: shape_superopt.cpp_CPoly_FUN_005cd1a0
// Address: 005cd1a0
// Address Range: [[005cd1a0, 005cd21f]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd1a0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd1a0(CPoly *this_ptr)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint in_stack_00000008;
  
  iVar1 = this_ptr->vertex_idx_0;
  pvVar2 = this_ptr->parent_obj->vertex_data;
  uVar3 = ~in_stack_00000008;
  *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) =
       ~(*(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) & in_stack_00000008) & in_stack_00000008 |
       *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) & uVar3;
  iVar1 = this_ptr->vertex_idx_1;
  *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) =
       ~(*(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) & in_stack_00000008) & in_stack_00000008 |
       *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) & uVar3;
  iVar1 = this_ptr->vertex_idx_2;
  *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) =
       ~(*(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30) & in_stack_00000008) & in_stack_00000008 |
       uVar3 & *(uint *)((int)pvVar2 + iVar1 * 0x38 + 0x30);
  return;
}


// Assembly code:
// 005cd1a0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd1a0
// 005cd1a1: PUSH ESI
// 005cd1a2: PUSH EDI
// 005cd1a3: PUSH EBP
// 005cd1a4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd1a8: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cd1ac: MOV EAX,dword ptr [EDI + 0x4]
// 005cd1af: SHL EAX,0x3
// 005cd1b2: MOV ECX,dword ptr [EDI]
// 005cd1b4: MOV EBX,EAX
// 005cd1b6: SHL EAX,0x3
// 005cd1b9: MOV ECX,dword ptr [ECX + 0x4]
// 005cd1bc: SUB EAX,EBX
// 005cd1be: LEA EBX,[ECX + EAX*0x1]
// 005cd1c1: MOV ESI,EDX
// 005cd1c3: MOV EAX,dword ptr [EBX + 0x30]
// 005cd1c6: NOT ESI
// 005cd1c8: AND EAX,EDX
// 005cd1ca: MOV EBP,dword ptr [EBX + 0x30]
// 005cd1cd: NOT EAX
// 005cd1cf: AND EBP,ESI
// 005cd1d1: AND EAX,EDX
// 005cd1d3: OR EAX,EBP
// 005cd1d5: MOV dword ptr [EBX + 0x30],EAX
// 005cd1d8: MOV EAX,dword ptr [EDI + 0x8]
// 005cd1db: SHL EAX,0x3
// 005cd1de: MOV EBX,EAX
// 005cd1e0: SHL EAX,0x3
// 005cd1e3: SUB EAX,EBX
// 005cd1e5: LEA EBX,[ECX + EAX*0x1]
// 005cd1e8: MOV EAX,dword ptr [EBX + 0x30]
// 005cd1eb: AND EAX,EDX
// 005cd1ed: MOV EBP,dword ptr [EBX + 0x30]
// 005cd1f0: NOT EAX
// 005cd1f2: AND EBP,ESI
// 005cd1f4: AND EAX,EDX
// 005cd1f6: OR EAX,EBP
// 005cd1f8: MOV dword ptr [EBX + 0x30],EAX
// 005cd1fb: MOV EAX,dword ptr [EDI + 0xc]
// 005cd1fe: SHL EAX,0x3
// 005cd201: MOV EBX,EAX
// 005cd203: SHL EAX,0x3
// 005cd206: SUB EAX,EBX
// 005cd208: ADD ECX,EAX
// 005cd20a: MOV EAX,dword ptr [ECX + 0x30]
// 005cd20d: AND EAX,EDX
// 005cd20f: NOT EAX
// 005cd211: AND EAX,EDX
// 005cd213: AND ESI,dword ptr [ECX + 0x30]
// 005cd216: OR EAX,ESI
// 005cd218: MOV dword ptr [ECX + 0x30],EAX
// 005cd21b: POP EBP
// 005cd21c: POP EDI
// 005cd21d: POP ESI
// 005cd21e: POP EBX
// 005cd21f: RET
