// Name: cockpit_pkbitmap.cpp_FUN_004f5110
// Address: 004f5110
// Address Range: [[004f5110, 004f5258]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f5110(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_FUN_004f5110(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

{
  _FILE *file_handle;
  CPackedBitmap *this_ptr;
  int iVar1;
  CPackedBitmap *unaff_EDI;
  uchar auStack_170 [248];
  char local_78 [100];
  CPackedBitmap *local_14;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("art",pbg_filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_78,"Unable to open PBG file %s");
    g_INT_01cc4804 = 0x598;
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004c8440(local_78);
  }
  this_ptr = cockpit_pkbitmap_cpp_FUN_004f4f90
                       (bitmap_set_ptr,file_handle,frames_per_bitmap,skip_data_load,
                        selected_bitmap_index);
  local_14 = this_ptr;
  _fclose(file_handle);
  iVar1 = 0;
  if (0 < bitmap_set_ptr->bitmap_count) {
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(this_ptr,pbg_filename);
      this_ptr = this_ptr + 1;
    } while (iVar1 < bitmap_set_ptr->bitmap_count);
  }
  if (apply_palette_flag != 0) {
    iVar1 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(pbg_filename,&stack0xfffffe88);
    if (0 < bitmap_set_ptr->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar1 != selected_bitmap_index))) {
          iVar1 = iVar1 + 1;
          unaff_EDI = unaff_EDI + 1;
          if (bitmap_set_ptr->bitmap_count <= iVar1) {
            return local_14;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
                  (unaff_EDI,auStack_170);
        iVar1 = iVar1 + 1;
        unaff_EDI = unaff_EDI + 1;
      } while (iVar1 < bitmap_set_ptr->bitmap_count);
    }
  }
  return local_14;
}
