// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
// Address: 00415e40
// Address Range: [[00415e40, 00415edb]]
// Convention: unknown
// Signature: int core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(int param_1,byte param_2)

#include "nocturne.h"

int core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CBodyPartTypeInfo_0059a860);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_core_bodypart_cpp_CBodyPart_setup_FUN_00416500_0059a744;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
  iVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(param_1 + 0xcb4,0);
  iVar1 = core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_00418130(iVar1 + -0x56c,0);
  iVar1 = core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_00418110(iVar1 + -0x4c0,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x288,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
