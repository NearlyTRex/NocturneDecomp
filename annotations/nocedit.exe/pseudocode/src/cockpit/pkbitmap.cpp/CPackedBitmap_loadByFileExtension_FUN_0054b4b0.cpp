// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
// Address: 0054b4b0
// Address Range: [[0054b4b0, 0054b51e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap *this_ptr,int processing_flags)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap *this_ptr,int processing_flags)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  
  pCVar2 = this_ptr;
  do {
    str1 = pCVar2;
    if (pCVar2->filename[0] == '.') goto LAB_0054b4d2;
    if (pCVar2->filename[0] == '\0') break;
    str1 = (CPackedBitmap *)(pCVar2->filename + 1);
    if (str1->filename[0] == '.') goto LAB_0054b4d2;
    pCVar2 = (CPackedBitmap *)(pCVar2->filename + 2);
  } while (str1->filename[0] != '\0');
  str1 = (CPackedBitmap *)0x0;
LAB_0054b4d2:
  if (str1 != (CPackedBitmap *)0x0) {
    iVar1 = _stricmp(str1->filename,".raw");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
                (this_ptr,processing_flags);
      return;
    }
    iVar1 = _stricmp(str1->filename,".pbm");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_0054b910(this_ptr,processing_flags);
      return;
    }
  }
  return;
}
