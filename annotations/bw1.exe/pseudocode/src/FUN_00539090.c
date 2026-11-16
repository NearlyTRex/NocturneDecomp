// Name: FUN_00539090
// Address: 00539090
// Address Range: [[00539090, 005390b7]]
// Convention: unknown
// Signature: void FUN_00539090(CPackedBitmapSet *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00539090(CPackedBitmapSet *param_1,uint param_2,uint param_3)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(param_1);
  FUN_00539040(param_1,param_1->filename,param_3,param_1->frames_per_bitmap,0);
  return;
}
