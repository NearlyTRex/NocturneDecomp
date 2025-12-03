// Name: shape_superopt.cpp_CPoly_FUN_005cd410
// Address: 005cd410
// Address Range: [[005cd410, 005cd4a0]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd410(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd410(CPoly *this_ptr)

{
  int iVar1;
  CVert *pCVar2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((pCVar2[iVar1].attrib_flags & in_stack_0000000c) == in_stack_0000000c) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | in_stack_00000008;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~in_stack_00000008;
  }
  iVar1 = this_ptr->vertex_idx_1;
  if ((pCVar2[iVar1].attrib_flags & in_stack_0000000c) == in_stack_0000000c) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | in_stack_00000008;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~in_stack_00000008;
  }
  iVar1 = this_ptr->vertex_idx_2;
  if ((pCVar2[iVar1].attrib_flags & in_stack_0000000c) == in_stack_0000000c) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | in_stack_00000008;
    return;
  }
  pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~in_stack_00000008;
  return;
}


// Assembly code:
// 005cd410: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd410
// 005cd411: PUSH ESI
// 005cd412: PUSH EDI
// 005cd413: PUSH EBP
// 005cd414: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cd418: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cd41c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cd420: MOV EAX,dword ptr [EDI + 0x4]
// 005cd423: SHL EAX,0x3
// 005cd426: MOV ESI,dword ptr [EDI]
// 005cd428: MOV EBX,EAX
// 005cd42a: SHL EAX,0x3
// 005cd42d: MOV ESI,dword ptr [ESI + 0x4]
// 005cd430: SUB EAX,EBX
// 005cd432: ADD EAX,ESI
// 005cd434: MOV EBX,dword ptr [EAX + 0x30]
// 005cd437: AND EBX,EDX
// 005cd439: CMP EBX,EDX
// 005cd43b: JZ 0x005cd484
//   XREF to: 005cd484 (CONDITIONAL_JUMP)
// 005cd43d: MOV EBX,ECX
// 005cd43f: MOV EBP,dword ptr [EAX + 0x34]
// 005cd442: NOT EBX
// 005cd444: AND EBP,EBX
// 005cd446: MOV dword ptr [EAX + 0x34],EBP
// 005cd449: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_005cd449
// 005cd44c: SHL EAX,0x3
// 005cd44f: MOV EBX,EAX
// 005cd451: SHL EAX,0x3
// 005cd454: SUB EAX,EBX
// 005cd456: ADD EAX,ESI
// 005cd458: MOV EBX,dword ptr [EAX + 0x30]
// 005cd45b: AND EBX,EDX
// 005cd45d: CMP EBX,EDX
// 005cd45f: JNZ 0x005cd489
//   XREF to: 005cd489 (CONDITIONAL_JUMP)
// 005cd461: OR dword ptr [EAX + 0x34],ECX
// 005cd464: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005cd464
// 005cd467: SHL EAX,0x3
// 005cd46a: MOV EBX,EAX
// 005cd46c: SHL EAX,0x3
// 005cd46f: SUB EAX,EBX
// 005cd471: ADD EAX,ESI
// 005cd473: MOV EBX,dword ptr [EAX + 0x30]
// 005cd476: AND EBX,EDX
// 005cd478: CMP EBX,EDX
// 005cd47a: JNZ 0x005cd497
//   XREF to: 005cd497 (CONDITIONAL_JUMP)
// 005cd47c: OR dword ptr [EAX + 0x34],ECX
// 005cd47f: POP EBP
// 005cd480: POP EDI
// 005cd481: POP ESI
// 005cd482: POP EBX
// 005cd483: RET
// 005cd484: OR dword ptr [EAX + 0x34],ECX
//   Label: LAB_005cd484
// 005cd487: JMP 0x005cd449
//   XREF to: 005cd449 (UNCONDITIONAL_JUMP)
// 005cd489: MOV EBX,ECX
//   Label: LAB_005cd489
// 005cd48b: MOV EBP,dword ptr [EAX + 0x34]
// 005cd48e: NOT EBX
// 005cd490: AND EBP,EBX
// 005cd492: MOV dword ptr [EAX + 0x34],EBP
// 005cd495: JMP 0x005cd464
//   XREF to: 005cd464 (UNCONDITIONAL_JUMP)
// 005cd497: NOT ECX
//   Label: LAB_005cd497
// 005cd499: AND dword ptr [EAX + 0x34],ECX
// 005cd49c: POP EBP
// 005cd49d: POP EDI
// 005cd49e: POP ESI
// 005cd49f: POP EBX
// 005cd4a0: RET
