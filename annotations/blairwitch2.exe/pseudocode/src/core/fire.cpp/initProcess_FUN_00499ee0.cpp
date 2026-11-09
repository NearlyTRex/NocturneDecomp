// Name: core_fire.cpp_initProcess_FUN_00499ee0
// Address: 00499ee0
// Address Range: [[00499ee0, 00499fda]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_00499ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_initProcess_FUN_00499ee0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  _DAT_01c3f5a8 = 0;
  for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iVar3);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(iVar2 + 0x20,0x42480000);
      if (iVar1 != 0) {
        if (0x31 < _DAT_01c3f5a8) {
          _DAT_01d046a0 = "..\\core\\fire.cpp";
          _DAT_01d046a4 = 0xee3;
          core_main_c_FUN_004e4500("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c3f5ac + _DAT_01c3f5a8 * 4) = iVar2;
        _DAT_01c3f5a8 = _DAT_01c3f5a8 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  _DAT_01c3f674 = 0;
  for (iVar3 = 0; iVar3 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar3 = iVar3 + 1) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar4),
                       g_CFlameCanClassInfo.name_hash);
    if ((iVar2 != 0) && (_DAT_01c3f674 < 0x96)) {
      *(int *)(&DAT_01c3f678 + _DAT_01c3f674 * 4) = iVar2;
      _DAT_01c3f674 = _DAT_01c3f674 + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
