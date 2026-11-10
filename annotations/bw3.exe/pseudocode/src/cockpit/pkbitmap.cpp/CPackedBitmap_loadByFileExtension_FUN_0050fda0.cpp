// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0
// Address: 0050fda0
// Address Range: [[0050fda0, 0050fe0e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  
  pCVar2 = this_ptr;
  do {
    str1 = pCVar2;
    if (pCVar2->filename[0] == '.') goto LAB_0050fdc2;
    if (pCVar2->filename[0] == '\0') break;
    str1 = (CPackedBitmap *)(pCVar2->filename + 1);
    if (str1->filename[0] == '.') goto LAB_0050fdc2;
    pCVar2 = (CPackedBitmap *)(pCVar2->filename + 2);
  } while (str1->filename[0] != '\0');
  str1 = (CPackedBitmap *)0x0;
LAB_0050fdc2:
  if (str1 != (CPackedBitmap *)0x0) {
    iVar1 = _stricmp(str1->filename,(char *)0x5cbd04);
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_FUN_0050f990(this_ptr,apply_palette_flag);
      return;
    }
    iVar1 = _stricmp(str1->filename,(char *)0x5cbd09);
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_00510210(this_ptr,apply_palette_flag);
      return;
    }
  }
  return;
}
