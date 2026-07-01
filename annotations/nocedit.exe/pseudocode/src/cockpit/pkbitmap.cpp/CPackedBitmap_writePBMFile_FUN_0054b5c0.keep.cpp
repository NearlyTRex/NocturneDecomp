// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// Address: 0054b5c0
// MANUAL RECONSTRUCTION
// Address Range: [[0054b5c0, 0054b68c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap *this_ptr,_FILE *file_handle)

{
  int local_2c [6];
  
  memcpy(local_2c,"PBM\032PBG\032",4);
  local_2c[1] = this_ptr->width;
  local_2c[2] = this_ptr->height;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = this_ptr->width + -1;
  _fwrite(local_2c,0x1c,1,file_handle);
  _fwrite(this_ptr->row_offsets,4,this_ptr->height + 1,file_handle);
  _fwrite(this_ptr->packed_data,(SIZE_T)this_ptr->row_offsets[this_ptr->height],1,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1178;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBM");
  return;
}
