// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
// Address: 004947a0
// MANUAL RECONSTRUCTION
// Address Range: [[004947a0, 00494dd4]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace *this_ptr,_FILE *file_handle)

{
  int iVar1;
  SIZE_T *pSVar3;
  SIZE_T *pSVar4;
  void *pvVar5;
  CDemonPart *pCVar6;
  CDemonPart *pCVar7;
  CDemonPart *this_ptr_00;
  CDemonPart *pCVar2;
  uchar *puVar8;
  int iVar3;
  uint cube_index;
  SVoxelCubeMetadata *piVar4;
  SVoxelCubeMetadata *piVar10;
  int iVar11;
  SVoxelCubeMetadata *buffer;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  CVector3f *local_28;
  int local_1c;
  int local_18;
  int local_14;
  SVoxelCubeMetadata *pSVar2;
  SIZE_T SVar1;
  
  local_18 = 0;
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  INT_02cee5ac = 0;
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
      for (local_1c = 0;
          iVar1 = (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z,
          iVar1 - local_1c != 0 && local_1c <= iVar1; local_1c = local_1c + 1) {
        buffer = &this_ptr->cube_list[local_1c];
        _fread(&buffer->triangle_count,4,1,file_handle);
        SVar1 = buffer->triangle_count;
        if (SVar1 != 0) {
          pSVar3 = (SIZE_T *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                             (SVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0x172);
          pSVar4 = pSVar3;
          if (pSVar3 != (SIZE_T *)0x0) {
            pSVar4 = pSVar3 + 1;
            *pSVar3 = SVar1;
          }
          buffer->triangle_list = (CDemonTriangle *)pSVar4;
          pvVar5 = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                             (buffer->triangle_count,"..\\core\\dtrace.cpp",0x173);
          buffer->triangle_flags = (uchar *)pvVar5;
          if ((buffer->triangle_list == (CDemonTriangle *)0x0) || (pvVar5 == (void *)0x0)) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x175;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::loadBinary - out of memory!");
          }
          if (0 < buffer->triangle_count) {
            iVar1 = 0;
            do {
              core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                        (&buffer->triangle_list[iVar1],file_handle);
              iVar1 = iVar1 + 1;
            } while (iVar1 < buffer->triangle_count);
          }
          pCVar6 = (CDemonPart *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                             (sizeof(CDemonPart),"..\\core\\dtrace.cpp",0x17a);
          pCVar7 = (CDemonPart *)0x0;
          if (pCVar6 != (CDemonPart *)0x0) {
            pCVar7 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(pCVar6);
          }
          buffer->part_ptr = pCVar7;
          core_dtrace_cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710
                    (this_ptr,pCVar7,local_1c,file_handle);
        }
        _fread(buffer->voxel_data,sizeof(buffer->voxel_data),1,file_handle);
        if (local_2c < 2) {
          memset(buffer->triangle_flags,0,buffer->triangle_count);
        }
        else {
          _fread(buffer->triangle_flags,buffer->triangle_count,1,file_handle);
        }
        local_18 = local_18 + buffer->triangle_count;
      }
      core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(this_ptr);
    }
    else {
      iVar1 = 0;
      while (iVar1 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z)
      {
        piVar4 = &this_ptr->cube_list[iVar1];
        _fread(&piVar4->triangle_count,4,1,file_handle);
        if (piVar4->triangle_count < 1) {
          memset(piVar4->voxel_data,0,sizeof(piVar4->voxel_data));
          iVar1 = iVar1 + 1;
        }
        else {
          this_ptr_00 = (CDemonPart *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                                  (sizeof(CDemonPart),"..\\core\\dtrace.cpp",0x19a);
          pCVar2 = (CDemonPart *)0x0;
          if (this_ptr_00 != (CDemonPart *)0x0) {
            pCVar2 = core_dpart_cpp_CDemonPart_ctor_FUN_00482110(this_ptr_00);
          }
          piVar4->part_ptr = pCVar2;
          if (pCVar2 == (CDemonPart *)0x0) {
            g_CurrentFilename = "..\\core\\dtrace.cpp";
            g_CurrentLineNumber = 0x19b;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for cube model loading dtrace database");
          }
          core_dtrace_cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710
                    (this_ptr,piVar4->part_ptr,iVar1,file_handle);
          _fread(piVar4->voxel_data,sizeof(piVar4->voxel_data),1,file_handle);
          local_18 = local_18 + piVar4->triangle_count;
          iVar1 = iVar1 + 1;
        }
      }
      iVar1 = 0;
      this_ptr->triangle_count = local_18;
      core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
      if (0 < this_ptr->triangle_count) {
        do {
          core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
                    (&this_ptr->triangle_list[iVar1],file_handle);
          iVar1 = iVar1 + 1;
        } while (iVar1 < this_ptr->triangle_count);
      }
      iVar3 = 0;
      _fread(this_ptr->triangle_flags,this_ptr->triangle_count,1,file_handle);
      iVar1 = 0;
      while (iVar3 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z)
      {
        piVar4 = &this_ptr->cube_list[iVar3];
        if (piVar4->triangle_count < 1) {
          piVar4->triangle_flags = (uchar *)0x0;
          piVar4->triangle_list = (CDemonTriangle *)0x0;
          iVar3 = iVar3 + 1;
        }
        else {
          piVar4->triangle_list = this_ptr->triangle_list + iVar1;
          puVar8 = this_ptr->triangle_flags + iVar1;
          iVar1 = iVar1 + piVar4->triangle_count;
          piVar4->triangle_flags = puVar8;
          iVar3 = iVar3 + 1;
        }
      }
    }
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    cube_index = 0;
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Converting .GEO file to version 4");
    local_28 = &this_ptr->cell_size;
    while ((int)cube_index <
           (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z) {
      pSVar2 = this_ptr->cube_list;
      core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
                (this_ptr,&local_44,cube_index);
      piVar10 = &pSVar2[cube_index];
      local_50.x = local_44.x + local_28->x;
      local_50.y = local_44.y + local_28->y;
      local_50.z = local_44.z + local_28->z;
      core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
                (&this_ptr->cube_data[cube_index],
                 piVar10->triangle_list,piVar10->triangle_count,&local_44,&local_50,
                 piVar10->triangle_flags,piVar10->voxel_data);
      if ((cube_index & 0xf) == 0) {
        local_14 = cube_index + 1;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)local_14,
                   (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                          (this_ptr->grid_coord).z));
      }
      cube_index = cube_index + 1;
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr);
    core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
    INT_02cee5ac = 1;
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
    for (iVar11 = 0;
        iVar11 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar11 = iVar11 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00457530
                (&this_ptr->cube_data[iVar11],file_handle);
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
