// Name: shape_design.c_calculatePolygonNormal_FUN_0045caa0
// Address: 0045caa0
// Address Range: [[0045caa0, 0045cc7a]]
// Convention: __cdecl
// Signature: void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
// Cross-references:
//   shape_design.c_calculateVertexNormals_FUN_0045be40 (0045be40) at 0045be75 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 0046190d [UNCONDITIONAL_CALL]
//   shape_design.c_createPolygonFromVertexList_FUN_0045cc80 (0045cc80) at 0045cde2 [UNCONDITIONAL_CALL]
//   shape_design.c_createQuadPolygon_FUN_0045df60 (0045df60) at 0045e02d [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045b074 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004583cb [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 0046354f [UNCONDITIONAL_CALL]
//   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 (00462190) at 00462888 [UNCONDITIONAL_CALL]
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045ce91 [UNCONDITIONAL_CALL]
//   shape_design.c_writePolygonModel_FUN_0045a320 (0045a320) at 0045a33b [UNCONDITIONAL_CALL]
// Globals:
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z

#include "nocturne.h"

void __cdecl shape_design_c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon *polygon)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_28;
  
  dVar4 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.x -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.x);
  dVar5 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.y -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.y);
  dVar6 = (double)(g_LoadedVertices[polygon->vertex_indices[1]].vertex.z -
                  g_LoadedVertices[polygon->vertex_indices[0]].vertex.z);
  dVar7 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.x -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.x);
  dVar8 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.y -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.y);
  dVar9 = (double)(g_LoadedVertices[polygon->vertex_indices[2]].vertex.z -
                  g_LoadedVertices[polygon->vertex_indices[1]].vertex.z);
  dVar10 = dVar5 * dVar9 - dVar8 * dVar6;
  dVar6 = dVar7 * dVar6 - dVar4 * dVar9;
  dVar4 = dVar4 * dVar8 - dVar7 * dVar5;
  local_28 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar10 * dVar10);
  if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) && (local_28._0_4_ == 0)) {
    local_28 = 1.0;
  }
  fVar1 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.y;
  fVar2 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.x;
  fVar3 = g_LoadedVertices[polygon->vertex_indices[0]].vertex.z;
  (polygon->normal).x = (float)(dVar10 / local_28);
  (polygon->normal).y = (float)(dVar6 / local_28);
  (polygon->normal).z = (float)(dVar4 / local_28);
  polygon->plane_distance =
       fVar3 * (float)(dVar4 / local_28) +
       fVar2 * (float)(dVar10 / local_28) + fVar1 * (float)(dVar6 / local_28);
  return;
}


// Assembly code:
// 0045caa0: PUSH EBX
//   Label: shape_design.c_calculatePolygonNormal_FUN_0045caa0
// 0045caa1: PUSH ESI
// 0045caa2: PUSH EDI
// 0045caa3: PUSH EBP
// 0045caa4: MOV EBP,ESP
// 0045caa6: SUB ESP,0x58
// 0045caac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045caaf: IMUL EDX,dword ptr [EAX + 0xbc],0x14
// 0045cab6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cab9: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cac0: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045cac6: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045cacc: FSTP double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 0045cacf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cad2: IMUL EDX,dword ptr [EAX + 0xbc],0x14
// 0045cad9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cadc: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cae3: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045cae9: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045caef: FSTP double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 0045caf2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045caf5: IMUL EDX,dword ptr [EAX + 0xbc],0x14
// 0045cafc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045caff: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cb06: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045cb0c: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045cb12: FSTP double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0045cb15: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb18: IMUL EDX,dword ptr [EAX + 0xc0],0x14
// 0045cb1f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb22: IMUL EAX,dword ptr [EAX + 0xbc],0x14
// 0045cb29: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045cb2f: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045cb35: FSTP double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0045cb38: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb3b: IMUL EDX,dword ptr [EAX + 0xc0],0x14
// 0045cb42: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb45: IMUL EAX,dword ptr [EAX + 0xbc],0x14
// 0045cb4c: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045cb52: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045cb58: FSTP double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0045cb5b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb5e: IMUL EDX,dword ptr [EAX + 0xc0],0x14
// 0045cb65: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cb68: IMUL EAX,dword ptr [EAX + 0xbc],0x14
// 0045cb6f: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045cb75: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045cb7b: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0045cb7e: FLD double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045cb81: FMUL double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045cb84: FLD double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045cb87: FMUL double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045cb8a: FSUBP
// 0045cb8c: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045cb8f: FLD double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045cb92: FMUL double ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0045cb95: FLD double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0045cb98: FMUL double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045cb9b: FSUBP
// 0045cb9d: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045cba0: FLD double ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0045cba3: FMUL double ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0045cba6: FLD double ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0045cba9: FMUL double ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 0045cbac: FSUBP
// 0045cbae: FSTP double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0045cbb1: FLD double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045cbb4: FMUL double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045cbb7: FLD double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cbba: FMUL double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cbbd: FADDP
// 0045cbbf: FLD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045cbc2: FMUL double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045cbc5: FADDP
// 0045cbc7: FSQRT
// 0045cbc9: FSTP double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0045cbcc: TEST dword ptr [EBP + -0x14],0x7fffffff
//   XREF to: Stack[-0x24] (READ)
// 0045cbd3: JNZ 0x0045cbe9
//   XREF to: 0045cbe9 (CONDITIONAL_JUMP)
// 0045cbd5: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 0045cbd9: JNZ 0x0045cbe9
//   XREF to: 0045cbe9 (CONDITIONAL_JUMP)
// 0045cbdb: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0045cbe2: MOV dword ptr [EBP + -0x14],0x3ff00000
//   XREF to: Stack[-0x24] (WRITE)
// 0045cbe9: FLD double ptr [EBP + -0x10]
//   Label: LAB_0045cbe9
//   XREF to: Stack[-0x20] (READ)
// 0045cbec: FDIV double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045cbef: FSTP double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045cbf2: FLD double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cbf5: FDIV double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045cbf8: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045cbfb: FLD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045cbfe: FDIV double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045cc01: FSTP double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0045cc04: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc07: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cc0e: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045cc14: FMUL double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cc17: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc1a: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cc21: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045cc27: FMUL double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045cc2a: FADDP
// 0045cc2c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc2f: IMUL EAX,dword ptr [EAX + 0xb8],0x14
// 0045cc36: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045cc3c: FMUL double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045cc3f: FADDP
// 0045cc41: FSTP double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0045cc44: FLD double ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045cc47: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc4a: FSTP float ptr [EAX + 0xa8]
// 0045cc50: FLD double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045cc53: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc56: FSTP float ptr [EAX + 0xac]
// 0045cc5c: FLD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0045cc5f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc62: FSTP float ptr [EAX + 0xb0]
// 0045cc68: FLD double ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0045cc6b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045cc6e: FSTP float ptr [EAX + 0xb4]
// 0045cc74: MOV ESP,EBP
// 0045cc76: POP EBP
// 0045cc77: POP EDI
// 0045cc78: POP ESI
// 0045cc79: POP EBX
// 0045cc7a: RET
