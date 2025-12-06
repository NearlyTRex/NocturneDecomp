// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
// Address: 0054bd00
// Address Range: [[0054bd00, 0054bd5c]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet * this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  this_ptr->extension = this_ptr->bitmap_array->width;
  this_ptr->base_path = this_ptr->bitmap_array->height;
  iVar1 = 1;
  if (1 < this_ptr->bitmap_count) {
    iVar2 = 0x24;
    do {
      if (this_ptr->extension != *(int *)(this_ptr->bitmap_array->filename + iVar2 + 0x18)) {
        this_ptr->extension = 0;
      }
      if (this_ptr->base_path != *(int *)(this_ptr->bitmap_array->filename + iVar2 + 0x1c)) {
        this_ptr->base_path = 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  return;
}
