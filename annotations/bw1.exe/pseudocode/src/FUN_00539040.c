// Name: FUN_00539040
// Address: 00539040
// Address Range: [[00539040, 0053908f]]
// Convention: unknown
// Signature: void FUN_00539040(CPackedBitmapSet *param_1,undefined4 param_2,char *param_3,int param_4,int param_5 ,int param_6)

#include "nocturne.h"

void FUN_00539040(CPackedBitmapSet *param_1,uint param_2,char *param_3,int param_4,int param_5 ,int param_6)

{
  CPackedBitmap *pCVar1;
  int in_stack_00000038;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(param_1);
  pCVar1 = cockpit_pkbitmap_cpp_loadPBGFile_FUN_00538750(param_1,param_3,param_4,param_5,param_6,-1)
  ;
  param_1->bitmap_array = pCVar1;
  cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(param_1,param_3);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_00538930(param_1);
  param_1->frames_per_bitmap = in_stack_00000038;
  return;
}
