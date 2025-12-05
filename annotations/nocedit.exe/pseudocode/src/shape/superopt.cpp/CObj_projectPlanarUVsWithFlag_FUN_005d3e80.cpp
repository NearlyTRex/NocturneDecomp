// Name: shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
// Address: 005d3e80
// Address Range: [[005d3e80, 005d3ecf]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80(CObj * this_ptr, CVector2d * uv_scale, uint flag_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
          (CObj *this_ptr,CVector2d *uv_scale,uint flag_mask)

{
  CPoly *this_ptr_00;
  uint uVar1;
  
  this_ptr_00 = this_ptr->poly_array;
  uVar1 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      while ((this_ptr_00->flags & flag_mask) == flag_mask) {
        (*this_ptr_00->vtable->projectUVPlanar)(this_ptr_00,uv_scale);
        uVar1 = uVar1 + 1;
        this_ptr_00 = this_ptr_00 + 1;
        if ((uint)this_ptr->poly_count <= uVar1) {
          return;
        }
      }
      uVar1 = uVar1 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar1 < (uint)this_ptr->poly_count);
  }
  return;
}


// Assembly code:
// 005d3e80: PUSH EBX
//   Label: shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
// 005d3e81: PUSH ESI
// 005d3e82: PUSH EDI
// 005d3e83: PUSH EBP
// 005d3e84: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3e88: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3e8c: MOV EDX,dword ptr [EBP + 0x8]
// 005d3e8f: MOV EBX,dword ptr [EBP + 0xc]
// 005d3e92: XOR ESI,ESI
// 005d3e94: TEST EDX,EDX
// 005d3e96: JBE 0x005d3eac
//   XREF to: 005d3eac (CONDITIONAL_JUMP)
// 005d3e98: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_005d3e98
// 005d3e9b: AND EAX,EDI
// 005d3e9d: CMP EAX,EDI
// 005d3e9f: JZ 0x005d3eb1
//   XREF to: 005d3eb1 (CONDITIONAL_JUMP)
// 005d3ea1: INC ESI
// 005d3ea2: MOV ECX,dword ptr [EBP + 0x8]
// 005d3ea5: ADD EBX,0x68
// 005d3ea8: CMP ESI,ECX
// 005d3eaa: JC 0x005d3e98
//   XREF to: 005d3e98 (CONDITIONAL_JUMP)
// 005d3eac: POP EBP
//   Label: LAB_005d3eac
// 005d3ead: POP EDI
// 005d3eae: POP ESI
// 005d3eaf: POP EBX
// 005d3eb0: RET
// 005d3eb1: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005d3eb1
//   XREF to: Stack[0x8] (READ)
// 005d3eb5: PUSH EDX
// 005d3eb6: MOV EAX,dword ptr [EBX + 0x64]
// 005d3eb9: PUSH EBX
// 005d3eba: CALL dword ptr [EAX + 0x4c]
// 005d3ebd: ADD ESP,0x8
// 005d3ec0: INC ESI
// 005d3ec1: MOV ECX,dword ptr [EBP + 0x8]
// 005d3ec4: ADD EBX,0x68
// 005d3ec7: CMP ESI,ECX
// 005d3ec9: JC 0x005d3e98
//   XREF to: 005d3e98 (CONDITIONAL_JUMP)
// 005d3ecb: POP EBP
// 005d3ecc: POP EDI
// 005d3ecd: POP ESI
// 005d3ece: POP EBX
// 005d3ecf: RET
