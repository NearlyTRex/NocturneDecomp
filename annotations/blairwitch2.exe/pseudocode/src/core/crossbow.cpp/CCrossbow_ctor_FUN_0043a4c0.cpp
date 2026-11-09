// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0
// Address: 0043a4c0
// Address Range: [[0043a4c0, 0043a571]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow *this_ptr)

{
  CWeapon *pCVar1;
  CFlame *pCVar2;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0((CWeapon *)this_ptr);
  pCVar2 = core_flame_cpp_CFlame_ctor_FUN_0049f180((CFlame *)&pCVar1[1].field_0x4);
  *(byte **)&pCVar2[-2].field_0x3d8 = &g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2[-2].field_0x3dc,(char *)0x5ce210);
  *(uint *)&pCVar2[-1].field_0x184 = 0;
  *(uint *)&pCVar2[-1].field_0x3fc = 0;
  *(uint *)&pCVar2->field_0x2b4 = 0x3ee66666;
  *(uint *)&pCVar2->field_0x2b8 = 0x3f59999a;
  *(uint *)&pCVar2->field_0x2bc = 0x3ee66666;
  *(uint *)&pCVar2[-1].field_0x15c = 0;
  *(uint *)&pCVar2[-1].field_0x160 = 0;
  *(uint *)&pCVar2[-1].field_0x164 = 1;
  *(uint *)&pCVar2[-1].field_0x168 = 0;
  *(uint *)&pCVar2[-1].field_0x16c = 0x42480000;
  *(uint *)&pCVar2[-1].field_0x170 = 0;
  return (CCrossbow *)&pCVar2[-2].field_0x128;
}
