// Name: core_fire.cpp_initProcess_FUN_004b2880
// Address: 004b2880
// Address Range: [[004b2880, 004b297a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_004b2880(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_initProcess_FUN_004b2880(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  _DAT_01c58768 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->character_count; iVar4 = iVar4 + 1) {
    iVar2 = *(int *)((int)g_CDemonSetPtr->characters + iVar3);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(iVar2 + 0x20,0x42480000);
      if (iVar1 != 0) {
        if (0x31 < _DAT_01c58768) {
          _DAT_01d1d400 = "..\\core\\fire.cpp";
          _DAT_01d1d404 = 0xee3;
          core_main_c_FUN_005030e0("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c5876c + _DAT_01c58768 * 4) = iVar2;
        _DAT_01c58768 = _DAT_01c58768 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  _DAT_01c58834 = 0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)((int)g_CDemonSetPtr->actors + iVar4),
                       g_CFlameCanClassInfo.name_hash);
    if ((iVar2 != 0) && (_DAT_01c58834 < 0x96)) {
      *(int *)(&DAT_01c58838 + _DAT_01c58834 * 4) = iVar2;
      _DAT_01c58834 = _DAT_01c58834 + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
