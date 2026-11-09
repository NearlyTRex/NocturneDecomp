// Name: cockpit_pkbitmap.cpp_FUN_00537cb0
// Address: 00537cb0
// Address Range: [[00537cb0, 00537cfb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_00537cb0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_FUN_00537cb0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  uchar *raw_bitmap_data;
  int in_stack_00000014;
  
  raw_bitmap_data =
       cockpit_ckptutil_c_FUN_0043b2e0
                 ((char *)this_ptr,(void *)0x0,
                  *(int *)&this_ptr->field_0x18 * *(int *)&this_ptr->field_0x1c);
  if (raw_bitmap_data != (uchar *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_00537d00
              (this_ptr,raw_bitmap_data,*(int *)&this_ptr->field_0x18);
    FUN_005c09f0();
    if (in_stack_00000014 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_005380b0(this_ptr);
      return;
    }
  }
  return;
}
