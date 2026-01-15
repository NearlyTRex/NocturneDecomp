// Name: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
// Address: 00462190
// Address Range: [[00462190, 00462b67]]
// Convention: __cdecl
// Signature: uint shape_design.c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index, int second_polygon_index)

#include "nocturne.h"

uint __cdecl
shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index,int second_polygon_index)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  SShapeEditorPolygon *pSVar5;
  SShapeEditorPolygon *pSVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_fffffe0c;
  SShapeEditorPolygon local_1e8;
  float local_64 [4];
  float local_54;
  float local_50 [4];
  float local_40;
  uint local_3c [4];
  uint local_2c;
  uint local_28 [6];
  
  bVar7 = 0;
  local_28[2] = 0;
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    for (local_28[4] = 0; (int)local_28[4] < 3; local_28[4] = local_28[4] + 1) {
      if (g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] ==
          g_ModelPolygonData[second_polygon_index].vertex_indices[local_28[4]]) {
        local_28[local_28[2]] = g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]];
        uVar4 = local_28[2];
        local_28[2] = local_28[2] + 1;
        if (2 < (int)local_28[2]) {
          return uVar4;
        }
      }
    }
  }
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    local_3c[local_28[3]] = g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]];
    local_64[local_28[3]] = g_ModelPolygonData[first_polygon_index].uv_u[local_28[3]];
    local_50[local_28[3]] = g_ModelPolygonData[first_polygon_index].uv_v[local_28[3]];
  }
  for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
    local_28[4] = g_ModelPolygonData[second_polygon_index].vertex_indices[local_28[3]];
    if ((local_28[4] != local_28[0]) && (local_28[4] != local_28[1])) {
      local_3c[3] = local_28[4];
      local_64[3] = g_ModelPolygonData[second_polygon_index].uv_u[local_28[3]];
      local_50[3] = g_ModelPolygonData[second_polygon_index].uv_v[local_28[3]];
    }
  }
  local_28[3] = 0;
  do {
    if (3 < (int)local_28[3]) {
LAB_004623f2:
      local_1e8.vertex_indices_count = 4;
      for (local_28[3] = 0; (int)local_28[3] < 4; local_28[3] = local_28[3] + 1) {
        local_1e8.vertex_indices[local_28[3]] = local_3c[local_28[3]];
      }
      dVar9 = shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(&local_1e8);
      uVar4 = CONCAT22 /* combine 2-byte values */((short)((ulonglong)dVar9 >> 0x10),
                       (ushort)(dVar9 < 359.5) << 8 |
                       (ushort)(NAN(dVar9) || NAN(359.5)) << 10 |
                       (ushort)(dVar9 == 359.5) << 0xe);
      if (dVar9 >= 359.5) {
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + first_polygon_index)
        ;
        g_ModelPolygonData[first_polygon_index].vertex_indices_count = 4;
        for (local_28[3] = 0;
            (int)local_28[3] < (int)g_ModelPolygonData[first_polygon_index].vertex_indices_count;
            local_28[3] = local_28[3] + 1) {
          g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
               local_3c[local_28[3]];
          g_ModelPolygonData[first_polygon_index].uv_u[local_28[3]] = local_64[local_28[3]];
          g_ModelPolygonData[first_polygon_index].uv_v[local_28[3]] = local_50[local_28[3]];
        }
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(&local_1e8);
        if (((ABS(local_1e8.normal.x) == 0.0) && (ABS(local_1e8.normal.y) == 0.0)) &&
           (ABS(local_1e8.normal.z) == 0.0)) {
          local_3c[1] = local_3c[2];
          local_64[1] = local_64[2];
          local_50[1] = local_50[2];
          local_3c[2] = local_3c[3];
          local_64[2] = local_64[3];
          local_50[2] = local_50[3];
          g_ModelPolygonData[first_polygon_index].vertex_indices_count = 3;
          for (local_28[3] = 0;
              (int)local_28[3] < (int)g_ModelPolygonData[first_polygon_index].vertex_indices_count;
              local_28[3] = local_28[3] + 1) {
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
                 local_3c[local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_u[local_28[3]] = local_64[local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_v[local_28[3]] = local_50[local_28[3]];
          }
          local_1e8.vertex_indices_count = 3;
          for (local_28[3] = 0; (int)local_28[3] < 3; local_28[3] = local_28[3] + 1) {
            local_1e8.vertex_indices[local_28[3]] = local_3c[local_28[3]];
          }
          shape_design_c_calculatePolygonNormal_FUN_0045caa0(&local_1e8);
        }
        else {
          dVar9 = shape_design_c_calculateVertexAngle_FUN_00462050
                            (local_1e8.vertex_indices[1],local_1e8.vertex_indices[2],
                             in_stack_fffffe0c);
          if (170 < dVar9) {
            local_2c = local_3c[0];
            local_1e8.vertex_indices[0] = local_3c[1];
            local_1e8.vertex_indices[1] = local_3c[2];
            local_1e8.vertex_indices[2] = local_3c[3];
            local_1e8.vertex_indices[3] = local_3c[0];
            shape_design_c_calculatePolygonNormal_FUN_0045caa0(&local_1e8);
            local_2c = local_3c[0];
            local_54 = local_64[0];
            local_40 = local_50[0];
            g_ModelPolygonData[first_polygon_index].vertex_indices[0] = local_3c[1];
            g_ModelPolygonData[first_polygon_index].uv_u[0] = local_64[1];
            g_ModelPolygonData[first_polygon_index].uv_v[0] = local_50[1];
            g_ModelPolygonData[first_polygon_index].vertex_indices[1] = local_3c[2];
            g_ModelPolygonData[first_polygon_index].uv_u[1] = local_64[2];
            g_ModelPolygonData[first_polygon_index].uv_v[1] = local_50[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[2] = local_3c[3];
            g_ModelPolygonData[first_polygon_index].uv_u[2] = local_64[3];
            g_ModelPolygonData[first_polygon_index].uv_v[2] = local_50[3];
            g_ModelPolygonData[first_polygon_index].vertex_indices[3] = local_3c[0];
            g_ModelPolygonData[first_polygon_index].uv_u[3] = local_64[0];
            g_ModelPolygonData[first_polygon_index].uv_v[3] = local_50[0];
          }
        }
        fVar8 = (float10)fcos((float10)0.52359877560000001);
        iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                          (&local_1e8,g_ModelPolygonData + first_polygon_index,(double)fVar8);
        if (iVar3 == 0) {
          uVar4 = g_ModelPolygonData[first_polygon_index].vertex_indices_count;
          for (local_28[3] = 0; (int)local_28[3] < (int)uVar4; local_28[3] = local_28[3] + 1) {
            g_ModelPolygonData[first_polygon_index].vertex_indices[local_28[3]] =
                 local_3c[(uVar4 - 1) - local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_u[local_28[3]] =
                 local_64[(uVar4 - 1) - local_28[3]];
            g_ModelPolygonData[first_polygon_index].uv_v[local_28[3]] =
                 local_50[(uVar4 - 1) - local_28[3]];
          }
          shape_design_c_calculatePolygonNormal_FUN_0045caa0
                    (g_ModelPolygonData + first_polygon_index);
          if (((ABS(g_ModelPolygonData[first_polygon_index].normal.x) == 0.0) &&
              (ABS(g_ModelPolygonData[first_polygon_index].normal.y) == 0.0)) &&
             (ABS(g_ModelPolygonData[first_polygon_index].normal.z) == 0.0)) {
            g_ModelPolygonData[first_polygon_index].vertex_indices_count = 3;
            g_ModelPolygonData[first_polygon_index].vertex_indices[1] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[2];
            g_ModelPolygonData[first_polygon_index].uv_u[1] =
                 g_ModelPolygonData[first_polygon_index].uv_u[2];
            g_ModelPolygonData[first_polygon_index].uv_v[1] =
                 g_ModelPolygonData[first_polygon_index].uv_v[2];
            g_ModelPolygonData[first_polygon_index].vertex_indices[2] =
                 g_ModelPolygonData[first_polygon_index].vertex_indices[3];
            g_ModelPolygonData[first_polygon_index].uv_u[2] =
                 g_ModelPolygonData[first_polygon_index].uv_u[3];
            g_ModelPolygonData[first_polygon_index].uv_v[2] =
                 g_ModelPolygonData[first_polygon_index].uv_v[3];
          }
          else {
            dVar9 = shape_design_c_calculateVertexAngle_FUN_00462050
                              (g_ModelPolygonData[first_polygon_index].vertex_indices[1],
                               g_ModelPolygonData[first_polygon_index].vertex_indices[2],uVar4);
            if (170 < dVar9) {
              uVar4 = g_ModelPolygonData[first_polygon_index].vertex_indices[0];
              fVar1 = g_ModelPolygonData[first_polygon_index].uv_u[0];
              fVar2 = g_ModelPolygonData[first_polygon_index].uv_v[0];
              g_ModelPolygonData[first_polygon_index].vertex_indices[0] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[1];
              g_ModelPolygonData[first_polygon_index].uv_u[0] =
                   g_ModelPolygonData[first_polygon_index].uv_u[1];
              g_ModelPolygonData[first_polygon_index].uv_v[0] =
                   g_ModelPolygonData[first_polygon_index].uv_v[1];
              g_ModelPolygonData[first_polygon_index].vertex_indices[1] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[2];
              g_ModelPolygonData[first_polygon_index].uv_u[1] =
                   g_ModelPolygonData[first_polygon_index].uv_u[2];
              g_ModelPolygonData[first_polygon_index].uv_v[1] =
                   g_ModelPolygonData[first_polygon_index].uv_v[2];
              g_ModelPolygonData[first_polygon_index].vertex_indices[2] =
                   g_ModelPolygonData[first_polygon_index].vertex_indices[3];
              g_ModelPolygonData[first_polygon_index].uv_u[2] =
                   g_ModelPolygonData[first_polygon_index].uv_u[3];
              g_ModelPolygonData[first_polygon_index].uv_v[2] =
                   g_ModelPolygonData[first_polygon_index].uv_v[3];
              g_ModelPolygonData[first_polygon_index].vertex_indices[3] = uVar4;
              g_ModelPolygonData[first_polygon_index].uv_u[3] = fVar1;
              g_ModelPolygonData[first_polygon_index].uv_v[3] = fVar2;
            }
          }
        }
        for (local_28[3] = second_polygon_index; uVar4 = g_PolygonCount - 1,
            (int)local_28[3] < (int)uVar4; local_28[3] = local_28[3] + 1) {
          pSVar5 = g_ModelPolygonData + local_28[3] + 1;
          pSVar6 = g_ModelPolygonData + local_28[3];
          for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
            pSVar6->polygon_type = pSVar5->polygon_type;
            pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      return uVar4;
    }
    local_28[4] = local_28[3] + 1 & 3;
    if (((local_3c[local_28[3]] == local_28[0]) && (local_3c[local_28[4]] == local_28[1])) ||
       ((local_3c[local_28[3]] == local_28[1] && (local_3c[local_28[4]] == local_28[0])))) {
      local_28[5] = local_28[4] + 1 & 3;
      shape_design_c_swapDWords_FUN_00462130(local_3c + local_28[4],local_3c + local_28[5]);
      shape_design_c_swapFloats_FUN_00462160(local_64 + local_28[4],local_64 + local_28[5]);
      shape_design_c_swapFloats_FUN_00462160(local_50 + local_28[4],local_50 + local_28[5]);
      goto LAB_004623f2;
    }
    local_28[3] = local_28[3] + 1;
  } while( true );
}
