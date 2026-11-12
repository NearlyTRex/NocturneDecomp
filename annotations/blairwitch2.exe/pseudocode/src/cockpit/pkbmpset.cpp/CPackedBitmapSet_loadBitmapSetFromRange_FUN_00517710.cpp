// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710
// Address: 00517710
// Address Range: [[00517710, 005177d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  char acStack_74 [100];
  
  cockpit_pkbitmap_cpp_FUN_00517640(this_ptr);
  cockpit_pkbitmap_cpp_FUN_005175b0(this_ptr);
  cockpit_pkbmpset_cpp_FUN_00517670(this_ptr,(param_6 - param_5) + 1);
  this_ptr->height = param_4;
  this_ptr->width = param_3;
  if (param_5 <= param_6) {
    iVar1 = 0;
    do {
      _sprintf(acStack_74,param_2);
      param_5 = param_5 + 1;
      cockpit_pkbitmap_cpp_FUN_005168e0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_74,param_3,
                 param_4,param_7,param_8);
      iVar1 = iVar1 + 0x24;
    } while (param_5 <= param_6);
  }
  return;
}
