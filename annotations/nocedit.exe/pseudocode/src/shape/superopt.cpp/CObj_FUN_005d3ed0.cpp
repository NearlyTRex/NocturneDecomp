// Name: shape_superopt.cpp_CObj_FUN_005d3ed0
// Address: 005d3ed0
// Address Range: [[005d3ed0, 005d3f06]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_FUN_005d3ed0(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_FUN_005d3ed0(CObj *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x68;
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 0x50))();
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}


// Assembly code:
// 005d3ed0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d3ed0
// 005d3ed1: PUSH EDI
// 005d3ed2: PUSH EBP
// 005d3ed3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d3ed7: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d3edb: MOV EDX,dword ptr [EDI + 0x8]
// 005d3ede: XOR EBX,EBX
// 005d3ee0: TEST EDX,EDX
// 005d3ee2: JBE 0x005d3f03
//   XREF to: 005d3f03 (CONDITIONAL_JUMP)
// 005d3ee4: PUSH ESI
// 005d3ee5: XOR ESI,ESI
// 005d3ee7: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005d3ee7
// 005d3eea: PUSH EBP
// 005d3eeb: ADD EAX,ESI
// 005d3eed: PUSH EAX
// 005d3eee: MOV EDX,dword ptr [EAX + 0x64]
// 005d3ef1: INC EBX
// 005d3ef2: ADD ESI,0x68
// 005d3ef5: CALL dword ptr [EDX + 0x50]
// 005d3ef8: MOV ECX,dword ptr [EDI + 0x8]
// 005d3efb: ADD ESP,0x8
// 005d3efe: CMP EBX,ECX
// 005d3f00: JC 0x005d3ee7
//   XREF to: 005d3ee7 (CONDITIONAL_JUMP)
// 005d3f02: POP ESI
// 005d3f03: POP EBP
//   Label: LAB_005d3f03
// 005d3f04: POP EDI
// 005d3f05: POP EBX
// 005d3f06: RET
