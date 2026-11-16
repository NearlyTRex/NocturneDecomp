// Name: FUN_00510d70
// Address: 00510d70
// Address Range: [[00510d70, 00510d97]]
// Convention: unknown
// Signature: void FUN_00510d70(CPackedBitmapSet *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00510d70(CPackedBitmapSet *param_1,uint param_2,uint param_3)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00510670(param_1);
  FUN_00510d20(param_1,param_1->filename,param_3,param_1->frames_per_bitmap,0);
  return;
}
