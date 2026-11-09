// Name: core_lightpis.cpp_CLightPis_ctor_FUN_00501610
// Address: 00501610
// Address Range: [[00501610, 005016cf]]
// Convention: unknown
// Signature: CLightPis * core_lightpis_cpp_CLightPis_ctor_FUN_00501610(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightPis * core_lightpis_cpp_CLightPis_ctor_FUN_00501610(CLightPis *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLightPis *pCVar3;
  
  pCVar3 = (CLightPis *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  *(byte **)&pCVar3->field_0x154 = &g_CLightPisVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar3->field_0x158,"ecre_pistol.kfm");
  *(uint *)&pCVar3->field_0x57c = 0;
  *(uint *)&pCVar3->field_0x578 = 0;
  *(uint *)&pCVar3->field_0x2d8 = 0;
  *(uint *)&pCVar3->field_0x2dc = 0;
  *(uint *)&pCVar3->field_0x2e0 = 0;
  *(uint *)&pCVar3->field_0x2e4 = 0;
  *(uint *)&pCVar3->field_0x2e8 = 0x42000000;
  *(uint *)&pCVar3->field_0x2ec = 0;
  *(uint *)&pCVar3->field_0x58c = 1;
  uVar1 = _DAT_0060316c;
  *(uint *)&pCVar3->field_0x2f0 = 1;
  uVar2 = _DAT_00603170;
  *(uint *)&pCVar3->field_0x588 = 0;
  *(uint *)&pCVar3->field_0x584 = 0x3f800000;
  *(uint *)&pCVar3->field_0x564 = uVar1;
  *(uint *)&pCVar3->field_0x580 = uVar2;
  return pCVar3;
}
