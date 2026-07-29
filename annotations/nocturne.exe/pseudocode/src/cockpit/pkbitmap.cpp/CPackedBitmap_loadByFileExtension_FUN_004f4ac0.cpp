// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0
// Address: 004f4ac0
// Address Range: [[004f4ac0, 004f4b2e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  
  pCVar2 = this_ptr;
  do {
    str1 = pCVar2;
    if (pCVar2->filename[0] == '.') goto LAB_004f4ae2;
    if (pCVar2->filename[0] == '\0') break;
    str1 = (CPackedBitmap *)(pCVar2->filename + 1);
    if (str1->filename[0] == '.') goto LAB_004f4ae2;
    pCVar2 = (CPackedBitmap *)(pCVar2->filename + 2);
  } while (str1->filename[0] != '\0');
  str1 = (CPackedBitmap *)0x0;
LAB_004f4ae2:
  if (str1 != (CPackedBitmap *)0x0) {
    iVar1 = _stricmp(str1->filename,".raw");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
                (this_ptr,apply_palette_flag);
      return;
    }
    iVar1 = _stricmp(str1->filename,".pbm");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0(this_ptr,apply_palette_flag);
      return;
    }
  }
  return;
}
