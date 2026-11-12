// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740
// Address: 00510740
// Address Range: [[00510740, 00510807]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740(CPackedBitmapSet *this_ptr,undefined4 param_2,undefined4 param_3,char *param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740(CPackedBitmapSet *this_ptr,uint param_2,uint param_3,char *param_4,int param_5,int param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  char acStack_6c [92];
  
  cockpit_pkbitmap_cpp_FUN_00510670(this_ptr);
  cockpit_pkbitmap_cpp_FUN_005105e0(this_ptr);
  cockpit_pkbmpset_cpp_FUN_005106a0(this_ptr,(param_6 - param_5) + 1);
  this_ptr->height = param_6;
  this_ptr->width = param_5;
  if (param_5 <= param_6) {
    iVar2 = 0;
    iVar1 = param_5;
    do {
      _sprintf(acStack_6c,param_4);
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_FUN_0050f910
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),acStack_6c,param_5,
                 param_6,param_9,param_10);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 <= param_6);
  }
  return;
}
