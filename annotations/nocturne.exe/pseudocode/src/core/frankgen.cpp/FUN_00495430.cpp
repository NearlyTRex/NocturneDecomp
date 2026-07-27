// Name: core_frankgen.cpp_FUN_00495430
// Address: 00495430
// Address Range: [[00495430, 00495494]]
// Convention: unknown
// Signature: int core_frankgen_cpp_FUN_00495430(int param_1,byte param_2)

#include "nocturne.h"

int core_frankgen_cpp_FUN_00495430(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CFrankenstienMachineTypeInfo_0059dc60)
    ;
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0(param_1 + 0x2f8,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x2f8,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
