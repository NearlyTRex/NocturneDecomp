// Name: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
// Address: 00494f50
// Address Range: [[00494f50, 00495030]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  _fwrite(&g_GeoFileFormatVersion,4,1,file_handle);
  _fwrite(&this_ptr->grid_coord,4,1,file_handle);
  _fwrite(&(this_ptr->grid_coord).y,4,1,file_handle);
  _fwrite(&(this_ptr->grid_coord).z,4,1,file_handle);
  _fwrite(&this_ptr->bbox_min,0xc,1,file_handle);
  _fwrite(&this_ptr->bbox_max,0xc,1,file_handle);
  iVar1 = 0;
  _fwrite(&this_ptr->cell_size,0xc,1,file_handle);
  for (iVar2 = 0;
      iVar2 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
      iVar2 = iVar2 + 1) {
    core_dcube_cpp_CDemonCube_save_FUN_00457430
              ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar1),file_handle);
    iVar1 = iVar1 + 0x34;
  }
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0x251;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::saveBinary - error writing file");
  return;
}
