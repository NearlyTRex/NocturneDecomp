// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004676c0
// Address: 004676c0
// Address Range: [[004676c0, 0046788b]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004676c0(CDemonRaytrace *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004676c0(CDemonRaytrace *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(this_ptr);
  _DAT_01bc994c = 0;
  _fread(&local_14,4,1,file_handle);
  if (local_14 < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 328;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 331;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(&this_ptr->grid_coord,4,1,file_handle);
  _fread(&(this_ptr->grid_coord).y,4,1,file_handle);
  _fread(&(this_ptr->grid_coord).z,4,1,file_handle);
  _fread(&this_ptr->bbox_min,0xc,1,file_handle);
  _fread(&this_ptr->bbox_max,0xc,1,file_handle);
  _fread(&this_ptr->cell_size,0xc,1,file_handle);
  local_20 = (this_ptr->cell_size).x / 8.0f;
  local_1c = (this_ptr->cell_size).y * 0.125f;
  local_18 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&local_20) {
    (this_ptr->adjusted_size).x = local_20;
    (this_ptr->adjusted_size).y = local_1c;
    (this_ptr->adjusted_size).z = local_18;
  }
  if (local_14 < 4) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 482;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(this_ptr);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_0044aed0
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar2),file_handle);
      iVar2 = iVar2 + 0x34;
    }
  }
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 511;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonRaytrace::loadBinary - error reading file");
  return;
}
