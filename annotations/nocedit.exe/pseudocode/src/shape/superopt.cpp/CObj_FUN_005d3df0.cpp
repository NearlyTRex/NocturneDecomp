// Name: shape_superopt.cpp_CObj_FUN_005d3df0
// Address: 005d3df0
// Address Range: [[005d3df0, 005d3e3a]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d3df0(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d3df0(CObj *this_ptr)

{
  CPoly *pCVar1;
  uint uVar2;
  uint in_stack_00000008;
  
  pCVar1 = this_ptr->poly_array;
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      while ((pCVar1->flags & in_stack_00000008) == in_stack_00000008) {
        (*(code *)pCVar1->vtable->field18_0x48)();
        uVar2 = uVar2 + 1;
        pCVar1 = pCVar1 + 1;
        if ((uint)this_ptr->poly_count <= uVar2) {
          return;
        }
      }
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}


// Assembly code:
// 005d3df0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3df0
// 005d3df1: PUSH ESI
// 005d3df2: PUSH EDI
// 005d3df3: PUSH EBP
// 005d3df4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3df8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d3dfc: MOV EDX,dword ptr [EBP + 0x8]
// 005d3dff: MOV EBX,dword ptr [EBP + 0xc]
// 005d3e02: XOR ESI,ESI
// 005d3e04: TEST EDX,EDX
// 005d3e06: JBE 0x005d3e1c
//   XREF to: 005d3e1c (CONDITIONAL_JUMP)
// 005d3e08: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d3e08
// 005d3e0b: AND EAX,EDI
// 005d3e0d: CMP EAX,EDI
// 005d3e0f: JZ 0x005d3e21
//   XREF to: 005d3e21 (CONDITIONAL_JUMP)
// 005d3e11: INC ESI
// 005d3e12: MOV ECX,dword ptr [EBP + 0x8]
// 005d3e15: ADD EBX,0x68
// 005d3e18: CMP ESI,ECX
// 005d3e1a: JC 0x005d3e08
//   XREF to: 005d3e08 (CONDITIONAL_JUMP)
// 005d3e1c: POP EBP
//   Label: LAB_005d3e1c
// 005d3e1d: POP EDI
// 005d3e1e: POP ESI
// 005d3e1f: POP EBX
// 005d3e20: RET
// 005d3e21: PUSH EBX
//   Label: LAB_005d3e21
// 005d3e22: MOV EAX,dword ptr [EBX + 0x64]
// 005d3e25: CALL dword ptr [EAX + 0x48]
// 005d3e28: ADD ESP,0x4
// 005d3e2b: INC ESI
// 005d3e2c: MOV ECX,dword ptr [EBP + 0x8]
// 005d3e2f: ADD EBX,0x68
// 005d3e32: CMP ESI,ECX
// 005d3e34: JC 0x005d3e08
//   XREF to: 005d3e08 (CONDITIONAL_JUMP)
// 005d3e36: POP EBP
// 005d3e37: POP EDI
// 005d3e38: POP ESI
// 005d3e39: POP EBX
// 005d3e3a: RET
