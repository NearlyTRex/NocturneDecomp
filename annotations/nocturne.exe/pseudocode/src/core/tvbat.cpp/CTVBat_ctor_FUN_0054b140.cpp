// Name: core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
// Address: 0054b140
// Address Range: [[0054b140, 0054b299]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(CTVBat *this_ptr)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(CTVBat *this_ptr)

{
  CEnemy *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar2;
  float fVar3;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1[1].base.base.actor_name + 4));
  *(byte ***)(this_ptr_00[-0x7f].model_name + 0x30) =
       &PTR_core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0_005a38f4;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  iVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  this_ptr_00[1].part_visibility_flags[0] = iVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr_00,"bat.kfm");
  this_ptr_00[1].part_visibility_flags[6] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[5] = 0x41700000;
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  this_ptr_00[1].part_visibility_flags[8] = (int)(fVar3 * 10.0f);
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  this_ptr_00[1].part_visibility_flags[7] = (int)(fVar3 * 2.0f);
  iVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
  this_ptr_00[1].part_visibility_flags[10] = 0;
  this_ptr_00[1].part_visibility_flags[0xb] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0;
  this_ptr_00[-0x66].part_visibility_flags[0x17] = 0;
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
  this_ptr_00[1].part_visibility_flags[9] = iVar2;
  return (CTVBat *)(this_ptr_00[-0x80].model_name + 0x60);
}
