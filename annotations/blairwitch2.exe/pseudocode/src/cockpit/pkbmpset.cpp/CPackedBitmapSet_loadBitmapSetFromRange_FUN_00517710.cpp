// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710
// Address: 00517710
// Address Range: [[00517710, 005177d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int in_stack_00000024;
  int in_stack_00000028;
  char acStack_6c [92];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_005175b0(this_ptr);
  cockpit_pkbmpset_cpp_FUN_00517670(this_ptr,(param_6 - param_5) + 1);
  this_ptr->height = param_6;
  this_ptr->width = param_5;
  if (param_5 <= param_6) {
    iVar2 = 0;
    iVar1 = param_5;
    do {
      _sprintf(acStack_6c,(char *)param_4);
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),acStack_6c,param_5,
                 param_6,in_stack_00000024,in_stack_00000028);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 <= param_6);
  }
  return;
}
