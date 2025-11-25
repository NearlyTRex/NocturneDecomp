// Name: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
// Address: 0051bcc0
// Address Range: [[0051bcc0, 0051bd21]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d09f [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_ptr->submesh_count = 0;
  iVar4 = 0;
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      *(undefined4 *)((int)this_ptr->tri_data->attribute_indices + iVar3) = 0xffffffff;
      iVar1 = 0;
      do {
        *(undefined4 *)((int)this_ptr->tri_data->uv_coords[0] + iVar1 + iVar3) = 0;
        iVar2 = iVar1 + 8;
        *(undefined4 *)((int)this_ptr->tri_data->uv_coords[0] + iVar3 + iVar1 + 4) = 0;
        iVar1 = iVar2;
      } while (iVar2 != 0x18);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x8c;
    } while (iVar4 < this_ptr->tri_count);
  }
  this_ptr->attribute_enabled_flags[0] = 0;
  return;
}


// Assembly code:
// 0051bcc0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
// 0051bcc1: PUSH ESI
// 0051bcc2: PUSH EDI
// 0051bcc3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0051bcc7: MOV ECX,dword ptr [EDX + 0x8]
// 0051bcca: MOV dword ptr [EDX + 0x10],0x0
// 0051bcd1: XOR EDI,EDI
// 0051bcd3: TEST ECX,ECX
// 0051bcd5: JLE 0x0051bd17
//   XREF to: 0051bd17 (CONDITIONAL_JUMP)
// 0051bcd7: XOR ESI,ESI
// 0051bcd9: MOV EAX,dword ptr [EDX + 0xc]
//   Label: LAB_0051bcd9
// 0051bcdc: MOV ECX,ESI
// 0051bcde: MOV dword ptr [ESI + EAX*0x1],0xffffffff
// 0051bce5: XOR EAX,EAX
// 0051bce7: MOV EBX,dword ptr [EDX + 0xc]
//   Label: LAB_0051bce7
// 0051bcea: ADD EBX,ECX
// 0051bcec: MOV dword ptr [EBX + EAX*0x1 + 0x1c],0x0
// 0051bcf4: MOV EBX,dword ptr [EDX + 0xc]
// 0051bcf7: ADD EAX,0x8
// 0051bcfa: ADD EBX,ECX
// 0051bcfc: MOV dword ptr [EBX + EAX*0x1 + 0x18],0x0
// 0051bd04: CMP EAX,0x18
// 0051bd07: JNZ 0x0051bce7
//   XREF to: 0051bce7 (CONDITIONAL_JUMP)
// 0051bd09: INC EDI
// 0051bd0a: MOV EBX,dword ptr [EDX + 0x8]
// 0051bd0d: ADD ESI,0x8c
// 0051bd13: CMP EDI,EBX
// 0051bd15: JL 0x0051bcd9
//   XREF to: 0051bcd9 (CONDITIONAL_JUMP)
// 0051bd17: MOV dword ptr [EDX + 0x24],0x0
//   Label: LAB_0051bd17
// 0051bd1e: POP EDI
// 0051bd1f: POP ESI
// 0051bd20: POP EBX
// 0051bd21: RET
