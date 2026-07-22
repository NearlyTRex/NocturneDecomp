// Name: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630
// Address: 00494630
// Address Range: [[00494630, 00494699]]
// Convention: unknown
// Signature: int core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(undefined4 param_1)

#include "nocturne.h"

int core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x17c);
  iVar1 = core_course_cpp_CCourse_ctor_FUN_0043b5d0(iVar1 + 0x17c);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0xc);
  *(byte ***)(iVar1 + -0x1b8) =
       &PTR_core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0_0059db84;
  *(uint *)(iVar1 + -0x1b0) = 0;
  *(byte *)(iVar1 + -0x1ac) = 0;
  *(uint *)(iVar1 + -0x18c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x304;
}
