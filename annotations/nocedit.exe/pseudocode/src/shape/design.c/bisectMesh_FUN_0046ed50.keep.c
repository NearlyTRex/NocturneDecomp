// Name: shape_design.c_bisectMesh_FUN_0046ed50
// Address: 0046ed50
// MANUAL RECONSTRUCTION
// Address Range: [[0046ed50, 0046f28b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_bisectMesh_FUN_0046ed50(void)

#include "nocturne.h"

void __cdecl shape_design_c_bisectMesh_FUN_0046ed50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  SShapeEditorPolygon *pSVar16;
  SShapeEditorPolygon *pSVar17;
  int local_18;
  float fVar7;
  float fVar6;
  float fVar5;
  float fVar4;
  float fVar11;
  float fVar10;
  float fVar9;
  float fVar8;
  uint uVar3;
  uint uVar2;
  uint uVar1;
  int iVar14;
  int iVar13;
  float fVar12;
  
  iVar13 = g_PolygonCount;
  for (local_18 = 0; local_18 < iVar13; local_18 = local_18 + 1) {
    pSVar16 = g_ModelPolygonData + local_18;
    if (g_ModelPolygonData[local_18].vertex_indices_count != 3) {
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 11692;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Not 3 faces");
    }
    iVar14 = g_PolygonCount;
    pSVar17 = g_ModelPolygonData + g_PolygonCount;
    uVar1 = g_ModelPolygonData[local_18].vertex_indices[0];
    uVar2 = g_ModelPolygonData[local_18].vertex_indices[1];
    uVar3 = g_ModelPolygonData[local_18].vertex_indices[2];
    fVar4 = g_LoadedVertices[uVar2].vertex.x - g_LoadedVertices[uVar1].vertex.x;
    fVar5 = g_LoadedVertices[uVar2].vertex.y - g_LoadedVertices[uVar1].vertex.y;
    fVar6 = g_LoadedVertices[uVar2].vertex.z - g_LoadedVertices[uVar1].vertex.z;
    fVar7 = g_LoadedVertices[uVar3].vertex.x - g_LoadedVertices[uVar2].vertex.x;
    fVar8 = g_LoadedVertices[uVar3].vertex.y - g_LoadedVertices[uVar2].vertex.y;
    fVar9 = g_LoadedVertices[uVar3].vertex.z - g_LoadedVertices[uVar2].vertex.z;
    fVar10 = g_LoadedVertices[uVar1].vertex.x - g_LoadedVertices[uVar3].vertex.x;
    fVar11 = g_LoadedVertices[uVar1].vertex.y - g_LoadedVertices[uVar3].vertex.y;
    fVar12 = g_LoadedVertices[uVar1].vertex.z - g_LoadedVertices[uVar3].vertex.z;
    fVar1 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar2 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar3 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    if ((fVar1 <= fVar2) || (fVar1 <= fVar3)) {
      if (fVar2 <= fVar3) {
        g_LoadedVertices[g_VertexCount].vertex.x =
             (g_LoadedVertices[uVar3].vertex.x + g_LoadedVertices[uVar1].vertex.x) *
             (float)0.5;
        g_LoadedVertices[g_VertexCount].vertex.y =
             (g_LoadedVertices[uVar3].vertex.y + g_LoadedVertices[uVar1].vertex.y) *
             (float)0.5;
        g_LoadedVertices[g_VertexCount].vertex.z =
             (g_LoadedVertices[uVar3].vertex.z + g_LoadedVertices[uVar1].vertex.z) *
             (float)0.5;
        fVar1 = (g_ModelPolygonData[local_18].uv_u[2] + g_ModelPolygonData[local_18].uv_u[0]) *
                (float)0.5;
        fVar2 = (g_ModelPolygonData[local_18].uv_v[2] + g_ModelPolygonData[local_18].uv_v[0]) *
                (float)0.5;
        *pSVar17 = *pSVar16;
        g_ModelPolygonData[local_18].vertex_indices[0] = g_VertexCount;
        g_ModelPolygonData[local_18].uv_u[0] = fVar1;
        g_ModelPolygonData[local_18].uv_v[0] = fVar2;
        g_ModelPolygonData[iVar14].vertex_indices[2] = g_VertexCount;
        g_ModelPolygonData[iVar14].uv_u[2] = fVar1;
        g_ModelPolygonData[iVar14].uv_v[2] = fVar2;
        g_VertexCount = g_VertexCount + 1;
        g_PolygonCount = g_PolygonCount + 1;
      }
      else {
        g_LoadedVertices[g_VertexCount].vertex.x =
             (g_LoadedVertices[uVar2].vertex.x + g_LoadedVertices[uVar3].vertex.x) *
             (float)0.5;
        g_LoadedVertices[g_VertexCount].vertex.y =
             (g_LoadedVertices[uVar2].vertex.y + g_LoadedVertices[uVar3].vertex.y) *
             (float)0.5;
        g_LoadedVertices[g_VertexCount].vertex.z =
             (g_LoadedVertices[uVar2].vertex.z + g_LoadedVertices[uVar3].vertex.z) *
             (float)0.5;
        fVar1 = (g_ModelPolygonData[local_18].uv_u[1] + g_ModelPolygonData[local_18].uv_u[2]) *
                (float)0.5;
        fVar2 = (g_ModelPolygonData[local_18].uv_v[1] + g_ModelPolygonData[local_18].uv_v[2]) *
                (float)0.5;
        *pSVar17 = *pSVar16;
        g_ModelPolygonData[local_18].vertex_indices[2] = g_VertexCount;
        g_ModelPolygonData[local_18].uv_u[2] = fVar1;
        g_ModelPolygonData[local_18].uv_v[2] = fVar2;
        g_ModelPolygonData[iVar14].vertex_indices[1] = g_VertexCount;
        g_ModelPolygonData[iVar14].uv_u[1] = fVar1;
        g_ModelPolygonData[iVar14].uv_v[1] = fVar2;
        g_VertexCount = g_VertexCount + 1;
        g_PolygonCount = g_PolygonCount + 1;
      }
    }
    else {
      g_LoadedVertices[g_VertexCount].vertex.x =
           (g_LoadedVertices[uVar1].vertex.x + g_LoadedVertices[uVar2].vertex.x) *
           (float)0.5;
      g_LoadedVertices[g_VertexCount].vertex.y =
           (g_LoadedVertices[uVar1].vertex.y + g_LoadedVertices[uVar2].vertex.y) *
           (float)0.5;
      g_LoadedVertices[g_VertexCount].vertex.z =
           (g_LoadedVertices[uVar1].vertex.z + g_LoadedVertices[uVar2].vertex.z) *
           (float)0.5;
      fVar1 = (g_ModelPolygonData[local_18].uv_u[0] + g_ModelPolygonData[local_18].uv_u[1]) *
              (float)0.5;
      fVar2 = (g_ModelPolygonData[local_18].uv_v[0] + g_ModelPolygonData[local_18].uv_v[1]) *
              (float)0.5;
      *pSVar17 = *pSVar16;
      g_ModelPolygonData[local_18].vertex_indices[1] = g_VertexCount;
      g_ModelPolygonData[local_18].uv_u[1] = fVar1;
      g_ModelPolygonData[local_18].uv_v[1] = fVar2;
      g_ModelPolygonData[iVar14].vertex_indices[0] = g_VertexCount;
      g_ModelPolygonData[iVar14].uv_u[0] = fVar1;
      g_ModelPolygonData[iVar14].uv_v[0] = fVar2;
      g_VertexCount = g_VertexCount + 1;
      g_PolygonCount = g_PolygonCount + 1;
    }
  }
  return;
}
