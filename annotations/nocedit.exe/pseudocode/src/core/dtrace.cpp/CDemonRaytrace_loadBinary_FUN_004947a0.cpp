// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
// Address Range: [[004947a0, 00494dd4]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,FILE *file_handle)

{
  SIZE_T SVar1;
  SVoxelCubeMetadata *pSVar2;
  float fVar3;
  float fVar4;
  CDemonRaytrace *this_ptr_00;
  SIZE_T *pSVar5;
  SIZE_T *pSVar6;
  void *pvVar7;
  CDemonPart *pCVar8;
  uchar *puVar9;
  int unaff_EBX;
  uint cube_index;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar10;
  int *piVar11;
  int iVar12;
  SIZE_T *buffer;
  int iVar13;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  FILE *in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000024;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  void *in_stack_0000003c;
  FILE *in_stack_00000040;
  void *in_stack_00000048;
  FILE *in_stack_0000004c;
  FILE *in_stack_00000050;
  int in_stack_ffffffdc;
  int in_stack_ffffffe0;
  
  this_ptr_00 = this_ptr;
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  DAT_02cee5ac = 0;
  crt_stdio_c_fread_FUN_005fd990(&stack0xffffffd8,4,1,in_stack_0000000c);
  if (in_stack_ffffffdc < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x148;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - invalid version");
  }
  if (g_GeoFileFormatVersion < in_stack_ffffffe0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x14b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->grid_coord,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&(this_ptr->grid_coord).y,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&(this_ptr->grid_coord).z,4,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox_min,0xc,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox_max,0xc,1,in_stack_00000014);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->cell_size,0xc,1,in_stack_00000014);
  fVar3 = (this_ptr->cell_size).y * 0.125f;
  fVar4 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&stack0xffffffec) {
    (this_ptr->adjusted_size).x = (this_ptr->cell_size).x / 8f;
    (this_ptr->adjusted_size).y = fVar3;
    (this_ptr->adjusted_size).z = fVar4;
  }
  if (unaff_ESI < 4) {
    core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(this_ptr);
    if (unaff_EBX < 3) {
      this_ptr = (CDemonRaytrace *)0x0;
      for (in_stack_0000000c = (FILE *)0x0;
          iVar10 = (this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y *
                   (this_ptr_00->grid_coord).z,
          iVar10 - (int)in_stack_0000000c != 0 && (int)in_stack_0000000c <= iVar10;
          in_stack_0000000c = (FILE *)((int)in_stack_0000000c + 1)) {
        buffer = (SIZE_T *)
                 ((int)((SVoxelCubeMetadata *)(this_ptr_00->cube_list->voxel_data + -5))->voxel_data
                 + (int)&this_ptr[-1].grid_bounds_min.y);
        crt_stdio_c_fread_FUN_005fd990(buffer,4,1,in_stack_00000030);
        SVar1 = *buffer;
        if (SVar1 != 0) {
          pSVar5 = (SIZE_T *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (SVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0x172);
          pSVar6 = pSVar5;
          if (pSVar5 != (SIZE_T *)0x0) {
            pSVar6 = pSVar5 + 1;
            *pSVar5 = SVar1;
          }
          buffer[1] = (SIZE_T)pSVar6;
          pvVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (*buffer,"..\\core\\dtrace.cpp",0x173);
          buffer[0x15] = (SIZE_T)pvVar7;
          if ((buffer[1] == 0) || (pvVar7 == (void *)0x0)) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x175;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - out of memory!");
          }
          iVar10 = 0;
          if (0 < (int)*buffer) {
            iVar12 = 0;
            do {
              iVar10 = iVar10 + 1;
              core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                        ((CDemonTriangle *)(buffer[1] + iVar12),in_stack_00000040);
              iVar12 = iVar12 + 0x38;
            } while (iVar10 < (int)*buffer);
          }
          pCVar8 = (CDemonPart *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x17a);
          if (pCVar8 != (CDemonPart *)0x0) {
            pCVar8 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar8);
          }
          buffer[3] = (SIZE_T)pCVar8;
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr_00,pCVar8,in_stack_00000024,in_stack_00000048);
        }
        crt_stdio_c_fread_FUN_005fd990(buffer + 5,0x40,1,in_stack_0000004c);
        if (in_stack_0000001c < 2) {
          crt_memory_c_memset_FUN_005fde40((void *)buffer[0x15],0,*buffer);
        }
        else {
          crt_stdio_c_fread_FUN_005fd990((void *)buffer[0x15],*buffer,1,in_stack_00000050);
        }
        this_ptr = (CDemonRaytrace *)&(this_ptr->grid_bounds_min).y;
      }
      core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450((CDemonRaytrace *)0x494acd);
    }
    else {
      iVar12 = 0;
      iVar10 = 0;
      while (iVar10 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z
            ) {
        piVar11 = (int *)((int)this_ptr->cube_list->voxel_data + iVar12 + -0x14);
        crt_stdio_c_fread_FUN_005fd990(piVar11,4,1,in_stack_00000030);
        if (*piVar11 < 1) {
          crt_memory_c_memset_FUN_005fde40(piVar11 + 5,0,0x40);
          iVar10 = iVar10 + 1;
          iVar12 = iVar12 + 0x58;
        }
        else {
          pCVar8 = (CDemonPart *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x19a);
          if (pCVar8 != (CDemonPart *)0x0) {
            pCVar8 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar8);
          }
          piVar11[3] = (int)pCVar8;
          if (pCVar8 == (CDemonPart *)0x0) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x19b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for cube model loading dtrace database");
          }
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr,(void *)piVar11[3],iVar10,in_stack_0000003c);
          crt_stdio_c_fread_FUN_005fd990(piVar11 + 5,0x40,1,in_stack_00000040);
          iVar10 = iVar10 + 1;
          iVar12 = iVar12 + 0x58;
        }
      }
      iVar10 = 0;
      this_ptr->triangle_count = in_stack_00000010;
      core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
      if (0 < this_ptr->triangle_count) {
        iVar12 = 0;
        do {
          iVar10 = iVar10 + 1;
          core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                    ((CDemonTriangle *)((int)&(this_ptr->triangle_list->vertex1).x + iVar12),
                     in_stack_00000034);
          iVar12 = iVar12 + 0x38;
        } while (iVar10 < this_ptr->triangle_count);
      }
      iVar12 = 0;
      iVar13 = 0;
      crt_stdio_c_fread_FUN_005fd990
                (this_ptr->triangle_flags,this_ptr->triangle_count,1,in_stack_00000034);
      iVar10 = 0;
      while (iVar12 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z
            ) {
        piVar11 = (int *)((int)this_ptr->cube_list->voxel_data + iVar13 + -0x14);
        if (*piVar11 < 1) {
          piVar11[0x15] = 0;
          piVar11[1] = 0;
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x58;
        }
        else {
          piVar11[1] = (int)(this_ptr->triangle_list + iVar10);
          puVar9 = this_ptr->triangle_flags + iVar10;
          iVar10 = iVar10 + *piVar11;
          piVar11[0x15] = (int)puVar9;
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x58;
        }
      }
    }
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr_00);
    cube_index = 0;
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Converting .GEO file to version 4");
    iVar10 = 0;
    while ((int)cube_index <
           (this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y * (this_ptr_00->grid_coord).z)
    {
      pSVar2 = this_ptr_00->cube_list;
      core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
                (this_ptr_00,(CVector3f *)&stack0xfffffff4,cube_index);
      piVar11 = (int *)((int)pSVar2->voxel_data + iVar10 + -0x14);
      core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
                ((CDemonCube *)((int)&this_ptr_00->cube_data->voxel_buffer1 + in_stack_0000001c),
                 (void *)piVar11[1],*piVar11,(CVector3f *)&stack0xfffffff8,
                 (CVector3f *)&stack0xffffffec,(uchar *)piVar11[0x15],(uint *)(piVar11 + 5));
      if ((cube_index & 0xf) == 0) {
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)(cube_index + 1),
                   (float)((this_ptr_00->grid_coord).x * (this_ptr_00->grid_coord).y *
                          (this_ptr_00->grid_coord).z));
        iVar10 = iVar10 + 0x58;
        cube_index = cube_index + 1;
      }
      else {
        iVar10 = iVar10 + 0x58;
        cube_index = cube_index + 1;
      }
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr_00);
    core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr_00);
    DAT_02cee5ac = 1;
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    iVar10 = 0;
    for (iVar12 = 0;
        iVar12 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar12 = iVar12 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00457530
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar10),in_stack_0000004c
                );
      iVar10 = iVar10 + 0x34;
    }
  }
  if ((in_stack_0000004c->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x1ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - error reading file");
    return;
  }
  return;
}
