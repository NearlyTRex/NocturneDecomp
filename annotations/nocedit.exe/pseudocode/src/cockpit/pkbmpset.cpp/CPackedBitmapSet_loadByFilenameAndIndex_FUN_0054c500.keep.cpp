// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
// Address: 0054c500
// MANUAL RECONSTRUCTION
// Address Range: [[0054c500, 0054c5c9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  if (this_ptr->filename[0] == '\0') {
    if (-1 < bitmap_index) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                (this_ptr->bitmap_array + bitmap_index,apply_palette_flag);
      return;
    }
    iVar1 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),apply_palette_flag);
        iVar2 = iVar2 + sizeof(CPackedBitmap);
      } while (iVar1 < this_ptr->bitmap_count);
    }
  }
  else {
    str1 = strchr(this_ptr->filename,'.');
    if (str1 != (char *)0x0) {
      iVar1 = _stricmp(str1,".raw");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0
                  (this_ptr,apply_palette_flag,bitmap_index);
        return;
      }
      iVar1 = _stricmp(str1,".pbg");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
                  (this_ptr,apply_palette_flag,bitmap_index);
        return;
      }
    }
  }
  return;
}
