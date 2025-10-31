// Name: engine_prim.c_replaceWWithDepth_FUN_00552110
// Address: 00552110
// Address Range: [[00552110, 00552146]]
// Convention: __cdecl
// Signature: void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   core_course.cpp_FUN_004436d0 (004436d0) at 00443732 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443760 (00443760) at 00443b8d [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cc300 (004cc300) at 004cc6b0 [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0 (005fd4e0) at 005fd7c7 [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 (005fcfc0) at 005fd2e7 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cda2 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 (0048dc50) at 0048dc99 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 (004839f0) at 00483d67 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553d4f [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 00552774 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 005537cf [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_prim_c_replaceWWithDepth_FUN_00552110(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < vertex_count) {
    do {
      while ((vertices->projected_vertex).transformed_z != 0) {
        (vertices->projected_vertex).transformed_z = (vertices->projected_vertex).inv_z;
        iVar1 = iVar1 + 1;
        vertices = vertices + 1;
        if (vertex_count <= iVar1) {
          return;
        }
      }
      (vertices->projected_vertex).transformed_z = 0x7fffffff;
      iVar1 = iVar1 + 1;
      vertices = vertices + 1;
    } while (iVar1 < vertex_count);
  }
  return;
}


// Assembly code:
// 00552110: PUSH EBX
//   Label: engine_prim.c_replaceWWithDepth_FUN_00552110
// 00552111: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00552115: XOR EDX,EDX
// 00552117: TEST EBX,EBX
// 00552119: JLE 0x00552135
//   XREF to: 00552135 (CONDITIONAL_JUMP)
// 0055211b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0055211f: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_0055211f
// 00552122: TEST ECX,ECX
// 00552124: JNZ 0x00552137
//   XREF to: 00552137 (CONDITIONAL_JUMP)
// 00552126: MOV dword ptr [EAX + 0x8],0x7fffffff
// 0055212d: INC EDX
// 0055212e: ADD EAX,0x30
// 00552131: CMP EDX,EBX
// 00552133: JL 0x0055211f
//   XREF to: 0055211f (CONDITIONAL_JUMP)
// 00552135: POP EBX
//   Label: LAB_00552135
// 00552136: RET
// 00552137: MOV ECX,dword ptr [EAX + 0xc]
//   Label: LAB_00552137
// 0055213a: MOV dword ptr [EAX + 0x8],ECX
// 0055213d: INC EDX
// 0055213e: ADD EAX,0x30
// 00552141: CMP EDX,EBX
// 00552143: JL 0x0055211f
//   XREF to: 0055211f (CONDITIONAL_JUMP)
// 00552145: POP EBX
// 00552146: RET
