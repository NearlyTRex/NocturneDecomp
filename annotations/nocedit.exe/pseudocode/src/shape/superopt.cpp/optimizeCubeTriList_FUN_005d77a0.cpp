// Name: shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0
// Address: 005d77a0
// Address Range: [[005d77a0, 005d7dfb] [0060cb4a, 0060cb68]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_optimizeCubeTriList_FUN_005d77a0(void)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_optimizeCubeTriList_FUN_005d77a0(void)

{
  char cVar2;
  _FILE *file;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar3;
  char (*str1) [80];
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  int aiStackY_114c [1009];
  CPoly local_168;
  char local_100 [100];
  COptimize local_9c;
  CObj local_58;
  double local_3c;
  int *local_34;
  int local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  _FILE *local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  if ((g_PolygonCount < 1) || (g_VertexCount < 1)) {
    return;
  }
  _sprintf(local_100,"reduce\\cube%04d.txt");
  iVar5 = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (local_100,(char *)0x0,"wt","..\\shape\\superopt.cpp",0x252f);
  if (0 < g_PolygonCount) {
    iVar2 = 0;
    do {
      iVar6 = iVar2 + -0x14;
      iVar2 = iVar2 + 0x184;
      iVar5 = iVar5 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) + -2;
    } while (iVar2 < g_PolygonCount * 0x184);
  }
  if (file != (_FILE *)0x0) {
    _fprintf(file,"// npoint, ntri\n");
    _fprintf(file,"%d %d\n",g_VertexCount);
  }
  shape_superopt_cpp_CObj_ctor_FUN_005d2230(&local_58,0,0);
  shape_superopt_cpp_CObj_init_FUN_005d22d0(&local_58,iVar5,g_VertexCount);
  if (file != (_FILE *)0x0) {
    _fprintf(file,"// pointList\n");
  }
  iVar6 = 0;
  if (0 < g_VertexCount) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      *(double *)((int)&((local_58.vertex_data)->position).x + iVar3) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4);
      *(double *)((int)&((local_58.vertex_data)->position).y + iVar3) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar4);
      *(double *)((int)&((local_58.vertex_data)->position).z + iVar3) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar4);
      if (file != (_FILE *)0x0) {
        _fprintf(file,"%g %g %g\n",
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar4),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar4));
      }
      iVar3 = iVar3 + 0x38;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar6 < g_VertexCount);
  }
  if (file != (_FILE *)0x0) {
    _fprintf(file,"// triList\n");
  }
  local_30 = 0;
  local_20 = 0;
  if (0 < g_PolygonCount) {
    local_28 = 0;
    local_2c = g_ModelPolygonData[0].texture_name;
    do {
      shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_168,(CObj *)0x0);
      local_168.parent_obj = &local_58;
      local_168.vertex_idx_0 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_28);
      local_168.uv_coords[0].impl.x =
           (double)*(float *)((int)g_ModelPolygonData[0].uv_u + local_28) * 0.00390625;
      local_168.uv_coords[0].impl.y =
           (double)*(float *)((int)g_ModelPolygonData[0].uv_v + local_28) * 0.00390625;
      iVar6 = 0;
      if (0 < g_TriListTextureCount) {
        str1 = g_TriListTextureNames;
        do {
          iVar4 = _stricmp(*str1,local_2c);
          if (iVar4 == 0) goto LAB_005d7a1a;
          iVar6 = iVar6 + 1;
          str1 = str1 + 1;
        } while (iVar6 < g_TriListTextureCount);
      }
      iVar6 = -1;
LAB_005d7a1a:
      if (iVar6 < 0) {
        if (0x31 < g_TriListTextureCount) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x255b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
        }
        iVar6 = g_TriListTextureCount;
        pcVar6 = g_TriListTextureNames[g_TriListTextureCount];
        pcVar4 = local_2c;
        do {
          cVar1 = *pcVar4;
          (*(char (*) [80])pcVar6)[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          (*(char (*) [80])pcVar6)[1] = cVar2;
          pcVar6 = *(char (*) [80])pcVar6 + 2;
        } while (cVar2 != '\0');
        g_TriListTextureCount = g_TriListTextureCount + 1;
      }
      local_18 = 2;
      iVar4 = local_28 + 8;
      local_14 = local_20 * 0x68;
      local_168.material_id = iVar6;
      if (2 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_28 + -0x14)) {
        do {
          local_168.uv_coords[1].impl.x =
               (double)*(float *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 0x3c) *
               0.00390625;
          local_168.uv_coords[1].impl.y =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar4 + 0x3c) * 0.00390625;
          local_168.uv_coords[2].impl.x =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar4) * 0.00390625;
          local_168.uv_coords[2].impl.y =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar4) * 0.00390625;
          local_168.vertex_idx_1 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + -4);
          local_168.vertex_idx_2 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4);
          if (file != (_FILE *)0x0) {
            _fprintf(file,"%d %d %d\n");
          }
          shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(&local_168);
          puVar3 = (uint *)
                   ((int)&((CPoly *)((local_58.poly_array)->uv_coords + -1))->parent_obj + local_14)
          ;
          *puVar3 = local_168.parent_obj;
          puVar3[1] = local_168.vertex_idx_0;
          puVar3[2] = local_168.vertex_idx_1;
          puVar3[3] = local_168.vertex_idx_2;
          __arr_op
                    (puVar3 + 4,local_168.uv_coords,3,0x10,shape_superopt_cpp_CP2D_copy_FUN_005d8330
                    );
          puVar3[0x10] = local_168.normal.impl.x._0_4_;
          puVar3[0x11] = local_168.normal.impl.x._4_4_;
          puVar3[0x12] = local_168.normal.impl.y._0_4_;
          puVar3[0x13] = local_168.normal.impl.y._4_4_;
          puVar3[0x14] = local_168.normal.impl.z._0_4_;
          puVar3[0x15] = local_168.normal.impl.z._4_4_;
          puVar3[0x16] = local_168.adjacency_flags;
          puVar3[0x17] = local_168.material_id;
          puVar3[0x18] = local_168.flags;
          local_20 = local_20 + 1;
          local_18 = local_18 + 1;
          iVar4 = iVar4 + 4;
          local_14 = local_14 + 0x68;
        } while (local_18 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_28 + -0x14));
      }
      shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_168,0);
      local_2c = local_2c + 0x184;
      local_28 = local_28 + 0x184;
      local_30 = local_30 + 1;
    } while (local_30 < g_PolygonCount);
  }
  if (file != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\superopt.cpp",0x2571);
  }
  shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(&local_9c);
  fVar8 = (float10)fcos((float10)0.069813169999999994);
  shape_superopt_cpp_COptimize_setWeldThreshold_FUN_005d70d0(&local_9c,0.01);
  shape_superopt_cpp_COptimize_setCoplanarAngleThreshold_FUN_005d7120
            (&local_9c,(double)((float10)1 - fVar8));
  shape_superopt_cpp_COptimize_setCoplanarDistanceThreshold_FUN_005d7170(&local_9c,0.01);
  shape_superopt_cpp_COptimize_setMaxPolygonSides_FUN_005d71c0(&local_9c,4);
  shape_superopt_cpp_COptimize_setGeometry_FUN_005d71e0(&local_9c,&local_58,1);
  iVar6 = shape_superopt_cpp_COptimize_optimize_FUN_005d7290(&local_9c);
  if (iVar6 == 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
    INT_03f6bbe4 = INT_03f6bbe4 + 1;
  }
  else {
    shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(&local_9c);
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    remove(local_100);
  }
  shape_superopt_cpp_CObj_free_FUN_005d2600(&local_58);
  shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(&local_9c,0);
  shape_superopt_cpp_CObj_dtor_FUN_005d2260(&local_58,0);
  return;
}
