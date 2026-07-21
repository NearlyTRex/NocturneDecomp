// Name: FUN_00552830
// Address: 00552830
// Address Range: [[00552830, 0055287d]]
// Convention: unknown
// Signature: undefined4 FUN_00552830(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00552830(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_005a4110);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
