// Name: shape_superopt.cpp_CObj_FUN_005d3f10
// Address: 005d3f10
// Address Range: [[005d3f10, 005d3f5f]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d3f10(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d3f10(CObj *this_ptr)

{
  CPoly *pCVar1;
  uint uVar2;
  uint in_stack_0000000c;
  
  pCVar1 = this_ptr->poly_array;
  uVar2 = 0;
  if (this_ptr->count != 0) {
    do {
      while ((pCVar1->field8_0x60 & in_stack_0000000c) == in_stack_0000000c) {
        (**(code **)((int)pCVar1->vtable + 0x50))();
        uVar2 = uVar2 + 1;
        pCVar1 = pCVar1 + 1;
        if ((uint)this_ptr->count <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->count);
  }
  return;
}


// Assembly code:
// 005d3f10: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3f10
// 005d3f11: PUSH ESI
// 005d3f12: PUSH EDI
// 005d3f13: PUSH EBP
// 005d3f14: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3f18: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3f1c: MOV EDX,dword ptr [EBP + 0x8]
// 005d3f1f: MOV EBX,dword ptr [EBP + 0xc]
// 005d3f22: XOR ESI,ESI
// 005d3f24: TEST EDX,EDX
// 005d3f26: JBE 0x005d3f3c
//   XREF to: 005d3f3c (CONDITIONAL_JUMP)
// 005d3f28: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d3f28
// 005d3f2b: AND EAX,EDI
// 005d3f2d: CMP EAX,EDI
// 005d3f2f: JZ 0x005d3f41
//   XREF to: 005d3f41 (CONDITIONAL_JUMP)
// 005d3f31: INC ESI
// 005d3f32: MOV ECX,dword ptr [EBP + 0x8]
// 005d3f35: ADD EBX,0x68
// 005d3f38: CMP ESI,ECX
// 005d3f3a: JC 0x005d3f28
//   XREF to: 005d3f28 (CONDITIONAL_JUMP)
// 005d3f3c: POP EBP
//   Label: LAB_005d3f3c
// 005d3f3d: POP EDI
// 005d3f3e: POP ESI
// 005d3f3f: POP EBX
// 005d3f40: RET
// 005d3f41: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005d3f41
//   XREF to: Stack[0x8] (READ)
// 005d3f45: PUSH EDX
// 005d3f46: MOV EAX,dword ptr [EBX + 0x64]
// 005d3f49: PUSH EBX
// 005d3f4a: CALL dword ptr [EAX + 0x50]
// 005d3f4d: ADD ESP,0x8
// 005d3f50: INC ESI
// 005d3f51: MOV ECX,dword ptr [EBP + 0x8]
// 005d3f54: ADD EBX,0x68
// 005d3f57: CMP ESI,ECX
// 005d3f59: JC 0x005d3f28
//   XREF to: 005d3f28 (CONDITIONAL_JUMP)
// 005d3f5b: POP EBP
// 005d3f5c: POP EDI
// 005d3f5d: POP ESI
// 005d3f5e: POP EBX
// 005d3f5f: RET
