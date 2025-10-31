// Name: engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
// Address: 005520a0
// Address Range: [[005520a0, 00552106]]
// Convention: __cdecl
// Signature: void engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0 (005fd4e0) at 005fd799 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553cee [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 00552746 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 005537a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < vertex_count) {
    do {
      iVar2 = (vertices->projected_vertex).transformed_z;
      if (iVar2 < 0x101) {
        iVar2 = 0x7fffffff;
      }
      else {
        iVar2 = (int)(0x7fffffff / (longlong)(iVar2 >> 4));
      }
      lVar1 = (longlong)iVar2 * (longlong)((int)vertices->u >> 8);
      vertices->u = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      lVar1 = (longlong)iVar2 * (longlong)((int)vertices->v >> 8);
      vertices->v = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      iVar3 = iVar3 + 1;
      (vertices->projected_vertex).transformed_z = iVar2;
      vertices = vertices + 1;
    } while (iVar3 < vertex_count);
  }
  return;
}


// Assembly code:
// 005520a0: PUSH EBX
//   Label: engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
// 005520a1: PUSH ESI
// 005520a2: PUSH EDI
// 005520a3: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005520a7: XOR ESI,ESI
// 005520a9: TEST EDI,EDI
// 005520ab: JLE 0x005520fc
//   XREF to: 005520fc (CONDITIONAL_JUMP)
// 005520ad: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005520b1: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_005520b1
// 005520b4: CMP EDX,0x100
// 005520ba: JLE 0x00552100
//   XREF to: 00552100 (CONDITIONAL_JUMP)
// 005520bc: MOV EAX,0x7fffffff
// 005520c1: MOV EBX,EDX
// 005520c3: MOV EDX,EAX
// 005520c5: SAR EBX,0x4
// 005520c8: SAR EDX,0x1f
// 005520cb: IDIV EBX
// 005520cd: MOV EBX,EAX
// 005520cf: MOV EDX,dword ptr [ECX + 0x18]
//   Label: LAB_005520cf
// 005520d2: MOV EAX,EBX
// 005520d4: SAR EDX,0x8
// 005520d7: IMUL EDX
// 005520d9: SHRD EAX,EDX,0x10
// 005520dd: MOV EDX,dword ptr [ECX + 0x1c]
// 005520e0: MOV dword ptr [ECX + 0x18],EAX
// 005520e3: SAR EDX,0x8
// 005520e6: MOV EAX,EBX
// 005520e8: ADD ECX,0x30
// 005520eb: IMUL EDX
// 005520ed: SHRD EAX,EDX,0x10
// 005520f1: MOV dword ptr [ECX + -0x14],EAX
// 005520f4: INC ESI
// 005520f5: MOV dword ptr [ECX + -0x28],EBX
// 005520f8: CMP ESI,EDI
// 005520fa: JL 0x005520b1
//   XREF to: 005520b1 (CONDITIONAL_JUMP)
// 005520fc: POP EDI
//   Label: LAB_005520fc
// 005520fd: POP ESI
// 005520fe: POP EBX
// 005520ff: RET
// 00552100: MOV EBX,0x7fffffff
//   Label: LAB_00552100
// 00552105: JMP 0x005520cf
//   XREF to: 005520cf (UNCONDITIONAL_JUMP)
