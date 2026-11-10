// Name: core_tvbat.cpp_CTVBat_ctor_FUN_005a3f40
// Address: 005a3f40
// Address Range: [[005a3f40, 005a4099]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005a3f40(CTVBat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005a3f40(CTVBat *this_ptr)

{
  CEnemy *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  float fVar2;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1[1].base.base.actor_name + 4));
  *(CEnemy_full_vtable **)(this_ptr_00[-0x83].model_name + 0xe4) = &g_CTVBatVTable;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[0] = (int)fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5f8b97);
  this_ptr_00[1].part_visibility_flags[6] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[5] = 0x41700000;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[8] = (int)(fVar2 * _DAT_005f8ba0);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[7] = (int)(fVar2 * _DAT_005f8ba4);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  this_ptr_00[1].part_visibility_flags[10] = 0;
  this_ptr_00[1].part_visibility_flags[0xb] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0;
  this_ptr_00[-0xffffffff00000069].model_name[0xb8] = '\0';
  this_ptr_00[-0xffffffff00000069].model_name[0xb9] = '\0';
  this_ptr_00[-0xffffffff00000069].model_name[0xba] = '\0';
  this_ptr_00[-0xffffffff00000069].model_name[0xbb] = '\0';
  this_ptr_00[1].model_name[0x3c] = '\0';
  this_ptr_00[1].model_name[0x3d] = '\0';
  this_ptr_00[1].model_name[0x3e] = '\0';
  this_ptr_00[1].model_name[0x3f] = '\0';
  *(byte *)(this_ptr_00[1].part_visibility_flags + 0x10) = 0;
  this_ptr_00[1].model_name[0x2c] = '\0';
  this_ptr_00[1].model_name[0x2d] = '\0';
  this_ptr_00[1].model_name[0x2e] = 'p';
  this_ptr_00[1].model_name[0x2f] = 'A';
  this_ptr_00[1].model_name[0x30] = '\0';
  this_ptr_00[1].model_name[0x31] = '\0';
  this_ptr_00[1].model_name[0x32] = -0x10;
  this_ptr_00[1].model_name[0x33] = 'A';
  this_ptr_00[1].model_name[0x38] = '\0';
  this_ptr_00[1].model_name[0x39] = '\0';
  this_ptr_00[1].model_name[0x3a] = '\0';
  this_ptr_00[1].model_name[0x3b] = '\0';
  this_ptr_00[1].part_visibility_flags[9] = (int)fVar2;
  return (CTVBat *)(this_ptr_00[-0x83].part_visibility_flags + 2);
}
