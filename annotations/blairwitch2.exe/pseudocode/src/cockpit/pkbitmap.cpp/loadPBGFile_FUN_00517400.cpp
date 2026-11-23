// Name: cockpit_pkbitmap.cpp_loadPBGFile_FUN_00517400
// Address: 00517400
// Address Range: [[00517400, 00517548]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_00517400(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_00517400(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

{
  _FILE *file_handle;
  CPackedBitmap *pCVar1;
  int iVar2;
  CPackedBitmap *this_ptr;
  char *in_stack_0000001c;
  int in_stack_00000020;
  uchar auStack_15c [228];
  char acStack_78 [104];
  
  file_handle = engine_dosio_cpp_getFile_FUN_00460c70("art",pbg_filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_78,"Unable to open PBG file %s");
    g_CurrentLineNumber = 1460;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_78);
  }
  pCVar1 = cockpit_pkbitmap_cpp_parsePBGFile_FUN_00517280
                     (bitmap_set_ptr,file_handle,frames_per_bitmap,skip_data_load,
                      selected_bitmap_index);
  _fclose(file_handle);
  iVar2 = 0;
  this_ptr = pCVar1;
  if (0 < bitmap_set_ptr->bitmap_count) {
    do {
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(this_ptr,in_stack_0000001c);
      this_ptr = this_ptr + 1;
    } while (iVar2 < bitmap_set_ptr->bitmap_count);
  }
  if (in_stack_00000020 != 0) {
    iVar2 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(in_stack_0000001c,&stack0xfffffe9c);
    if (0 < bitmap_set_ptr->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar2 != selected_bitmap_index))) {
          iVar2 = iVar2 + 1;
          pbg_filename = (char *)((int)pbg_filename + 0x24);
          if (bitmap_set_ptr->bitmap_count <= iVar2) {
            return pCVar1;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
                  ((CPackedBitmap *)pbg_filename,auStack_15c);
        iVar2 = iVar2 + 1;
        pbg_filename = (char *)((int)pbg_filename + 0x24);
      } while (iVar2 < bitmap_set_ptr->bitmap_count);
    }
  }
  return pCVar1;
}
