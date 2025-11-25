// Name: shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
// Address: 00516570
// Address Range: [[00516570, 005165bf]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh * this_ptr, CVector3f * offset)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051baa6 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 (00516e10) at 00516ebd [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh *this_ptr,CVector3f *offset)

{
  CLodVert *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      pCVar1 = this_ptr->vertex_data;
      *(float *)(pCVar1->lod_workspace + iVar2 + -0x10) =
           offset->x + *(float *)(pCVar1->lod_workspace + iVar2 + -0x10);
      *(float *)(pCVar1->lod_workspace + iVar2 + -0xc) =
           offset->y + *(float *)(pCVar1->lod_workspace + iVar2 + -0xc);
      iVar3 = iVar3 + 1;
      *(float *)(pCVar1->lod_workspace + iVar2 + -8) =
           offset->z + *(float *)(pCVar1->lod_workspace + iVar2 + -8);
      iVar2 = iVar2 + 0x4c4;
    } while (iVar3 < this_ptr->vertex_count);
  }
  shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(this_ptr);
  return;
}


// Assembly code:
// 00516570: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
// 00516571: PUSH ESI
// 00516572: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00516576: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051657a: MOV ECX,dword ptr [ESI]
// 0051657c: XOR EDX,EDX
// 0051657e: TEST ECX,ECX
// 00516580: JLE 0x005165b4
//   XREF to: 005165b4 (CONDITIONAL_JUMP)
// 00516582: PUSH EDI
// 00516583: XOR ECX,ECX
// 00516585: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_00516585
// 00516588: FLD float ptr [EBX]
// 0051658a: FADD float ptr [ECX + EAX*0x1]
// 0051658d: FSTP float ptr [ECX + EAX*0x1]
// 00516590: FLD float ptr [EBX + 0x4]
// 00516593: FADD float ptr [ECX + EAX*0x1 + 0x4]
// 00516597: FSTP float ptr [ECX + EAX*0x1 + 0x4]
// 0051659b: FLD float ptr [EBX + 0x8]
// 0051659e: FADD float ptr [ECX + EAX*0x1 + 0x8]
// 005165a2: INC EDX
// 005165a3: FSTP float ptr [ECX + EAX*0x1 + 0x8]
// 005165a7: MOV EDI,dword ptr [ESI]
// 005165a9: ADD ECX,0x4c4
// 005165af: CMP EDX,EDI
// 005165b1: JL 0x00516585
//   XREF to: 00516585 (CONDITIONAL_JUMP)
// 005165b3: POP EDI
// 005165b4: PUSH ESI
//   Label: LAB_005165b4
// 005165b5: CALL shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
//   XREF to: 005197c0 (UNCONDITIONAL_CALL)
// 005165ba: ADD ESP,0x4
// 005165bd: POP ESI
// 005165be: POP EBX
// 005165bf: RET
