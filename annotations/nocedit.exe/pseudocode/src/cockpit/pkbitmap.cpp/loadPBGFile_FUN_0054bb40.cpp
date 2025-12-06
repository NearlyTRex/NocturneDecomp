// Name: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// Address: 0054bb40
// Address Range: [[0054bb40, 0054bc98]]
// Convention: __cdecl
// Signature: int cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet * bitmap_set, char * pbg_filename, char * palette_filename, int param3, int param4, int selected_bitmap_index)

#include "nocturne.h"

int __cdecl
cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
          (CPackedBitmapSet *bitmap_set,char *pbg_filename,char *palette_filename,int param3,
          int param4,int selected_bitmap_index)

{
  FILE *file_handle;
  CPackedBitmap *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CPackedBitmapSet *this_ptr_00;
  int unaff_retaddr;
  char *in_stack_0000001c;
  int in_stack_00000020;
  uchar auStack_160 [236];
  char acStack_74 [4];
  char acStack_70 [96];
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("art",pbg_filename,"rb");
  if (file_handle == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_74,"Unable to open PBG file %s",palette_filename);
    g_CurrentLineNumber = 0x595;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_70);
  }
  this_ptr = cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0
                       (bitmap_set,file_handle,(int)in_stack_0000001c,in_stack_00000020,
                        selected_bitmap_index);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x59a);
  iVar1 = 0;
  if (0 < bitmap_set->bitmap_count) {
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,in_stack_0000001c);
      this_ptr = this_ptr + 1;
    } while (iVar1 < bitmap_set->bitmap_count);
  }
  if (in_stack_00000020 != 0) {
    iVar1 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(in_stack_0000001c,&stack0xfffffe9c);
    this_ptr_00 = bitmap_set;
    if (0 < bitmap_set->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar1 != selected_bitmap_index))) {
          iVar1 = iVar1 + 1;
          this_ptr_00 = (CPackedBitmapSet *)&this_ptr_00->config_param;
          if (bitmap_set->bitmap_count <= iVar1) {
            return unaff_retaddr;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
                  ((CPackedBitmap *)this_ptr_00,auStack_160);
        iVar1 = iVar1 + 1;
        this_ptr_00 = (CPackedBitmapSet *)&this_ptr_00->config_param;
      } while (iVar1 < bitmap_set->bitmap_count);
    }
  }
  return unaff_retaddr;
}
