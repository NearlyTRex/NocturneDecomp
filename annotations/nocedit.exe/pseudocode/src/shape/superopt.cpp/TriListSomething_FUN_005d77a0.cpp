// Name: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
// Address Range: [[005d77a0, 005d7dfb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_TriListSomething_FUN_005d77a0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void shape_superopt_cpp_TriListSomething_FUN_005d77a0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  int aiStackY_1150 [1011];
  ulonglong uVar10;
  CObj *in_stack_fffffe9c;
  CPoly **local_160;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  int local_118;
  int local_114;
  uint local_110;
  uint local_108;
  char local_100 [4];
  char acStack_fc [28];
  char acStack_e0 [72];
  byte auStack_98 [8];
  byte auStack_90 [8];
  byte auStack_88 [8];
  byte auStack_80 [36];
  byte auStack_5c [12];
  CPoly *apCStack_50 [6];
  int *piStack_38;
  double local_34;
  CObj local_2c;
  
  bVar8 = 0;
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  if ((g_PolygonCount < 1) || (g_VertexCount < 1)) {
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_fc,"reduce\\cube%04d.txt");
  iVar6 = 0;
  local_2c.poly_array =
       (CPoly *)shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (local_100,(char *)0x0,"wt","..\\shape\\superopt.cpp",0x252f)
  ;
  if (0 < g_PolygonCount) {
    iVar2 = 0;
    do {
      iVar4 = iVar2 + -0x14;
      iVar2 = iVar2 + 0x184;
      iVar6 = iVar6 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4) + -2;
    } while (iVar2 < g_PolygonCount * 0x184);
  }
  if (local_2c.poly_array != (CPoly *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)local_2c.poly_array,"// npoint, ntri\n");
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)local_2c.flags,"%d %d\n");
  }
  shape_superopt_cpp_CObj_ctor_FUN_005d2230((CObj *)auStack_5c);
  shape_superopt_cpp_CObj_init_FUN_005d22d0((CObj *)(auStack_5c + 4),iVar6,g_VertexCount);
  if ((FILE *)local_2c.is_valid != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)local_2c.is_valid,"// pointList\n");
  }
  iVar6 = 0;
  if (0 < g_VertexCount) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      *(double *)((int)&((CPoly *)(apCStack_50[0]->uv_coords + -1))->parent_obj + iVar4) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2);
      *(double *)((int)apCStack_50[0]->uv_coords + iVar4 + -8) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar2);
      *(double *)((int)&apCStack_50[0]->uv_coords[0].x + iVar4) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar2);
      if ((FILE *)local_2c.is_valid != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  ((FILE *)local_2c.is_valid,"%g %g %g\n",
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar2));
      }
      iVar4 = iVar4 + 0x38;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar6 < g_VertexCount);
  }
  if ((FILE *)local_2c.is_valid != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)local_2c.is_valid,"// triList\n");
  }
  local_2c.vertex_count = 0;
  local_2c.flags = 0;
  if (0 < g_PolygonCount) {
    local_2c.poly_count = 0;
    local_2c.vertex_data = (CVert *)g_ModelPolygonData[0].texture_name;
    do {
      uVar10 = ZEXT48(&stack0xfffffe9c);
      shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)&stack0xfffffe9c);
      iVar2 = local_2c.poly_count;
      local_160 = apCStack_50;
      iVar6 = 0;
      if (0 < DAT_03f6bbe8) {
        pcVar5 = &DAT_03f6bbf0;
        do {
          uVar10 = CONCAT44 /* combine 2-byte values */(pcVar5,(int)uVar10);
          in_stack_fffffe9c = (CObj *)iVar2;
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,(char *)iVar2);
          if (iVar4 == 0) goto LAB_005d7a1a;
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 0x50;
        } while (iVar6 < DAT_03f6bbe8);
      }
      iVar6 = -1;
LAB_005d7a1a:
      if (iVar6 < 0) {
        if (0x31 < DAT_03f6bbe8) {
          uVar10 = uVar10 & 0xffffffff00000000;
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x255b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
        }
        iVar6 = DAT_03f6bbe8;
        pcVar7 = &DAT_03f6bbf0 + DAT_03f6bbe8 * 0x50;
        uVar10 = CONCAT44 /* combine 2-byte values */((CObj *)(uVar10 >> 0x20),pcVar7);
        pcVar5 = (char *)local_2c.vertex_count;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        DAT_03f6bbe8 = DAT_03f6bbe8 + 1;
      }
      local_2c.is_valid = (int)&DAT_00000002;
      local_2c.poly_count = (int)local_2c.vertex_data;
      piVar3 = (int *)((int)local_2c.vertex_data + 8);
      local_2c.vtable = (CObj_vtable *)((int)local_2c.poly_array * 0x68);
      if (2 < *(int *)((int)&(((CPoly *)((int)local_2c.vertex_data + 0x16e9970))->normal).x + 4)) {
        do {
          local_160 = (CPoly **)piVar3[0x5ba671];
          if ((CObj_vtable *)local_2c.flags != (CObj_vtable *)0x0) {
            uVar10 = CONCAT44 /* combine 2-byte values */((CObj *)(uVar10 >> 0x20),piVar3[0x5ba672]);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      ((FILE *)local_2c.flags,"%d %d %d\n",in_stack_fffffe9c);
          }
          shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0((CPoly *)&stack0xfffffe90);
          piStack_38 = (int *)((int)&((FILE *)(local_2c.is_valid + -0x1c))->_flag +
                              (int)&((CPoly *)(apCStack_50[0]->uv_coords + -1))->uv_coords[0].x);
          *piStack_38 = (int)uVar10;
          piStack_38[1] = (int)(CObj *)(uVar10 >> 0x20);
          piStack_38[(uint)bVar8 * -2 + 2] = *(int *)(&stack0xfffffe9c + (uint)bVar8 * -8);
          (piStack_38 + (uint)bVar8 * -2 + 2)[(uint)bVar8 * -2 + 1] =
               *(int *)((int)&local_160 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4);
          crt_memory_c_copyArrayWithFunction_FUN_006020c2
                    (piStack_38 + 4,&stack0xfffffea4,3,0x10,shape_superopt_cpp_FUN_005d8330);
          *(uint *)(local_34._0_4_ + 0x40) = local_128;
          *(uint *)(local_34._0_4_ + 0x44) = local_124;
          *(uint *)(local_34._0_4_ + 0x48) = local_120;
          *(uint *)(local_34._0_4_ + 0x4c) = local_11c;
          *(int *)(local_34._0_4_ + 0x50) = local_118;
          *(int *)(local_34._0_4_ + 0x54) = local_114;
          *(uint *)(local_34._0_4_ + 0x58) = local_110;
          *(int *)(local_34._0_4_ + 0x5c) = iVar6;
          *(uint *)(local_34._0_4_ + 0x60) = local_108;
          local_2c.poly_array = (CPoly *)((int)&(local_2c.poly_array)->parent_obj + 1);
          local_2c.is_valid = (int)(char **)local_2c.is_valid + 1;
          piVar3 = piVar3 + 1;
          local_2c.vtable = (CObj_vtable *)&(local_2c.vtable)->containsVertex;
        } while (local_2c.is_valid <
                 *(int *)((int)&(((CPoly *)(local_2c.poly_count + 0x16e9970))->normal).x + 4));
      }
      shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)&stack0xfffffe98);
      local_2c.vertex_data =
           (CVert *)((int)&(((CPoly *)((int)local_2c.vertex_data + 0x138))->normal).y + 4);
      local_2c.poly_count = (int)&(((CPoly *)(local_2c.poly_count + 0x138))->normal).y + 4;
      local_2c.vertex_count = local_2c.vertex_count + 1;
    } while (local_2c.vertex_count < g_PolygonCount);
  }
  if ((FILE *)local_2c.is_valid != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)local_2c.is_valid,"..\\shape\\superopt.cpp",0x2571);
  }
  shape_superopt_cpp_COptimize_ctor_FUN_005d6f90((COptimize *)auStack_98);
  fVar9 = (float10)fcos((float10)0.069813169999999994);
  local_34 = (double)((float10)1 - fVar9);
  shape_superopt_cpp_COptimize_FUN_005d70d0((COptimize *)(auStack_98 + 4));
  local_160 = (CPoly **)local_2c.vertex_count;
  shape_superopt_cpp_COptimize_FUN_005d7120((COptimize *)auStack_90);
  local_160 = (CPoly **)0x47ae147b;
  shape_superopt_cpp_COptimize_FUN_005d7170((COptimize *)(auStack_90 + 4));
  local_160 = (CPoly **)0x5d7cb6;
  shape_superopt_cpp_COptimize_FUN_005d71c0((COptimize *)auStack_88);
  local_160 = (CPoly **)0x5d7cd0;
  shape_superopt_cpp_COptimize_FUN_005d71e0((COptimize *)(auStack_88 + 4));
  iVar6 = shape_superopt_cpp_COptimize_FUN_005d7290((COptimize *)auStack_80);
  if (iVar6 == 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
    DAT_03f6bbe4 = DAT_03f6bbe4 + 1;
  }
  else {
    shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_e0);
  }
  shape_superopt_cpp_CObj_free_FUN_005d2600((CObj *)&local_34);
  shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0((COptimize *)(auStack_80 + 0xc));
  shape_superopt_cpp_CObj_dtor_FUN_005d2260(&local_2c);
  return;
}
