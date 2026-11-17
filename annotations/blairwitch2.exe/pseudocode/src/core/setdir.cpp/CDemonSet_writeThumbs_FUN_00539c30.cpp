// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00539c30
// Address: 00539c30
// Address Range: [[00539c30, 00539d4f]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00539c30(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00539c30(CDemonSet *this_ptr,char *filename)

{
  _FILE *file_handle;
  CZThumb *this_ptr_00;
  int iVar1;
  int iVar2;
  CZThumb *local_1c;
  CDemonSet *local_18;
  int local_14;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70("data",filename,"wb");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\setdir.cpp";
    g_INT_01d046a4 = 0x3cc;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't create %s");
  }
  local_14 = 0;
  if (0 < this_ptr->camera_count) {
    local_18 = this_ptr;
    local_1c = g_CZThumbPool;
    do {
      iVar2 = 1;
      if (local_18->cameras[0].is_panning != 0) {
        iVar2 = 6;
      }
      iVar1 = 0;
      this_ptr_00 = local_1c;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          core_setdir_cpp_CZThumb_write_FUN_00538670(this_ptr_00,file_handle);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar1 < iVar2);
      }
      local_1c = local_1c + 6;
      local_18 = (CDemonSet *)&local_18->cameras[0].enabled;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->camera_count);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\setdir.cpp";
    g_INT_01d046a4 = 0x3d7;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Error writing %s");
    _fclose(file_handle);
    return;
  }
  _fclose(file_handle);
  return;
}
