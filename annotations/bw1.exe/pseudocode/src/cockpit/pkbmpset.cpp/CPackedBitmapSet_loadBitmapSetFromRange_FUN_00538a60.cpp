// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60
// Address: 00538a60
// Address Range: [[00538a60, 00538b27]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  char acStack_64 [84];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_00538900(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005389c0(this_ptr,(param_6 - param_5) + 1);
  this_ptr->height = param_8;
  this_ptr->width = param_7;
  if (param_5 <= param_6) {
    iVar1 = 0;
    do {
      _sprintf(acStack_64,(char *)param_6);
      param_5 = param_5 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_64,param_7,
                 param_8,in_stack_0000002c,in_stack_00000030);
      iVar1 = iVar1 + 0x24;
    } while (param_5 <= param_6);
  }
  return;
}
