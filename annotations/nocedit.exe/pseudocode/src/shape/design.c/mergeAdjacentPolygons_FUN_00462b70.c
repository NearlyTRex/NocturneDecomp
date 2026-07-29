// Name: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
// Address: 00462b70
// Address Range: [[00462b70, 004635a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index,int polygon2_index)

#include "nocturne.h"

void __cdecl shape_design_c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index,int polygon2_index)

{
  int iVar1;
  uint uVar2;
  int iVar2;
  SShapeEditorPolygon *pSVar3;
  SShapeEditorPolygon *pSVar4;
  bool bVar5;
  byte bVar6;
  double dVar7;
  double dVar3;
  float local_90 [6];
  float local_78;
  float local_74 [6];
  float local_5c;
  float local_58 [2];
  int local_50;
  float afStack_4c [3];
  float local_40;
  uint local_3c [7];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  uint uVar1;
  
  bVar6 = 0;
  local_3c[3] = 0;
  for (local_3c[4] = 0;
      (int)local_3c[4] < (int)g_ModelPolygonData[polygon1_index].vertex_indices_count;
      local_3c[4] = local_3c[4] + 1) {
    for (local_3c[5] = 0;
        (int)local_3c[5] < (int)g_ModelPolygonData[polygon2_index].vertex_indices_count;
        local_3c[5] = local_3c[5] + 1) {
      if (g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] ==
          g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[5]]) {
        local_3c[local_3c[3]] = g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]];
        local_3c[3] = local_3c[3] + 1;
        if (2 < (int)local_3c[3]) {
          engine_special_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Polygons share more than 2 vertices!",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          engine_2d_c_clearInputAndWait_FUN_00403260();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          engine_2d_c_clearInputAndWait_FUN_00403260();
          return;
        }
      }
    }
  }
  local_3c[4] = 0;
  local_3c[5] = 0;
  while (((int)local_3c[4] < (int)g_ModelPolygonData[polygon1_index].vertex_indices_count &&
         (((g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] != local_3c[0] &&
           (g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] != local_3c[1])) ||
          (local_3c[5] = local_3c[5] + 1, local_3c[5] != 2))))) {
    local_3c[4] = local_3c[4] + 1;
  }
  if ((int)local_3c[4] < (int)(g_ModelPolygonData[polygon1_index].vertex_indices_count - 1)) {
    local_1c = local_3c[4] + 1;
  }
  else if ((g_ModelPolygonData[polygon1_index].vertex_indices[0] == local_3c[0]) ||
          (g_ModelPolygonData[polygon1_index].vertex_indices[0] == local_3c[1])) {
    local_1c = 1;
  }
  else {
    local_1c = 0;
  }
  local_3c[4] = 0;
  local_3c[5] = 0;
  while (((int)local_3c[4] < (int)g_ModelPolygonData[polygon2_index].vertex_indices_count &&
         (((g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[4]] != local_3c[0] &&
           (g_ModelPolygonData[polygon2_index].vertex_indices[local_3c[4]] != local_3c[1])) ||
          (local_3c[5] = local_3c[5] + 1, local_3c[5] != 2))))) {
    local_3c[4] = local_3c[4] + 1;
  }
  local_3c[5] = g_ModelPolygonData[polygon2_index].vertex_indices[0];
  if ((int)local_3c[4] < (int)(g_ModelPolygonData[polygon2_index].vertex_indices_count - 1)) {
    local_18 = local_3c[4] + 1;
  }
  else if ((local_3c[5] == local_3c[0]) || (local_3c[5] == local_3c[1])) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  local_3c[4] = local_1c;
  do {
    if ((int)(local_1c + g_ModelPolygonData[polygon1_index].vertex_indices_count) <=
        (int)local_3c[4]) {
LAB_00462e72:
      local_58[0] = (float)g_ModelPolygonData[polygon1_index].vertex_indices[local_1c];
      local_74[0] = g_ModelPolygonData[polygon1_index].uv_u[local_1c];
      local_90[0] = g_ModelPolygonData[polygon1_index].uv_v[local_1c];
      bVar5 = g_ModelPolygonData[polygon1_index].vertex_indices_count == 4;
      if (bVar5) {
        local_58[1] = (float)g_ModelPolygonData[polygon1_index].vertex_indices[(local_1c + 1) % 4];
        local_74[1] = g_ModelPolygonData[polygon1_index].uv_u[(local_1c + 1) % 4];
        local_90[1] = g_ModelPolygonData[polygon1_index].uv_v[(local_1c + 1) % 4];
      }
      local_3c[4] = (uint)bVar5;
      iVar1 = local_3c[4] + 1;
      local_58[iVar1] = (float)g_ModelPolygonData[polygon1_index].vertex_indices[local_20];
      local_74[iVar1] = g_ModelPolygonData[polygon1_index].uv_u[local_20];
      local_90[iVar1] = g_ModelPolygonData[polygon1_index].uv_v[local_20];
      uVar2 = local_3c[4] + 2;
      local_58[uVar2] = (float)g_ModelPolygonData[polygon2_index].vertex_indices[local_18];
      local_74[uVar2] = g_ModelPolygonData[polygon2_index].uv_u[local_18];
      local_90[uVar2] = g_ModelPolygonData[polygon2_index].uv_v[local_18];
      if (g_ModelPolygonData[polygon2_index].vertex_indices_count == 4) {
        uVar2 = local_3c[4] + 3;
        local_58[uVar2] =
             (float)g_ModelPolygonData[polygon2_index].vertex_indices[(local_18 + 1) % 4];
        local_74[uVar2] = g_ModelPolygonData[polygon2_index].uv_u[(local_18 + 1) % 4];
        local_90[uVar2] = g_ModelPolygonData[polygon2_index].uv_v[(local_18 + 1) % 4];
      }
      local_3c[4] = uVar2;
      iVar1 = local_3c[4] + 1;
      local_58[iVar1] =
           (float)g_ModelPolygonData[polygon1_index].vertex_indices
                  [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count];
      local_74[iVar1] =
           g_ModelPolygonData[polygon1_index].uv_u
           [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count];
      local_90[iVar1] =
           g_ModelPolygonData[polygon1_index].uv_v
           [(local_20 + 1) % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count];
      local_3c[3] = 0;
      local_3c[6] = local_3c[4] + 2;
      for (local_3c[4] = 0; (int)local_3c[4] < (int)(local_3c[6] - 2); local_3c[4] = local_3c[4] + 1
          ) {
        dVar7 = shape_design_c_calculateVertexAngle_FUN_00462050
                          ((int)local_58[local_3c[4]],(int)local_58[local_3c[4] + 1],
                           (int)afStack_4c[local_3c[4] - 1]);
        if (179.97999572753906 < dVar7) {
          local_3c[local_3c[3]] = local_3c[4] + 1;
          local_3c[3] = local_3c[3] + 1;
        }
      }
      dVar3 = shape_design_c_calculateVertexAngle_FUN_00462050
                        ((int)local_74[local_3c[6] + 5],(int)local_58[local_3c[6] - 1],
                         (int)local_58[0]);
      if (179.97999572753906 < dVar3) {
        local_3c[local_3c[3]] = local_3c[6] - 1;
        local_3c[3] = local_3c[3] + 1;
      }
      dVar3 = shape_design_c_calculateVertexAngle_FUN_00462050
                        ((int)local_58[local_3c[6] - 1],(int)local_58[0],(int)local_58[1]);
      if (179.97999572753906 < dVar3) {
        local_3c[local_3c[3]] = 0;
        local_3c[3] = local_3c[3] + 1;
      }
      if ((int)local_3c[3] < 4) {
        for (local_3c[4] = 0; (int)local_3c[4] < (int)local_3c[3]; local_3c[4] = local_3c[4] + 1) {
          for (local_3c[5] = local_3c[local_3c[4]] - local_3c[4];
              (int)local_3c[5] < (int)(local_3c[6] - 1); local_3c[5] = local_3c[5] + 1) {
            local_58[local_3c[5]] = local_58[local_3c[5] + 1];
            local_74[local_3c[5]] = local_74[local_3c[5] + 1];
            local_90[local_3c[5]] = local_90[local_3c[5] + 1];
          }
          local_3c[6] = local_3c[6] - 1;
        }
        dVar3 = shape_design_c_calculateVertexAngle_FUN_00462050
                          ((int)local_58[0],(int)local_58[1],local_50);
        if (170 < dVar3) {
          for (local_3c[4] = 0; (int)local_3c[4] < (int)(local_3c[6] - 1);
              local_3c[4] = local_3c[4] + 1) {
            local_58[local_3c[4]] = local_58[local_3c[4] + 1];
            local_74[local_3c[4]] = local_74[local_3c[4] + 1];
            local_90[local_3c[4]] = local_90[local_3c[4] + 1];
          }
          local_58[local_3c[4]] = local_58[0];
          local_74[local_3c[4]] = local_74[0];
          local_90[local_3c[4]] = local_90[0];
        }
        if ((g_ModelPolygonData[polygon1_index].vertex_indices_count == 3) &&
           (g_ModelPolygonData[polygon2_index].vertex_indices_count == 3)) {
          if (local_3c[6] != 3) {
            return;
          }
        }
        else if ((local_3c[6] != 3) && (local_3c[6] != 4)) {
          return;
        }
        g_ModelPolygonData[polygon1_index].vertex_indices_count = local_3c[6];
        for (local_3c[4] = 0; (int)local_3c[4] < (int)local_3c[6]; local_3c[4] = local_3c[4] + 1) {
          g_ModelPolygonData[polygon1_index].vertex_indices[local_3c[4]] =
               (uint)local_58[local_3c[4]];
          g_ModelPolygonData[polygon1_index].uv_u[local_3c[4]] = local_74[local_3c[4]];
          g_ModelPolygonData[polygon1_index].uv_v[local_3c[4]] = local_90[local_3c[4]];
        }
        shape_design_c_calculatePolygonNormal_FUN_0045caa0(g_ModelPolygonData + polygon1_index);
        for (local_3c[4] = polygon2_index; (int)local_3c[4] < g_PolygonCount + -1;
            local_3c[4] = local_3c[4] + 1) {
          pSVar3 = g_ModelPolygonData + local_3c[4] + 1;
          pSVar4 = g_ModelPolygonData + local_3c[4];
          for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
            pSVar4 = (SShapeEditorPolygon *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
            pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + (uint)bVar6 * -8 + 4);
            pSVar4->polygon_type = pSVar3->polygon_type;
            pSVar3 = pSVar3;
            pSVar4 = pSVar4;
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      else {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: More than 3 vertices to delete!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
      return;
    }
    if ((g_ModelPolygonData[polygon1_index].vertex_indices
         [(int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count] ==
         local_3c[0]) ||
       (g_ModelPolygonData[polygon1_index].vertex_indices
        [(int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count] ==
        local_3c[1])) {
      local_20 = (int)local_3c[4] % (int)g_ModelPolygonData[polygon1_index].vertex_indices_count;
      goto LAB_00462e72;
    }
    local_3c[4] = local_3c[4] + 1;
  } while( true );
}
