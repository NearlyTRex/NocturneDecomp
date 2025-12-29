// Name: shape_superopt.cpp_TriListSomething_FUN_005d77a0
// Address: 005d77a0
// Address Range: [[005d77a0, 005d7dfb]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_TriListSomething_FUN_005d77a0()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d7ac1) */

void shape_superopt_cpp_TriListSomething_FUN_005d77a0(void)

{
  char cVar1;
  uint uVar2;
  FILE *file;
  int iVar3;
  CVert *pCVar4;
  int *piVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  char *pcVar7;
  FILE *unaff_EDI;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  FILE *unaff_retaddr;
  FILE *in_stack_00000004;
  int in_stack_0000000c;
  uint auStackY_112c [1006];
  CObj *pCVar13;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  void *pvStack_fc;
  void *pvStack_f8;
  int iStack_f4;
  int iStack_f0;
  uint uStack_ec;
  char acStack_c4 [72];
  byte auStack_7c [8];
  byte auStack_74 [8];
  byte auStack_6c [8];
  byte auStack_64 [32];
  byte auStack_44 [16];
  COptimize_vtable *local_34;
  CObj_vtable *local_2c;
  ulonglong local_18;
  char *str2;
  CPoly *pCVar14;
  
  bVar11 = 0;
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  if ((g_PolygonCount < 1) || (g_VertexCount < 1)) {
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0((char *)&pvStack_fc,"reduce\\cube%04d.txt",DAT_03f6bbe4);
  iVar8 = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ((char *)&pvStack_f8,(char *)0x0,"wt","..\\shape\\superopt.cpp",
                    0x252f);
  if (0 < g_PolygonCount) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + -0x14;
      iVar3 = iVar3 + 0x184;
      iVar8 = iVar8 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) + -2;
    } while (iVar3 < g_PolygonCount * 0x184);
  }
  if (file != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"// npoint, ntri\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EDI,"%d %d\n",g_VertexCount);
  }
  shape_superopt_cpp_CObj_ctor_FUN_005d2230((CObj *)auStack_44);
  shape_superopt_cpp_CObj_init_FUN_005d22d0((CObj *)(auStack_44 + 4),iVar8,g_VertexCount);
  if (unaff_retaddr != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(unaff_retaddr,"// pointList\n");
  }
  iVar8 = 0;
  if (0 < g_VertexCount) {
    iVar3 = 0;
    iVar6 = 0;
    do {
      *(double *)((int)&local_34->g_COptimizeVTable + iVar6) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar3);
      *(double *)((int)&local_34->field2_0x8 + iVar6) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar3);
      *(double *)((int)&local_34->field4_0x10 + iVar6) =
           (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar3);
      if (in_stack_00000004 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000004,"%g %g %g\n","%g %g %g\n",
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar3),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar3),
                   (double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar3));
      }
      iVar6 = iVar6 + 0x38;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar8 < g_VertexCount);
  }
  if (in_stack_00000004 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000004,"// triList\n");
  }
  str2 = (char *)0x0;
  if (0 < g_PolygonCount) {
    pCVar14 = (CPoly *)g_ModelPolygonData[0].texture_name;
    do {
      shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)&stack0xfffffeb8);
      pCVar13 = (CObj *)pCVar14[0x38666].adjacency_flags;
      iVar8 = 0;
      if (0 < DAT_03f6bbe8) {
        pcVar7 = &DAT_03f6bbf0;
        do {
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar7,str2);
          if (iVar3 == 0) goto LAB_005d7a1a;
          iVar8 = iVar8 + 1;
          pcVar7 = pcVar7 + 0x50;
        } while (iVar8 < DAT_03f6bbe8);
      }
      iVar8 = -1;
LAB_005d7a1a:
      if (iVar8 < 0) {
        if (0x31 < DAT_03f6bbe8) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x255b;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
        }
        iVar8 = DAT_03f6bbe8;
        pcVar10 = &DAT_03f6bbf0 + DAT_03f6bbe8 * 0x50;
        pcVar7 = str2;
        do {
          cVar1 = *pcVar7;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        DAT_03f6bbe8 = DAT_03f6bbe8 + 1;
      }
      in_stack_00000004 = (FILE *)&DAT_00000002;
      piVar5 = &pCVar14->vertex_idx_1;
      iStack_f0 = iVar8;
      if (2 < *(int *)((int)&pCVar14[0x38666].normal.x + 4)) {
        do {
          uVar2 = piVar5[0x5ba671];
          shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0((CPoly *)&stack0xfffffeb4);
          pCVar4 = (CVert *)((int)&local_2c->reset + in_stack_0000000c);
          local_18._4_4_ = pCVar4;
          *(CObj **)&(pCVar4->position).x = pCVar13;
          puVar9 = (uint *)((int)pCVar4 + (uint)bVar11 * -8 + 8);
          *(uint *)((int)&(pCVar4->position).x + 4) = uVar2;
          *puVar9 = *(uint *)(&stack0xfffffec0 + (uint)bVar11 * -8);
          puVar9[(uint)bVar11 * -2 + 1] =
               *(uint *)(&stack0xfffffec4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4);
          crt_memory_c_copyArrayWithFunction_FUN_006020c2
                    (&(pCVar4->position).z,&stack0xfffffec8,3,0x10,shape_superopt_cpp_FUN_005d8330);
          *(uint *)((int)local_18 + 0x40) = local_10c;
          *(uint *)((int)local_18 + 0x44) = local_108;
          *(uint *)((int)local_18 + 0x48) = uStack_104;
          *(uint *)((int)local_18 + 0x4c) = local_100;
          *(void **)((int)local_18 + 0x50) = pvStack_fc;
          *(void **)((int)local_18 + 0x54) = pvStack_f8;
          *(int *)((int)local_18 + 0x58) = iStack_f4;
          *(int *)((int)local_18 + 0x5c) = iStack_f0;
          *(uint *)((int)local_18 + 0x60) = uStack_ec;
          in_stack_00000004 = (FILE *)((int)&in_stack_00000004->_ptr + 1);
          piVar5 = piVar5 + 1;
        } while ((int)in_stack_00000004 < *(int *)((int)&pCVar14[0x38666].normal.x + 4));
      }
      shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)&stack0xfffffeb4);
      pCVar14 = (CPoly *)((int)&pCVar14[3].normal.y + 4);
      str2 = str2 + 1;
    } while ((int)str2 < g_PolygonCount);
  }
  if (in_stack_00000004 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000004,"..\\shape\\superopt.cpp",0x2571);
  }
  shape_superopt_cpp_COptimize_ctor_FUN_005d6f90((COptimize *)auStack_7c);
  fVar12 = (float10)fcos((float10)0.069813169999999994);
  local_18 = (double)((float10)1 - fVar12);
  shape_superopt_cpp_COptimize_FUN_005d70d0((COptimize *)(auStack_7c + 4));
  shape_superopt_cpp_COptimize_FUN_005d7120((COptimize *)auStack_74);
  shape_superopt_cpp_COptimize_FUN_005d7170((COptimize *)(auStack_74 + 4));
  shape_superopt_cpp_COptimize_FUN_005d71c0((COptimize *)auStack_6c);
  shape_superopt_cpp_COptimize_FUN_005d71e0((COptimize *)(auStack_6c + 4));
  iVar8 = shape_superopt_cpp_COptimize_FUN_005d7290((COptimize *)auStack_64);
  if (iVar8 == 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
    DAT_03f6bbe4 = DAT_03f6bbe4 + 1;
  }
  else {
    shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_c4);
  }
  shape_superopt_cpp_CObj_free_FUN_005d2600((CObj *)&local_18);
  shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0((COptimize *)(auStack_64 + 0xc));
  shape_superopt_cpp_CObj_dtor_FUN_005d2260((CObj *)&stack0xfffffff0);
  return;
}
