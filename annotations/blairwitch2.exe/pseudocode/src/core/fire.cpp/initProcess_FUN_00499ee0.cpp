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
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  _DAT_01c3f5a8 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->character_count; iVar5 = iVar5 + 1) {
    iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100((CVector3f *)(iVar1 + 0x20),50.0);
      if (iVar2 != 0) {
        if (0x31 < _DAT_01c3f5a8) {
          _DAT_01d046a0 = "..\\core\\fire.cpp";
          _DAT_01d046a4 = 0xee3;
          core_main_c_FUN_004e4500("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c3f5ac + _DAT_01c3f5a8 * 4) = iVar1;
        _DAT_01c3f5a8 = _DAT_01c3f5a8 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  _DAT_01c3f674 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) && (_DAT_01c3f674 < 0x96)) {
      *(CDemonActor **)(&DAT_01c3f678 + _DAT_01c3f674 * 4) = pCVar3;
      _DAT_01c3f674 = _DAT_01c3f674 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
