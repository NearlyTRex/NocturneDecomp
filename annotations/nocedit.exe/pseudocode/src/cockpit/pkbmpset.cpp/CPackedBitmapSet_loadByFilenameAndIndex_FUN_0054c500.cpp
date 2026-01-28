// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
// Address: 0054c500
// Address Range: [[0054c500, 0054c5c9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 (CPackedBitmapSet *this_ptr,char *filename,int bitmap_index)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
          (CPackedBitmapSet *this_ptr,char *filename,int bitmap_index)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *pcVar3;
  
  if (this_ptr->filename[0] == '\0') {
    if (-1 < bitmap_index) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                (this_ptr->bitmap_array + bitmap_index,(int)filename);
      return;
    }
    iVar1 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),(int)filename);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < this_ptr->bitmap_count);
    }
  }
  else {
    pcVar3 = this_ptr->filename;
    do {
      str1 = pcVar3;
      if (*pcVar3 == '.') goto LAB_0054c582;
      if (*pcVar3 == '\0') break;
      str1 = pcVar3 + 1;
      if (*str1 == '.') goto LAB_0054c582;
      pcVar3 = pcVar3 + 2;
    } while (*str1 != '\0');
    str1 = (char *)0x0;
LAB_0054c582:
    if (str1 != (char *)0x0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,".raw");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(this_ptr);
        return;
      }
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,".pbg");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(this_ptr,filename);
        return;
      }
    }
  }
  return;
}
