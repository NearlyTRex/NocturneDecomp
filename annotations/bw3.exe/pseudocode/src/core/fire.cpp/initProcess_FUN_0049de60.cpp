// Name: core_fire.cpp_initProcess_FUN_0049de60
// Address: 0049de60
// Address Range: [[0049de60, 0049df5a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_0049de60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_initProcess_FUN_0049de60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  _DAT_01c74b68 = 0;
  for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iVar3);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(iVar2 + 0x20,0x42480000);
      if (iVar1 != 0) {
        if (0x31 < _DAT_01c74b68) {
          _DAT_01d71de0 = "..\\core\\fire.cpp";
          _DAT_01d71de4 = 0x1043;
          core_main_c_FUN_004e4330("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c74b6c + _DAT_01c74b68 * 4) = iVar2;
        _DAT_01c74b68 = _DAT_01c74b68 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  _DAT_01c74c34 = 0;
  for (iVar3 = 0; iVar3 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar3 = iVar3 + 1) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar4),
                       g_CFlameCanClassInfo.name_hash);
    if ((iVar2 != 0) && (_DAT_01c74c34 < 0x96)) {
      *(int *)(&DAT_01c74c38 + _DAT_01c74c34 * 4) = iVar2;
      _DAT_01c74c34 = _DAT_01c74c34 + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
