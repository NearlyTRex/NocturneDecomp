// Name: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
// Address Range: [[005d77a0, 005d7dfb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_TriListSomething_FUN_005d77a0()

#include "nocturne.h"

void shape_superopt_cpp_TriListSomething_FUN_005d77a0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  int aiStackY_114c [1009];
  CPoly local_168;
  char local_100 [4];
  char acStack_fc [96];
  byte local_9c [68];
  byte local_58 [12];
  CPoly *local_4c;
  ulonglong uStack_38;
  int local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  FILE *local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  if ((g_PolygonCount < 1) || (g_VertexCount < 1)) {
    return;
  }
  local_168.parent_obj = DAT_03f6bbe4;
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_fc,"reduce\\cube%04d.txt");
  iVar7 = 0;
  local_1c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_100,(char *)0x0,"wt","..\\shape\\superopt.cpp",0x252f);
  if (0 < g_PolygonCount) {
    iVar2 = 0;
    do {
      iVar4 = iVar2 + -0x14;
      iVar2 = iVar2 + 0x184;
      iVar7 = iVar7 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4) + -2;
    } while (iVar2 < g_PolygonCount * 0x184);
  }
  if (local_1c != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"// npoint, ntri\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"%d %d\n",g_VertexCount);
  }
  shape_superopt_cpp_CObj_ctor_FUN_005d2230((CObj *)local_58);
  shape_superopt_cpp_CObj_init_FUN_005d22d0((CObj *)local_58,iVar7,g_VertexCount);
  if (local_1c != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"// pointList\n");
  }
  iVar7 = 0;
  if (0 < g_VertexCount) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      *(double *)((int)&((CVector3d *)local_58._4_4_)->x + iVar4) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2);
      *(double *)((int)&((CVector3d *)local_58._4_4_)->y + iVar4) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar2);
      *(double *)((int)&((CVector3d *)local_58._4_4_)->z + iVar4) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar2);
      if (local_1c != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_1c,"%g %g %g\n",
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar2),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar2));
      }
      iVar4 = iVar4 + 0x38;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar7 < g_VertexCount);
  }
  if (local_1c != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"// triList\n");
  }
  local_30 = 0;
  local_20 = 0;
  if (0 < g_PolygonCount) {
    local_28 = 0;
    local_2c = g_ModelPolygonData[0].texture_name;
    do {
      shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_168);
      pcVar6 = local_2c;
      local_168.parent_obj = (CObj *)(local_58 + 4);
      local_168.vertex_idx_0 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_28);
      local_168.uv_coords[0].x =
           (double)*(float *)((int)g_ModelPolygonData[0].uv_u + local_28) * 0.00390625;
      local_168.uv_coords[0].y =
           (double)*(float *)((int)g_ModelPolygonData[0].uv_v + local_28) * 0.00390625;
      iVar7 = 0;
      if (0 < DAT_03f6bbe8) {
        pcVar5 = &DAT_03f6bbf0;
        do {
          iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,pcVar6);
          if (iVar2 == 0) goto LAB_005d7a1a;
          iVar7 = iVar7 + 1;
          pcVar5 = pcVar5 + 0x50;
        } while (iVar7 < DAT_03f6bbe8);
      }
      iVar7 = -1;
LAB_005d7a1a:
      if (iVar7 < 0) {
        if (0x31 < DAT_03f6bbe8) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x255b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
        }
        iVar7 = DAT_03f6bbe8;
        pcVar5 = &DAT_03f6bbf0 + DAT_03f6bbe8 * 0x50;
        pcVar6 = local_2c;
        do {
          cVar1 = *pcVar6;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        DAT_03f6bbe8 = DAT_03f6bbe8 + 1;
      }
      local_18 = 2;
      local_24 = local_28;
      iVar2 = local_28 + 8;
      local_14 = local_20 * 0x68;
      local_168.material_id = iVar7;
      if (2 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_28 + -0x14)) {
        do {
          local_168.uv_coords[1].x =
               (double)*(float *)((int)g_ModelPolygonData[0].vertex_indices + iVar2 + 0x3c) *
               0.00390625;
          local_168.uv_coords[1].y =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar2 + 0x3c) * 0.00390625;
          local_168.uv_coords[2].x =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar2) * 0.00390625;
          local_168.uv_coords[2].y =
               (double)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar2) * 0.00390625;
          local_168.vertex_idx_1 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2 + -4);
          local_168.vertex_idx_2 = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2);
          if (local_1c != (FILE *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_1c,"%d %d %d\n");
          }
          shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(&local_168);
          piVar3 = (int *)((int)&((CPoly *)(local_4c->uv_coords + -1))->parent_obj + local_14);
          uStack_38 = (double)CONCAT44 /* combine 2-byte values */(piVar3,(uint)uStack_38);
          *piVar3 = (int)local_168.parent_obj;
          piVar3[1] = local_168.vertex_idx_0;
          piVar3[(uint)bVar8 * -2 + 2] = *(int *)((int)&local_168 + (uint)bVar8 * -8 + 8);
          (piVar3 + (uint)bVar8 * -2 + 2)[(uint)bVar8 * -2 + 1] =
               *(int *)((int)&local_168 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 0xc);
          crt_memory_c_copyArrayWithFunction_FUN_006020c2
                    (piVar3 + 4,local_168.uv_coords,3,0x10,shape_superopt_cpp_FUN_005d8330);
          *(uint *)(uStack_38._4_4_ + 0x40) = local_168.normal.x._0_4_;
          *(uint *)(uStack_38._4_4_ + 0x44) = local_168.normal.x._4_4_;
          *(uint *)(uStack_38._4_4_ + 0x48) = local_168.normal.y._0_4_;
          *(uint *)(uStack_38._4_4_ + 0x4c) = local_168.normal.y._4_4_;
          *(uint *)(uStack_38._4_4_ + 0x50) = local_168.normal.z._0_4_;
          *(uint *)(uStack_38._4_4_ + 0x54) = local_168.normal.z._4_4_;
          *(int *)(uStack_38._4_4_ + 0x58) = local_168.adjacency_flags;
          *(int *)(uStack_38._4_4_ + 0x5c) = local_168.material_id;
          *(uint *)(uStack_38._4_4_ + 0x60) = local_168.flags;
          local_20 = local_20 + 1;
          local_18 = local_18 + 1;
          iVar2 = iVar2 + 4;
          local_14 = local_14 + 0x68;
        } while (local_18 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_24 + -0x14));
      }
      shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_168);
      local_2c = local_2c + 0x184;
      local_28 = local_28 + 0x184;
      local_30 = local_30 + 1;
    } while (local_30 < g_PolygonCount);
  }
  if (local_1c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\superopt.cpp",0x2571);
  }
  shape_superopt_cpp_COptimize_ctor_FUN_005d6f90((COptimize *)local_9c);
  fVar9 = (float10)fcos((float10)0.069813169999999994);
  local_168.parent_obj = (CObj *)0x3f847ae1;
  uStack_38 = (double)((float10)1 - fVar9);
  shape_superopt_cpp_COptimize_FUN_005d70d0((COptimize *)(local_9c + 4));
  shape_superopt_cpp_COptimize_FUN_005d7120((COptimize *)local_9c);
  shape_superopt_cpp_COptimize_FUN_005d7170((COptimize *)local_9c);
  shape_superopt_cpp_COptimize_FUN_005d71c0((COptimize *)local_9c);
  shape_superopt_cpp_COptimize_FUN_005d71e0((COptimize *)local_9c);
  iVar7 = shape_superopt_cpp_COptimize_FUN_005d7290((COptimize *)local_9c);
  if (iVar7 == 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
    DAT_03f6bbe4 = (CObj *)((int)&DAT_03f6bbe4->vertex_count + 1);
  }
  else {
    shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    crt_io_c_deleteFile_FUN_005ff9d0(local_100);
  }
  shape_superopt_cpp_CObj_free_FUN_005d2600((CObj *)local_58);
  shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0((COptimize *)local_9c);
  shape_superopt_cpp_CObj_dtor_FUN_005d2260((CObj *)local_58);
  return;
}
