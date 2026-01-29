// Name: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// Address: 0054bb40
// Address Range: [[0054bb40, 0054bc98]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40 (CPackedBitmapSet *bitmap_set,char *pbg_filename,char *palette_filename,int param3, int param4,int selected_bitmap_index)

#include "nocturne.h"

int __cdecl
cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
          (CPackedBitmapSet *bitmap_set,char *pbg_filename,char *palette_filename,int param3,
          int param4,int selected_bitmap_index)

{
  _FILE *file_handle;
  CPackedBitmap *pCVar1;
  int iVar2;
  uchar auStack_178 [256];
  char local_78 [100];
  CPackedBitmap *local_14;
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("art",pbg_filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    sprintf(local_78,"Unable to open PBG file %s",pbg_filename);
    g_CurrentLineNumber = 0x595;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_78);
  }
  pCVar1 = cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0
                     (bitmap_set,file_handle,param3,param4,selected_bitmap_index);
  local_14 = pCVar1;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x59a);
  iVar2 = 0;
  if (0 < bitmap_set->bitmap_count) {
    do {
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(pCVar1,pbg_filename);
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < bitmap_set->bitmap_count);
  }
  if (palette_filename != (char *)0x0) {
    iVar2 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(pbg_filename,(char *)auStack_178);
    pCVar1 = local_14;
    if (0 < bitmap_set->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar2 != selected_bitmap_index))) {
          iVar2 = iVar2 + 1;
          pCVar1 = pCVar1 + 1;
          if (bitmap_set->bitmap_count <= iVar2) {
            return (int)local_14;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(pCVar1,auStack_178)
        ;
        iVar2 = iVar2 + 1;
        pCVar1 = pCVar1 + 1;
      } while (iVar2 < bitmap_set->bitmap_count);
    }
  }
  return (int)local_14;
}
