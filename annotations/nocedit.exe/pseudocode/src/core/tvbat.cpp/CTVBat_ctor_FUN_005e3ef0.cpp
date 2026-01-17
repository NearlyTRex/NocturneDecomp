// Name: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// Address: 005e3ef0
// Address Range: [[005e3ef0, 005e3f41]]
// Convention: __cdecl
// Signature: CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat * this_ptr)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

{
  CEnemy *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  float fVar2;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)
                           (pCVar1[1].base_character.base_actor.actor_name + 0xc));
  *(CDemonActor_vtable **)(this_ptr_00[-0x80].model_name + 0x1c) = &g_CTVBatVTable;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[0] = (int)fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  this_ptr_00[1].part_visibility_flags[6] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[5] = 0x41700000;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[8] = (int)(fVar2 * 10.0f);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[7] = (int)(fVar2 * 2.0f);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr_00[1].part_visibility_flags[10] = 0;
  this_ptr_00[1].part_visibility_flags[0xb] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0;
  this_ptr_00[-0x67].part_visibility_flags[0x12] = 0;
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
  return (CTVBat *)(this_ptr_00[-0x81].model_name + 0x44);
}
