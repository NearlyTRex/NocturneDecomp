// Name: engine_prim.c_normalizeTextureCoords_FUN_00552020
// Address: 00552020
// Address Range: [[00552020, 0055209e]]
// Convention: __cdecl
// Signature: void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0 (005fd4e0) at 005fd782 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553cb0 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 0055272f [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 0055378a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_01000000

#include "nocturne.h"

void __cdecl
engine_prim_c_normalizeTextureCoords_FUN_00552020(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  
  iVar4 = 0x7fffffff;
  iVar2 = 0;
  pSVar3 = vertices;
  if (0 < vertex_count) {
    do {
      iVar1 = (pSVar3->projected_vertex).transformed_z;
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < vertex_count);
  }
  iVar2 = 0;
  if (0 < vertex_count) {
    do {
      while (iVar1 = (vertices->projected_vertex).transformed_z, iVar1 != 0) {
        vertices->u = (float)(((longlong)(int)vertices->u * (longlong)iVar4) / (longlong)iVar1);
        iVar1 = (vertices->projected_vertex).transformed_z;
        vertices->v = (float)(((longlong)(int)vertices->v * (longlong)iVar4) /
                             (longlong)(vertices->projected_vertex).transformed_z);
        (vertices->projected_vertex).transformed_z =
             (int)(((longlong)iVar4 * 0x1000000) / (longlong)iVar1);
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
        if (vertex_count <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      vertices = vertices + 1;
    } while (iVar2 < vertex_count);
  }
  return;
}


// Assembly code:
// 00552020: PUSH EBX
//   Label: engine_prim.c_normalizeTextureCoords_FUN_00552020
// 00552021: PUSH ESI
// 00552022: PUSH EDI
// 00552023: PUSH EBP
// 00552024: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00552028: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055202c: MOV ESI,0x7fffffff
// 00552031: XOR EAX,EAX
// 00552033: TEST EBP,EBP
// 00552035: JLE 0x0055204a
//   XREF to: 0055204a (CONDITIONAL_JUMP)
// 00552037: MOV ECX,EBX
// 00552039: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_00552039
// 0055203c: CMP ESI,EDX
// 0055203e: JLE 0x00552042
//   XREF to: 00552042 (CONDITIONAL_JUMP)
// 00552040: MOV ESI,EDX
// 00552042: INC EAX
//   Label: LAB_00552042
// 00552043: ADD ECX,0x30
// 00552046: CMP EAX,EBP
// 00552048: JL 0x00552039
//   XREF to: 00552039 (CONDITIONAL_JUMP)
// 0055204a: XOR EDI,EDI
//   Label: LAB_0055204a
// 0055204c: TEST EBP,EBP
// 0055204e: JLE 0x00552061
//   XREF to: 00552061 (CONDITIONAL_JUMP)
// 00552050: MOV ECX,EBX
// 00552052: MOV EBX,dword ptr [ECX + 0x8]
//   Label: LAB_00552052
// 00552055: TEST EBX,EBX
// 00552057: JNZ 0x00552066
//   XREF to: 00552066 (CONDITIONAL_JUMP)
// 00552059: INC EDI
// 0055205a: ADD ECX,0x30
// 0055205d: CMP EDI,EBP
// 0055205f: JL 0x00552052
//   XREF to: 00552052 (CONDITIONAL_JUMP)
// 00552061: POP EBP
//   Label: LAB_00552061
// 00552062: POP EDI
// 00552063: POP ESI
// 00552064: POP EBX
// 00552065: RET
// 00552066: MOV EDX,ESI
//   Label: LAB_00552066
// 00552068: MOV EAX,dword ptr [ECX + 0x18]
// 0055206b: IMUL EDX
// 0055206d: IDIV EBX
// 0055206f: MOV dword ptr [ECX + 0x18],EAX
// 00552072: MOV EDX,ESI
// 00552074: MOV EBX,dword ptr [ECX + 0x8]
// 00552077: MOV EAX,dword ptr [ECX + 0x1c]
// 0055207a: IMUL EDX
// 0055207c: IDIV EBX
// 0055207e: MOV EDX,0x1000000
//   XREF to: 01000000 (DATA)
// 00552083: MOV EBX,dword ptr [ECX + 0x8]
// 00552086: MOV dword ptr [ECX + 0x1c],EAX
// 00552089: MOV EAX,ESI
// 0055208b: IMUL EDX
// 0055208d: IDIV EBX
// 0055208f: MOV dword ptr [ECX + 0x8],EAX
// 00552092: INC EDI
// 00552093: ADD ECX,0x30
// 00552096: CMP EDI,EBP
// 00552098: JL 0x00552052
//   XREF to: 00552052 (CONDITIONAL_JUMP)
// 0055209a: POP EBP
// 0055209b: POP EDI
// 0055209c: POP ESI
// 0055209d: POP EBX
// 0055209e: RET
