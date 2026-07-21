// Name: core_motion.cpp_CMotionController_dtor_FUN_004e1150
// Address: 004e1150
// Address Range: [[004e1150, 004e1193]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(int param_1,uint param_2)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_005a0d30);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) =
       &PTR_core_motion_cpp_CMotionController_dtor_FUN_004e1150_005a0d24;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
