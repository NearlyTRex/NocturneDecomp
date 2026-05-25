// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
// Address: 00575e40
// MANUAL RECONSTRUCTION
// Address Range: [[00575e40, 00575f5a]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet *this_ptr,char *filename)

{
  _FILE *file_handle;
  CZThumb *this_ptr_00;
  int iVar1;
  int iVar2;
  CZThumb *local_1c;
  int local_14;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"wb");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x3bf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",filename);
  }
  local_14 = 0;
  if (0 < this_ptr->camera_count) {
    local_1c = g_CZThumbPool;
    do {
      iVar2 = 1;
      if (this_ptr->cameras[local_14].is_panning != 0) {
        iVar2 = 6;
      }
      iVar1 = 0;
      this_ptr_00 = local_1c;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          core_setdir_cpp_CZThumb_write_FUN_00574b20(this_ptr_00,file_handle);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar1 < iVar2);
      }
      local_1c = local_1c + 6;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->camera_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x3ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s",filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setdir.cpp",0x3cb);
  return;
}
