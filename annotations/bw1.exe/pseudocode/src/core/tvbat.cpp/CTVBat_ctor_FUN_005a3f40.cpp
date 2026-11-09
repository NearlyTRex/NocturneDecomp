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
  uint uVar2;
  float fVar3;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)&pCVar1[1].field_0x4);
  *(byte ***)&this_ptr_00[-0x83].field_0x15c = &g_CTVBatVTable;
  *(uint *)&this_ptr_00[-1].field_0x178 = 0;
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  uVar2 = core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)(this_ptr_00 + 1) = uVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5f8b97);
  *(uint *)&this_ptr_00[1].field_0x18 = 0x40a00000;
  *(uint *)&this_ptr_00[1].field_0x14 = 0x41700000;
  fVar3 = (float)core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(float *)&this_ptr_00[1].field_0x20 = fVar3 * _DAT_005f8ba0;
  fVar3 = (float)core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(float *)&this_ptr_00[1].field_0x1c = fVar3 * _DAT_005f8ba4;
  uVar2 = core_actor_cpp_FUN_0040cc00(0,0x3f800000);
  *(uint *)&this_ptr_00[1].field_0x28 = 0;
  *(uint *)&this_ptr_00[1].field_0x2c = 0;
  *(uint *)&this_ptr_00[1].field_0x3c = 0;
  *(uint *)&this_ptr_00[-0x69].field_0x130 = 0;
  *(uint *)&this_ptr_00[1].field_0xb4 = 0;
  this_ptr_00[1].field_0x40 = 0;
  *(uint *)&this_ptr_00[1].field_0xa4 = 0x41700000;
  *(uint *)&this_ptr_00[1].field_0xa8 = 0x41f00000;
  *(uint *)&this_ptr_00[1].field_0xb0 = 0;
  *(uint *)&this_ptr_00[1].field_0x24 = uVar2;
  return (CTVBat *)&this_ptr_00[-0x83].field_0x8;
}
