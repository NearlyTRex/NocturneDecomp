// Name: shape_superopt.cpp_CObj_FUN_005d3440
// Address: 005d3440
// Address Range: [[005d3440, 005d34c7]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d3440(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d3440(CObj *this_ptr)

{
  CVert *pCVar1;
  uint uVar2;
  uint uVar3;
  CPoly *pCVar4;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  pCVar1 = this_ptr->vertex_data;
  uVar3 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      uVar2 = pCVar1->flags & in_stack_0000000c;
      pCVar1->flags = uVar2;
      pCVar1->flags = uVar2 | in_stack_00000008;
      uVar3 = uVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  pCVar4 = this_ptr->poly_array;
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar3 = uVar3 + 1;
      (*(code *)pCVar4->vtable->field8_0x20)();
      pCVar4 = pCVar4 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  uVar3 = this_ptr->field4_0x10 & in_stack_0000000c;
  this_ptr->field4_0x10 = uVar3;
  this_ptr->field4_0x10 = uVar3 | in_stack_00000008;
  return;
}


// Assembly code:
// 005d3440: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3440
// 005d3441: PUSH ESI
// 005d3442: PUSH EDI
// 005d3443: PUSH EBP
// 005d3444: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3448: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d344c: MOV EDX,dword ptr [EDI]
// 005d344e: MOV EAX,dword ptr [EDI + 0x4]
// 005d3451: XOR EBX,EBX
// 005d3453: TEST EDX,EDX
// 005d3455: JBE 0x005d3480
//   XREF to: 005d3480 (CONDITIONAL_JUMP)
// 005d3457: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d345b: MOV ECX,dword ptr [EAX + 0x34]
//   Label: LAB_005d345b
// 005d345e: AND ECX,EBP
// 005d3460: MOV EDX,ECX
// 005d3462: MOV dword ptr [EAX + 0x34],ECX
// 005d3465: OR EDX,ESI
// 005d3467: MOV dword ptr [EAX + 0x34],EDX
// 005d346a: INC EBX
// 005d346b: MOV ECX,dword ptr [EDI]
// 005d346d: ADD EAX,0x38
// 005d3470: CMP EBX,ECX
// 005d3472: JC 0x005d345b
//   XREF to: 005d345b (CONDITIONAL_JUMP)
// 005d3474: LEA EAX,[EAX]
// 005d347a: LEA EDX,[EDX]
// 005d3480: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_005d3480
// 005d3483: MOV EBX,dword ptr [EDI + 0xc]
// 005d3486: XOR ESI,ESI
// 005d3488: TEST EAX,EAX
// 005d348a: JBE 0x005d34b0
//   XREF to: 005d34b0 (CONDITIONAL_JUMP)
// 005d348c: PUSH EBP
//   Label: LAB_005d348c
// 005d348d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005d3491: PUSH EDX
// 005d3492: MOV EAX,dword ptr [EBX + 0x64]
// 005d3495: PUSH EBX
// 005d3496: INC ESI
// 005d3497: CALL dword ptr [EAX + 0x20]
// 005d349a: ADD ESP,0xc
// 005d349d: MOV ECX,dword ptr [EDI + 0x8]
// 005d34a0: ADD EBX,0x68
// 005d34a3: CMP ESI,ECX
// 005d34a5: JC 0x005d348c
//   XREF to: 005d348c (CONDITIONAL_JUMP)
// 005d34a7: LEA EAX,[EAX]
// 005d34ad: LEA EDX,[EDX]
// 005d34b0: MOV EBX,dword ptr [EDI + 0x10]
//   Label: LAB_005d34b0
// 005d34b3: AND EBX,EBP
// 005d34b5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d34b9: MOV ESI,EBX
// 005d34bb: MOV dword ptr [EDI + 0x10],EBX
// 005d34be: OR ESI,EAX
// 005d34c0: MOV dword ptr [EDI + 0x10],ESI
// 005d34c3: POP EBP
// 005d34c4: POP EDI
// 005d34c5: POP ESI
// 005d34c6: POP EBX
// 005d34c7: RET
