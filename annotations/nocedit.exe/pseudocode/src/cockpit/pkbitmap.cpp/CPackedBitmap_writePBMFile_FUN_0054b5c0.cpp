// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// Address: 0054b5c0
// Address Range: [[0054b5c0, 0054b68c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 (CPackedBitmap *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
          (CPackedBitmap *this_ptr,_FILE *file_handle)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int local_2c [6];
  int local_14;
  
  pcVar2 = "PBM\032PBG\032";
  piVar3 = local_2c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    piVar3 = (int *)((int)piVar3 + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)piVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  local_2c[1] = this_ptr->width;
  local_2c[2] = this_ptr->height;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = this_ptr->width + -1;
  local_14 = this_ptr->height + -1;
  _fwrite(local_2c,0x1c,1,file_handle);
  _fwrite(this_ptr->row_pointers,4,this_ptr->height + 1,file_handle);
  _fwrite(this_ptr->packed_data,(SIZE_T)this_ptr->row_pointers[this_ptr->height],1,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x49a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBM");
  return;
}
