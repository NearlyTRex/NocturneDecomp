// Name: shape_superopt.cpp_CObj_generateAllPlanarUVs_FUN_005d3e40
// Address: 005d3e40
// Address Range: [[005d3e40, 005d3e76]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_generateAllPlanarUVs_FUN_005d3e40(CObj * this_ptr, CVector2d * uv_scale)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_generateAllPlanarUVs_FUN_005d3e40(CObj *this_ptr,CVector2d *uv_scale)

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
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 0x4c))();
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}


// Assembly code:
// 005d3e40: PUSH EBX
//   Label: shape_superopt.cpp_CObj_generateAllPlanarUVs_FUN_005d3e40
// 005d3e41: PUSH EDI
// 005d3e42: PUSH EBP
// 005d3e43: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d3e47: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d3e4b: MOV EDX,dword ptr [EDI + 0x8]
// 005d3e4e: XOR EBX,EBX
// 005d3e50: TEST EDX,EDX
// 005d3e52: JBE 0x005d3e73
//   XREF to: 005d3e73 (CONDITIONAL_JUMP)
// 005d3e54: PUSH ESI
// 005d3e55: XOR ESI,ESI
// 005d3e57: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005d3e57
// 005d3e5a: PUSH EBP
// 005d3e5b: ADD EAX,ESI
// 005d3e5d: PUSH EAX
// 005d3e5e: MOV EDX,dword ptr [EAX + 0x64]
// 005d3e61: INC EBX
// 005d3e62: ADD ESI,0x68
// 005d3e65: CALL dword ptr [EDX + 0x4c]
// 005d3e68: MOV ECX,dword ptr [EDI + 0x8]
// 005d3e6b: ADD ESP,0x8
// 005d3e6e: CMP EBX,ECX
// 005d3e70: JC 0x005d3e57
//   XREF to: 005d3e57 (CONDITIONAL_JUMP)
// 005d3e72: POP ESI
// 005d3e73: POP EBP
//   Label: LAB_005d3e73
// 005d3e74: POP EDI
// 005d3e75: POP EBX
// 005d3e76: RET
