// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_00449770
// Address: 00449770
// Address Range: [[00449770, 00449821]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(CCrossbow *this_ptr)

{
  CWeapon *pCVar1;
  CFlame *pCVar2;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  pCVar2 = core_flame_cpp_CFlame_ctor_FUN_004b7a30((CFlame *)&pCVar1[1].field_0x4);
  *(byte **)&pCVar2[-2].field_0x120 = &g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&pCVar2[-2].field_0x124,(char *)0x5d737c);
  *(uint *)&pCVar2[-1].field_0x28 = 0;
  *(uint *)&pCVar2[-1].field_0x2a0 = 0;
  *(uint *)&pCVar2->field_0x158 = 0x3ee66666;
  *(uint *)&pCVar2->field_0x15c = 0x3f59999a;
  *(uint *)&pCVar2->field_0x160 = 0x3ee66666;
  *(uint *)(pCVar2 + -1) = 0;
  *(uint *)&pCVar2[-1].field_0x4 = 0;
  *(uint *)&pCVar2[-1].field_0x8 = 1;
  *(uint *)&pCVar2[-1].field_0xc = 0;
  *(uint *)&pCVar2[-1].field_0x10 = 0x42480000;
  *(uint *)&pCVar2[-1].field_0x14 = 0;
  return (CCrossbow *)&pCVar2[-3].field_0x270;
}
