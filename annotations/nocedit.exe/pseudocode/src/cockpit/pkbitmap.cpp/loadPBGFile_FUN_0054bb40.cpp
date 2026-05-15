// Name: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// Address: 0054bb40
// Address Range: [[0054bb40, 0054bc98]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

{
  _FILE *file_handle;
  CPackedBitmap *pCVar1;
  int iVar2;
  int iVar1;
  CPackedBitmap *pCVar2;
  uchar auStack_178 [256];
  char local_78 [100];
  CPackedBitmap *local_14;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("art",pbg_filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_78,"Unable to open PBG file %s",pbg_filename);
    g_CurrentLineNumber = 0x595;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_78);
  }
  pCVar1 = cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0
                     (bitmap_set_ptr,file_handle,frames_per_bitmap,skip_data_load,
                      selected_bitmap_index);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x59a);
  iVar2 = 0;
  pCVar2 = pCVar1;
  if (0 < bitmap_set_ptr->bitmap_count) {
    do {
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(pCVar2,pbg_filename);
      pCVar2 = pCVar2 + 1;
    } while (iVar2 < bitmap_set_ptr->bitmap_count);
  }
  if (apply_palette_flag != 0) {
    iVar1 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(pbg_filename,auStack_178);
    pCVar2 = pCVar1;
    if (0 < bitmap_set_ptr->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar1 != selected_bitmap_index))) {
          iVar1 = iVar1 + 1;
          pCVar2 = pCVar2 + 1;
          if (bitmap_set_ptr->bitmap_count <= iVar1) {
            return pCVar1;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(pCVar2,auStack_178)
        ;
        iVar1 = iVar1 + 1;
        pCVar2 = pCVar2 + 1;
      } while (iVar1 < bitmap_set_ptr->bitmap_count);
    }
  }
  return pCVar1;
}
