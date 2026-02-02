// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBGHeader_FUN_0054b930
// Address: 0054b930
// Address Range: [[0054b930, 0054b9a9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBGHeader_FUN_0054b930 (CPackedBitmap *this_ptr,_FILE *file_header)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_writePBGHeader_FUN_0054b930
          (CPackedBitmap *this_ptr,_FILE *file_header)

{
  int iVar1;
  char *pcVar2;
  CPackedBitmap **ppCVar3;
  CPackedBitmap *local_10 [2];
  
  pcVar2 = "PBM\032PBG\032";
  ppCVar3 = local_10;
  for (iVar1 = 1; pcVar2 = pcVar2 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppCVar3 = (CPackedBitmap *)*(uint *)pcVar2;
    ppCVar3 = (CPackedBitmap **)((int)ppCVar3 + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)ppCVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    ppCVar3 = (CPackedBitmap **)((int)ppCVar3 + 1);
  }
  local_10[1] = this_ptr;
  _fwrite(local_10,8,1,file_header);
  if ((file_header->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x538;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}
