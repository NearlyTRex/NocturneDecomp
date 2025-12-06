// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
// Address: 0054b4b0
// Address Range: [[0054b4b0, 0054b51e]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap * this_ptr, int processing_flags)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
          (CPackedBitmap *this_ptr,int processing_flags)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  int in_stack_0000000c;
  int in_stack_00000010;
  
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
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->filename,".raw");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
                (this_ptr,in_stack_0000000c);
      return;
    }
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->filename,".pbm");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910(this_ptr,in_stack_00000010);
      return;
    }
  }
  return;
}
