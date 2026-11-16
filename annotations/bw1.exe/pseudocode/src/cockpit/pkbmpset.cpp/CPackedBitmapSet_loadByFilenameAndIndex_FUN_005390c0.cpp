// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_005390c0
// Address: 005390c0
// Address Range: [[005390c0, 00539189]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_005390c0(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_005390c0(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *pcVar3;
  
  if (this_ptr->filename[0] == '\0') {
    if (-1 < bitmap_index) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0
                (this_ptr->bitmap_array + bitmap_index,apply_palette_flag);
      return;
    }
    iVar1 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),apply_palette_flag);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < this_ptr->bitmap_count);
    }
  }
  else {
    pcVar3 = this_ptr->filename;
    do {
      str1 = pcVar3;
      if (*pcVar3 == '.') goto LAB_00539142;
      if (*pcVar3 == '\0') break;
      str1 = pcVar3 + 1;
      if (*str1 == '.') goto LAB_00539142;
      pcVar3 = pcVar3 + 2;
    } while (*str1 != '\0');
    str1 = (char *)0x0;
LAB_00539142:
    if (str1 != (char *)0x0) {
      iVar1 = _stricmp(str1,(char *)0x5ed401);
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_00538db0
                  (this_ptr,apply_palette_flag,bitmap_index);
        return;
      }
      iVar1 = _stricmp(str1,(char *)0x5ed406);
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00539090
                  (this_ptr,apply_palette_flag,bitmap_index);
        return;
      }
    }
  }
  return;
}
