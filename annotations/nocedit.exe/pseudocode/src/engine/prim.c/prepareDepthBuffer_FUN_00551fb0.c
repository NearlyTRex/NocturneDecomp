// Name: engine_prim.c_prepareDepthBuffer_FUN_00551fb0
// Address: 00551fb0
// Address Range: [[00551fb0, 0055201d]]
// Convention: __cdecl
// Signature: void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 004082d1 [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0 (005fd4e0) at 005fd76b [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 (005fcfc0) at 005fd2d0 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 (004839f0) at 00483b0a [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553c82 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 00552718 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 00553773 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ProcessorType

#include "nocturne.h"

void __cdecl engine_prim_c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  int iVar2;
  
  if (g_ProcessorType == 0) {
    iVar2 = 0;
    if (0 < vertex_count) {
      do {
        while ((vertices->projected_vertex).transformed_z >> 4 == 0) {
          (vertices->projected_vertex).transformed_z = 0x7fffffff;
          iVar2 = iVar2 + 1;
          vertices = vertices + 1;
          if (vertex_count <= iVar2) {
            return;
          }
        }
        (vertices->projected_vertex).transformed_z = (vertices->projected_vertex).inv_z;
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
      } while (iVar2 < vertex_count);
    }
  }
  else {
    iVar2 = 0;
    if (0 < vertex_count) {
      do {
        iVar1 = (vertices->projected_vertex).transformed_z;
        if (iVar1 == 0) {
          (vertices->projected_vertex).transformed_z = 0x7fffffff;
        }
        else {
          (vertices->projected_vertex).transformed_z = 0x7fffffff - iVar1;
        }
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
      } while (iVar2 < vertex_count);
    }
  }
  return;
}


// Assembly code:
// 00551fb0: PUSH EBX
//   Label: engine_prim.c_prepareDepthBuffer_FUN_00551fb0
// 00551fb1: PUSH ESI
// 00551fb2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00551fb6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00551fba: MOV EDX,dword ptr [0x02d0529c]
//   XREF to: 02d0529c (READ)
// 00551fc0: TEST EDX,EDX
// 00551fc2: JZ 0x00551fef
//   XREF to: 00551fef (CONDITIONAL_JUMP)
// 00551fc4: XOR EDX,EDX
// 00551fc6: TEST EBX,EBX
// 00551fc8: JLE 0x00551fe0
//   XREF to: 00551fe0 (CONDITIONAL_JUMP)
// 00551fca: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_00551fca
// 00551fcd: TEST ECX,ECX
// 00551fcf: JNZ 0x00551fe3
//   XREF to: 00551fe3 (CONDITIONAL_JUMP)
// 00551fd1: MOV dword ptr [EAX + 0x8],0x7fffffff
// 00551fd8: INC EDX
//   Label: LAB_00551fd8
// 00551fd9: ADD EAX,0x30
// 00551fdc: CMP EDX,EBX
// 00551fde: JL 0x00551fca
//   XREF to: 00551fca (CONDITIONAL_JUMP)
// 00551fe0: POP ESI
//   Label: LAB_00551fe0
// 00551fe1: POP EBX
// 00551fe2: RET
// 00551fe3: MOV ESI,0x7fffffff
//   Label: LAB_00551fe3
// 00551fe8: SUB ESI,ECX
// 00551fea: MOV dword ptr [EAX + 0x8],ESI
// 00551fed: JMP 0x00551fd8
//   XREF to: 00551fd8 (UNCONDITIONAL_JUMP)
// 00551fef: TEST EBX,EBX
//   Label: LAB_00551fef
// 00551ff1: JLE 0x00551fe0
//   XREF to: 00551fe0 (CONDITIONAL_JUMP)
// 00551ff3: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_00551ff3
// 00551ff6: SAR ECX,0x4
// 00551ff9: TEST ECX,ECX
// 00551ffb: JNZ 0x0055200e
//   XREF to: 0055200e (CONDITIONAL_JUMP)
// 00551ffd: MOV dword ptr [EAX + 0x8],0x7fffffff
// 00552004: INC EDX
// 00552005: ADD EAX,0x30
// 00552008: CMP EDX,EBX
// 0055200a: JGE 0x00551fe0
//   XREF to: 00551fe0 (CONDITIONAL_JUMP)
// 0055200c: JMP 0x00551ff3
//   XREF to: 00551ff3 (UNCONDITIONAL_JUMP)
// 0055200e: MOV ECX,dword ptr [EAX + 0xc]
//   Label: LAB_0055200e
// 00552011: MOV dword ptr [EAX + 0x8],ECX
// 00552014: INC EDX
// 00552015: ADD EAX,0x30
// 00552018: CMP EDX,EBX
// 0055201a: JGE 0x00551fe0
//   XREF to: 00551fe0 (CONDITIONAL_JUMP)
// 0055201c: JMP 0x00551ff3
//   XREF to: 00551ff3 (UNCONDITIONAL_JUMP)
