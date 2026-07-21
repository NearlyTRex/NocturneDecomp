// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
// Address: 0051b6e0
// Address Range: [[0051b6e0, 0051b74e]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(int param_1,byte param_2)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_005a1f00);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) =
       &PTR_core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0_005a1ed4;
  FUN_0051b7d0(param_1);
  iVar1 = core_curtain_cpp_CVector3f_arrdtor_FUN_0043f9a0(param_1 + 0x58,0);
  iVar1 = core_motion_cpp_CMotionController_dtor_FUN_004e1150(iVar1 + -0x58,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
