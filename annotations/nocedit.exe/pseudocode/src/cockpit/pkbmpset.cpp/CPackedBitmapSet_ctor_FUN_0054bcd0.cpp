// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
// Address: 0054bcd0
// Address Range: [[0054bcd0, 0054bcff]]
// Convention: __cdecl
// Signature: CPackedBitmapSet * __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

CPackedBitmapSet * __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr)

{
  CPackedBitmapSet *pCVar1;
  
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  this_ptr->width = 0;
  this_ptr->height = 0;
  pCVar1 = memset(this_ptr->filename,0,0x14);
  return pCVar1;
}
