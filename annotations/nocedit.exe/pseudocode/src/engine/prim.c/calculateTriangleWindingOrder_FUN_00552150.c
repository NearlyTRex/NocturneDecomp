// Name: engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
// Address: 00552150
// Address Range: [[00552150, 00552200]]
// Convention: __cdecl
// Signature: int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
// Cross-references:
//   engine_3d.c_rasterizePolygon_FUN_005fd4e0 (005fd4e0) at 005fd743 [UNCONDITIONAL_CALL]
//   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 (005fcfc0) at 005fd281 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 00437d5c [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436804 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 004384ec [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d525 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 (004839f0) at 00483acd [UNCONDITIONAL_CALL]
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370 (00483370) at 00483451 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 (00553b10) at 00553c45 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 (00552a40) at 00552a8d [UNCONDITIONAL_CALL]
//   engine_prim.c_renderPolygonSoftware_FUN_00552510 (00552510) at 005526c0 [UNCONDITIONAL_CALL]
//   engine_prim.c_renderScanlinePolygon_FUN_00553470 (00553470) at 00553523 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e830 (0051e830) at 0051e8c5 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CullingMode

#include "nocturne.h"

int __cdecl
engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
          (SRenderVertex *v0,SRenderVertex *v1,SRenderVertex *v2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (g_CullingMode == 1) {
    local_24 = (v1->projected_vertex).screen_x - (v0->projected_vertex).screen_x;
    local_20 = (v1->projected_vertex).screen_y - (v0->projected_vertex).screen_y;
    local_1c = (v2->projected_vertex).screen_x - (v1->projected_vertex).screen_x;
    local_18 = (v2->projected_vertex).screen_y - (v1->projected_vertex).screen_y;
  }
  else {
    local_1c = (v1->projected_vertex).screen_x - (v0->projected_vertex).screen_x;
    local_18 = (v1->projected_vertex).screen_y - (v0->projected_vertex).screen_y;
    local_24 = (v2->projected_vertex).screen_x - (v1->projected_vertex).screen_x;
    local_20 = (v2->projected_vertex).screen_y - (v1->projected_vertex).screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar1 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar2 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0);
}


// Assembly code:
// 00552150: PUSH EBX
//   Label: engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
// 00552151: PUSH ESI
// 00552152: PUSH EDI
// 00552153: PUSH EBP
// 00552154: MOV EBP,ESP
// 00552156: SUB ESP,0x14
// 00552159: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055215c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055215f: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00552162: CMP dword ptr [0x00772a7c],0x1
//   XREF to: 00772a7c (READ)
// 00552169: JNZ 0x005521d3
//   XREF to: 005521d3 (CONDITIONAL_JUMP)
// 0055216b: MOV EDI,dword ptr [EBX + 0x10]
// 0055216e: MOV EDX,dword ptr [EAX + 0x10]
// 00552171: SUB EDX,EDI
// 00552173: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00552176: MOV EDX,dword ptr [EAX + 0x14]
// 00552179: MOV ESI,dword ptr [EBX + 0x14]
// 0055217c: SUB EDX,ESI
// 0055217e: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00552181: MOV EDX,dword ptr [ECX + 0x10]
// 00552184: MOV EDI,dword ptr [EAX + 0x10]
// 00552187: SUB EDX,EDI
// 00552189: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055218c: MOV EDX,dword ptr [ECX + 0x14]
// 0055218f: MOV ECX,dword ptr [EAX + 0x14]
// 00552192: SUB EDX,ECX
// 00552194: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00552197: MOV EAX,dword ptr [EBP + 0xffffffec]
//   Label: LAB_00552197
//   XREF to: Stack[-0x24] (READ)
// 0055219d: IMUL dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 005521a3: MOV EBX,EAX
// 005521a5: MOV ECX,EDX
// 005521a7: MOV EAX,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005521ad: IMUL dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005521b3: SUB EAX,EBX
// 005521b5: SBB EDX,ECX
// 005521b7: MOV EAX,0x0
// 005521bc: JGE 0x005521c3
//   XREF to: 005521c3 (CONDITIONAL_JUMP)
// 005521be: MOV EAX,0x1
// 005521c3: MOV dword ptr [EBP + 0xfffffffc],EAX
//   Label: LAB_005521c3
//   XREF to: Stack[-0x14] (WRITE)
// 005521c9: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005521cc: MOV ESP,EBP
// 005521ce: POP EBP
// 005521cf: POP EDI
// 005521d0: POP ESI
// 005521d1: POP EBX
// 005521d2: RET
// 005521d3: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_005521d3
// 005521d6: MOV EDX,dword ptr [EAX + 0x10]
// 005521d9: SUB EDX,ESI
// 005521db: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005521de: MOV EDX,dword ptr [EAX + 0x14]
// 005521e1: MOV EDI,dword ptr [EBX + 0x14]
// 005521e4: SUB EDX,EDI
// 005521e6: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005521e9: MOV EDX,dword ptr [ECX + 0x10]
// 005521ec: MOV EBX,dword ptr [EAX + 0x10]
// 005521ef: SUB EDX,EBX
// 005521f1: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005521f4: MOV EDX,dword ptr [ECX + 0x14]
// 005521f7: MOV ESI,dword ptr [EAX + 0x14]
// 005521fa: SUB EDX,ESI
// 005521fc: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005521ff: JMP 0x00552197
//   XREF to: 00552197 (UNCONDITIONAL_JUMP)
