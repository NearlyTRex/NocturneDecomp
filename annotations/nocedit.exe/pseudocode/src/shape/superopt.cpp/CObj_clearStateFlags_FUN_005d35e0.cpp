// Name: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
// Address: 005d35e0
// Address Range: [[005d35e0, 005d3649]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d7290 (005d7290) at 005d72cb [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7350 (005d7350) at 005d7361 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(CObj *this_ptr,uint mask)

{
  CVert *pCVar1;
  CPoly *this_ptr_00;
  uint uVar2;
  
  pCVar1 = this_ptr->vertex_data;
  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      pCVar1->state_flags = pCVar1->state_flags & ~mask;
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  this_ptr_00 = this_ptr->poly_array;
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar2 = uVar2 + 1;
      (*this_ptr_00->vtable->clearVertexStateFlags)(this_ptr_00,mask);
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  this_ptr->flags = this_ptr->flags & ~mask;
  return;
}


// Assembly code:
// 005d35e0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
// 005d35e1: PUSH ESI
// 005d35e2: PUSH EDI
// 005d35e3: PUSH EBP
// 005d35e4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d35e8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d35ec: MOV EDX,dword ptr [EDI]
// 005d35ee: MOV EBX,dword ptr [EDI + 0x4]
// 005d35f1: XOR ESI,ESI
// 005d35f3: TEST EDX,EDX
// 005d35f5: JBE 0x005d3610
//   XREF to: 005d3610 (CONDITIONAL_JUMP)
// 005d35f7: MOV EAX,EBP
//   Label: LAB_005d35f7
// 005d35f9: MOV ECX,dword ptr [EBX + 0x34]
// 005d35fc: NOT EAX
// 005d35fe: AND ECX,EAX
// 005d3600: MOV dword ptr [EBX + 0x34],ECX
// 005d3603: INC ESI
// 005d3604: MOV EAX,dword ptr [EDI]
// 005d3606: ADD EBX,0x38
// 005d3609: CMP ESI,EAX
// 005d360b: JC 0x005d35f7
//   XREF to: 005d35f7 (CONDITIONAL_JUMP)
// 005d360d: LEA EAX,[EAX]
// 005d3610: MOV EDX,dword ptr [EDI + 0x8]
//   Label: LAB_005d3610
// 005d3613: MOV EBX,dword ptr [EDI + 0xc]
// 005d3616: XOR ESI,ESI
// 005d3618: TEST EDX,EDX
// 005d361a: JBE 0x005d3640
//   XREF to: 005d3640 (CONDITIONAL_JUMP)
// 005d361c: PUSH EBP
//   Label: LAB_005d361c
// 005d361d: MOV EAX,dword ptr [EBX + 0x64]
// 005d3620: PUSH EBX
// 005d3621: INC ESI
// 005d3622: CALL dword ptr [EAX + 0x2c]
// 005d3625: ADD ESP,0x8
// 005d3628: MOV ECX,dword ptr [EDI + 0x8]
// 005d362b: ADD EBX,0x68
// 005d362e: CMP ESI,ECX
// 005d3630: JC 0x005d361c
//   XREF to: 005d361c (CONDITIONAL_JUMP)
// 005d3632: LEA EAX,[EAX]
// 005d3638: LEA EDX,[EDX]
// 005d363e: MOV EAX,EAX
// 005d3640: NOT EBP
//   Label: LAB_005d3640
// 005d3642: AND dword ptr [EDI + 0x10],EBP
// 005d3645: POP EBP
// 005d3646: POP EDI
// 005d3647: POP ESI
// 005d3648: POP EBX
// 005d3649: RET
