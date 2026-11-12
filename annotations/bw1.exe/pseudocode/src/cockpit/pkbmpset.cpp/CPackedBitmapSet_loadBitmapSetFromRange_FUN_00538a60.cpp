// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60
// Address: 00538a60
// Address Range: [[00538a60, 00538b27]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int in_stack_00000024;
  char acStack_70 [96];
  
  cockpit_pkbmpset_cpp_FUN_00538990(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_00538900(this_ptr);
  cockpit_pkbmpset_cpp_FUN_005389c0(this_ptr,(param_6 - param_5) + 1);
  this_ptr->height = param_5;
  this_ptr->width = param_4;
  if (param_5 <= param_6) {
    iVar2 = 0;
    iVar1 = param_5;
    do {
      _sprintf(acStack_70,(char *)param_3);
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),acStack_70,param_4,
                 param_5,param_8,in_stack_00000024);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 <= param_6);
  }
  return;
}
