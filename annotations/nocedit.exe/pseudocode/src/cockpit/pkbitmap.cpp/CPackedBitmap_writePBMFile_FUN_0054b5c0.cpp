// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// Address: 0054b5c0
// Address Range: [[0054b5c0, 0054b68c]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
          (CPackedBitmap *this_ptr,FILE *file_handle)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "PBM\032PBG\032";
  pcVar3 = &stack0xffffffd4;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&stack0xffffffd4,0x1c,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->row_pointers,4,this_ptr->height + 1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->packed_data,(SIZE_T)this_ptr->row_pointers[this_ptr->height],1,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x49a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBM");
  return;
}
