// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
// Address Range: [[004947a0, 00494dd4]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,_FILE *file_handle)

{
  SIZE_T SVar1;
  SVoxelCubeMetadata *pSVar2;
  SIZE_T *pSVar3;
  SIZE_T *pSVar4;
  void *pvVar5;
  CDemonPart *pCVar6;
  CDemonPart *pCVar7;
  uchar *puVar8;
  uint cube_index;
  int iVar9;
  int *piVar10;
  int iVar11;
  SIZE_T *buffer;
  int iVar12;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  CVector3f *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  DAT_02cee5ac = 0;
  _fread(&local_2c,4,1,file_handle);
  if (local_2c < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x148;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - invalid version");
  }
  if (g_GeoFileFormatVersion < local_2c) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x14b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(&this_ptr->grid_coord,4,1,file_handle);
  _fread(&(this_ptr->grid_coord).y,4,1,file_handle);
  _fread(&(this_ptr->grid_coord).z,4,1,file_handle);
  _fread(&this_ptr->bbox_min,0xc,1,file_handle);
  _fread(&this_ptr->bbox_max,0xc,1,file_handle);
  _fread(&this_ptr->cell_size,0xc,1,file_handle);
  local_38 = (this_ptr->cell_size).x / 8.0f;
  local_34 = (this_ptr->cell_size).y * 0.125f;
  local_30 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&local_38) {
    (this_ptr->adjusted_size).x = local_38;
    (this_ptr->adjusted_size).y = local_34;
    (this_ptr->adjusted_size).z = local_30;
  }
  if (local_2c < 4) {
    core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(this_ptr);
    if (local_2c < 3) {
      local_24 = 0;
      for (local_1c = 0;
          iVar9 = (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z,
          iVar9 - local_1c != 0 && local_1c <= iVar9; local_1c = local_1c + 1) {
        buffer = (SIZE_T *)((int)this_ptr->cube_list->voxel_data + local_24 + -0x14);
        _fread(buffer,4,1,file_handle);
        SVar1 = *buffer;
        if (SVar1 != 0) {
          pSVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (SVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0x172);
          pSVar4 = pSVar3;
          if (pSVar3 != (SIZE_T *)0x0) {
            pSVar4 = pSVar3 + 1;
            *pSVar3 = SVar1;
          }
          buffer[1] = (SIZE_T)pSVar4;
          pvVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (*buffer,"..\\core\\dtrace.cpp",0x173);
          buffer[0x15] = (SIZE_T)pvVar5;
          if ((buffer[1] == 0) || (pvVar5 == (void *)0x0)) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x175;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - out of memory!");
          }
          iVar9 = 0;
          if (0 < (int)*buffer) {
            iVar11 = 0;
            do {
              iVar9 = iVar9 + 1;
              core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                        ((CDemonTriangle *)(buffer[1] + iVar11),file_handle);
              iVar11 = iVar11 + 0x38;
            } while (iVar9 < (int)*buffer);
          }
          pCVar6 = (CDemonPart *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x17a);
          pCVar7 = (CDemonPart *)0x0;
          if (pCVar6 != (CDemonPart *)0x0) {
            pCVar7 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar6);
          }
          buffer[3] = (SIZE_T)pCVar7;
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr,pCVar7,local_1c,file_handle);
        }
        _fread(buffer + 5,0x40,1,file_handle);
        if (local_2c < 2) {
          memset((void *)buffer[0x15],0,*buffer);
        }
        else {
          _fread((void *)buffer[0x15],*buffer,1,file_handle);
        }
        local_24 = local_24 + 0x58;
        local_18 = local_18 + *buffer;
      }
      core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(this_ptr);
    }
    else {
      iVar11 = 0;
      iVar9 = 0;
      while (iVar9 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z)
      {
        piVar10 = (int *)((int)this_ptr->cube_list->voxel_data + iVar11 + -0x14);
        _fread(piVar10,4,1,file_handle);
        if (*piVar10 < 1) {
          memset(piVar10 + 5,0,0x40);
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0x58;
        }
        else {
          pCVar6 = (CDemonPart *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x388,"..\\core\\dtrace.cpp",0x19a);
          pCVar7 = (CDemonPart *)0x0;
          if (pCVar6 != (CDemonPart *)0x0) {
            pCVar7 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar6);
          }
          piVar10[3] = (int)pCVar7;
          if (pCVar7 == (CDemonPart *)0x0) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x19b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for cube model loading dtrace database");
          }
          core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
                    (this_ptr,(void *)piVar10[3],iVar9,file_handle);
          _fread(piVar10 + 5,0x40,1,file_handle);
          local_18 = local_18 + *piVar10;
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0x58;
        }
      }
      iVar9 = 0;
      this_ptr->triangle_count = local_18;
      core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
      if (0 < this_ptr->triangle_count) {
        iVar11 = 0;
        do {
          iVar9 = iVar9 + 1;
          core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                    ((CDemonTriangle *)((int)&(this_ptr->triangle_list->vertex1).x + iVar11),
                     file_handle);
          iVar11 = iVar11 + 0x38;
        } while (iVar9 < this_ptr->triangle_count);
      }
      iVar11 = 0;
      iVar12 = 0;
      _fread(this_ptr->triangle_flags,this_ptr->triangle_count,1,file_handle);
      iVar9 = 0;
      while (iVar11 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z
            ) {
        piVar10 = (int *)((int)this_ptr->cube_list->voxel_data + iVar12 + -0x14);
        if (*piVar10 < 1) {
          piVar10[0x15] = 0;
          piVar10[1] = 0;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x58;
        }
        else {
          piVar10[1] = (int)(this_ptr->triangle_list + iVar9);
          puVar8 = this_ptr->triangle_flags + iVar9;
          iVar9 = iVar9 + *piVar10;
          piVar10[0x15] = (int)puVar8;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x58;
        }
      }
    }
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    cube_index = 0;
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Converting .GEO file to version 4");
    local_28 = &this_ptr->cell_size;
    iVar9 = 0;
    local_20 = 0;
    while ((int)cube_index <
           (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z) {
      pSVar2 = this_ptr->cube_list;
      core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
                (this_ptr,&local_44,cube_index);
      piVar10 = (int *)((int)pSVar2->voxel_data + iVar9 + -0x14);
      local_50.x = local_44.x + local_28->x;
      local_50.y = local_44.y + local_28->y;
      local_50.z = local_44.z + local_28->z;
      core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + local_20),
                 (void *)piVar10[1],*piVar10,&local_44,&local_50,(uchar *)piVar10[0x15],
                 (uint *)(piVar10 + 5));
      if ((cube_index & 0xf) == 0) {
        local_14 = cube_index + 1;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)local_14,
                   (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                          (this_ptr->grid_coord).z));
        iVar9 = iVar9 + 0x58;
        local_20 = local_20 + 0x34;
        cube_index = cube_index + 1;
      }
      else {
        iVar9 = iVar9 + 0x58;
        local_20 = local_20 + 0x34;
        cube_index = cube_index + 1;
      }
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr);
    core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
    DAT_02cee5ac = 1;
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    iVar9 = 0;
    for (iVar11 = 0;
        iVar11 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar11 = iVar11 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00457530
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar9),file_handle);
      iVar9 = iVar9 + 0x34;
    }
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x1ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - error reading file");
    return;
  }
  return;
}
