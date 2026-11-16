// Name: FUN_00517d40
// Address: 00517d40
// Address Range: [[00517d40, 00517d67]]
// Convention: unknown
// Signature: void FUN_00517d40(CPackedBitmapSet *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00517d40(CPackedBitmapSet *param_1,uint param_2,uint param_3)

{
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(param_1);
  FUN_00517cf0(param_1,param_1->filename,param_3,param_1->frames_per_bitmap,0);
  return;
}
