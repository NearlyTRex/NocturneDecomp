// Name: shape_superopt.cpp_CObj_FUN_005d34d0
// Address: 005d34d0
// Address Range: [[005d34d0, 005d3583]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d34d0(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d34d0(CObj *this_ptr)

{
  uint uVar1;
  CVert *pCVar2;
  CPoly *pCVar3;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = 0;
  pCVar2 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar2->flags & in_stack_0000000c) == in_stack_0000000c) {
        pCVar2->flags = pCVar2->flags | in_stack_00000008;
      }
      else {
        pCVar2->flags = pCVar2->flags & ~in_stack_00000008;
      }
      uVar1 = uVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (uVar1 < (uint)this_ptr->vertex_count);
  }
  uVar1 = 0;
  pCVar3 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      (*(code *)pCVar3->vtable->field8_0x20)();
      uVar1 = uVar1 + 1;
      pCVar3 = pCVar3 + 1;
    } while (uVar1 < (uint)this_ptr->poly_count);
  }
  if ((this_ptr->field4_0x10 & in_stack_0000000c) == in_stack_0000000c) {
    this_ptr->field4_0x10 = this_ptr->field4_0x10 | in_stack_00000008;
    return;
  }
  this_ptr->field4_0x10 = this_ptr->field4_0x10 & ~in_stack_00000008;
  return;
}


// Assembly code:
// 005d34d0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d34d0
// 005d34d1: PUSH ESI
// 005d34d2: PUSH EDI
// 005d34d3: PUSH EBP
// 005d34d4: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d34d8: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d34dc: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d34e0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d34e4: XOR EAX,EAX
// 005d34e6: MOV ECX,dword ptr [EDX]
// 005d34e8: MOV EBX,dword ptr [EBX + 0x4]
// 005d34eb: TEST ECX,ECX
// 005d34ed: JBE 0x005d3516
//   XREF to: 005d3516 (CONDITIONAL_JUMP)
// 005d34ef: MOV EDX,dword ptr [EBX + 0x34]
//   Label: LAB_005d34ef
// 005d34f2: AND EDX,ESI
// 005d34f4: CMP EDX,ESI
// 005d34f6: JZ 0x005d3568
//   XREF to: 005d3568 (CONDITIONAL_JUMP)
// 005d34fc: MOV EDX,EDI
// 005d34fe: MOV ECX,dword ptr [EBX + 0x34]
// 005d3501: NOT EDX
// 005d3503: AND ECX,EDX
// 005d3505: MOV dword ptr [EBX + 0x34],ECX
// 005d3508: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_005d3508
//   XREF to: Stack[0x4] (READ)
// 005d350c: INC EAX
// 005d350d: MOV EBP,dword ptr [EDX]
// 005d350f: ADD EBX,0x38
// 005d3512: CMP EAX,EBP
// 005d3514: JC 0x005d34ef
//   XREF to: 005d34ef (CONDITIONAL_JUMP)
// 005d3516: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005d3516
//   XREF to: Stack[0x4] (READ)
// 005d351a: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d351e: XOR EBP,EBP
// 005d3520: MOV EDX,dword ptr [EAX + 0x8]
// 005d3523: MOV EBX,dword ptr [EBX + 0xc]
// 005d3526: TEST EDX,EDX
// 005d3528: JBE 0x005d354f
//   XREF to: 005d354f (CONDITIONAL_JUMP)
// 005d352a: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d352a
// 005d352d: AND EAX,ESI
// 005d352f: CMP EAX,ESI
// 005d3531: JNZ 0x005d356d
//   XREF to: 005d356d (CONDITIONAL_JUMP)
// 005d3533: PUSH -0x1
// 005d3535: PUSH EDI
// 005d3536: MOV EAX,dword ptr [EBX + 0x64]
//   Label: LAB_005d3536
// 005d3539: PUSH EBX
// 005d353a: CALL dword ptr [EAX + 0x20]
// 005d353d: ADD ESP,0xc
// 005d3540: MOV EAX,dword ptr [ESP + 0x14]
// 005d3544: INC EBP
// 005d3545: MOV EDX,dword ptr [EAX + 0x8]
// 005d3548: ADD EBX,0x68
// 005d354b: CMP EBP,EDX
// 005d354d: JC 0x005d352a
//   XREF to: 005d352a (CONDITIONAL_JUMP)
// 005d354f: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005d354f
//   XREF to: Stack[0x4] (READ)
// 005d3553: MOV EAX,dword ptr [EAX + 0x10]
// 005d3556: AND EAX,ESI
// 005d3558: CMP EAX,ESI
// 005d355a: JNZ 0x005d3576
//   XREF to: 005d3576 (CONDITIONAL_JUMP)
// 005d355c: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3560: OR dword ptr [EAX + 0x10],EDI
// 005d3563: POP EBP
// 005d3564: POP EDI
// 005d3565: POP ESI
// 005d3566: POP EBX
// 005d3567: RET
// 005d3568: OR dword ptr [EBX + 0x34],EDI
//   Label: LAB_005d3568
// 005d356b: JMP 0x005d3508
//   XREF to: 005d3508 (UNCONDITIONAL_JUMP)
// 005d356d: MOV EDX,EDI
//   Label: LAB_005d356d
// 005d356f: NOT EDX
// 005d3571: PUSH EDX
// 005d3572: PUSH 0x0
// 005d3574: JMP 0x005d3536
//   XREF to: 005d3536 (UNCONDITIONAL_JUMP)
// 005d3576: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005d3576
// 005d357a: NOT EDI
// 005d357c: AND dword ptr [EAX + 0x10],EDI
// 005d357f: POP EBP
// 005d3580: POP EDI
// 005d3581: POP ESI
// 005d3582: POP EBX
// 005d3583: RET
