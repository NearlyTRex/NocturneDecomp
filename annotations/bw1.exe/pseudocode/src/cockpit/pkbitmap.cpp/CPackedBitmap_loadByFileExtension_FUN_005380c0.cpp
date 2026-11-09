// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0
// Address: 005380c0
// Address Range: [[005380c0, 0053812e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_005380c0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  
  pCVar2 = this_ptr;
  do {
    str1 = pCVar2;
    if (*(char *)pCVar2 == '.') goto LAB_005380e2;
    if (*(char *)pCVar2 == '\0') break;
    str1 = (CPackedBitmap *)&pCVar2->field_0x1;
    if (*(char *)str1 == '.') goto LAB_005380e2;
    pCVar2 = (CPackedBitmap *)&pCVar2->field_0x2;
  } while (*(char *)str1 != '\0');
  str1 = (CPackedBitmap *)0x0;
LAB_005380e2:
  if (str1 != (CPackedBitmap *)0x0) {
    iVar1 = _stricmp((char *)str1,".raw");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_FUN_00537cb0(this_ptr,apply_palette_flag);
      return;
    }
    iVar1 = _stricmp((char *)str1,".pbm");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_00538530(this_ptr,apply_palette_flag);
      return;
    }
  }
  return;
}
