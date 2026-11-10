// Name: core_lantern.cpp_CLantern_ctor_FUN_0059cbd0
// Address: 0059cbd0
// Address Range: [[0059cbd0, 0059ccb3]]
// Convention: unknown
// Signature: CLantern * core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(CLantern *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLantern * core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(CLantern *this_ptr)

{
  float fVar1;
  CLantern *pCVar2;
  
  pCVar2 = (CLantern *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  ((UActorVTable *)&pCVar2->field_0x2b0)->_ub = &g_CLanternVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,"lantern.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4);
  *(int *)&pCVar2->field_0x434 = 0;
  *(EFireMode *)&pCVar2->field_0x438 = FIRE_MODE_AUTOMATIC;
  *(EWeaponType *)&pCVar2->field_0x43c = WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN;
  *(int *)&pCVar2->field_0x440 = 0;
  *(float *)&pCVar2->field_0x444 = 0.0;
  *(int *)&pCVar2->field_0x448 = 0;
  *(int *)&pCVar2->field_0x6c4 = 0;
  *(int *)&pCVar2->field_0x6d0 = 1;
  *(uint *)&pCVar2->field_0xfc = 1;
  *(uint *)&pCVar2->field_0x6d4 = 0;
  *(uint *)&pCVar2->field_0x700 = 0;
  *(uint *)&pCVar2->field_0x6f8 = 0;
  fVar1 = _DAT_005fe8dc;
  *(CDemonLight **)&pCVar2->field_0x704 = &g_CDemonLightInstance;
  *(uint *)&pCVar2->field_0x6fc = 0;
  *(float *)&pCVar2->field_0x6c0 = fVar1;
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(*(CDemonLight **)&pCVar2->field_0x704);
  return pCVar2;
}
