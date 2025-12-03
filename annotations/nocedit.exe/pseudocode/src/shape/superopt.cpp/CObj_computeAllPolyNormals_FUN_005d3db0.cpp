// Name: shape_superopt.cpp_CObj_computeAllPolyNormals_FUN_005d3db0
// Address: 005d3db0
// Address Range: [[005d3db0, 005d3de3]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_computeAllPolyNormals_FUN_005d3db0(CObj * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_computeAllPolyNormals_FUN_005d3db0(CObj *this_ptr)

{
  CPoly *pCVar1;
  uint uVar2;
  
  pCVar1 = this_ptr->poly_array;
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar2 = uVar2 + 1;
      (*(code *)pCVar1->vtable->computeNormalMaybe2)();
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}


// Assembly code:
// 005d3db0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_computeAllPolyNormals_FUN_005d3db0
// 005d3db1: PUSH ESI
// 005d3db2: PUSH EDI
// 005d3db3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d3db7: MOV EDX,dword ptr [EDI + 0x8]
// 005d3dba: MOV EBX,dword ptr [EDI + 0xc]
// 005d3dbd: XOR ESI,ESI
// 005d3dbf: TEST EDX,EDX
// 005d3dc1: JBE 0x005d3de0
//   XREF to: 005d3de0 (CONDITIONAL_JUMP)
// 005d3dc3: PUSH EBX
//   Label: LAB_005d3dc3
// 005d3dc4: MOV EAX,dword ptr [EBX + 0x64]
// 005d3dc7: INC ESI
// 005d3dc8: CALL dword ptr [EAX + 0x48]
// 005d3dcb: ADD ESP,0x4
// 005d3dce: MOV ECX,dword ptr [EDI + 0x8]
// 005d3dd1: ADD EBX,0x68
// 005d3dd4: CMP ESI,ECX
// 005d3dd6: JC 0x005d3dc3
//   XREF to: 005d3dc3 (CONDITIONAL_JUMP)
// 005d3dd8: LEA EAX,[EAX]
// 005d3dde: MOV EDX,EDX
// 005d3de0: POP EDI
//   Label: LAB_005d3de0
// 005d3de1: POP ESI
// 005d3de2: POP EBX
// 005d3de3: RET
