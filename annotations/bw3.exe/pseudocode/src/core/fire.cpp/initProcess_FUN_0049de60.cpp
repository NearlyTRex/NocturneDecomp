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
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  _DAT_01c74b68 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->character_count; iVar5 = iVar5 + 1) {
    iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370((CVector3f *)(iVar1 + 0x20),50.0);
      if (iVar2 != 0) {
        if (0x31 < _DAT_01c74b68) {
          _DAT_01d71de0 = "..\\core\\fire.cpp";
          _DAT_01d71de4 = 0x1043;
          core_main_c_FUN_004e4330("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c74b6c + _DAT_01c74b68 * 4) = iVar1;
        _DAT_01c74b68 = _DAT_01c74b68 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  _DAT_01c74c34 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) && (_DAT_01c74c34 < 0x96)) {
      *(CDemonActor **)(&DAT_01c74c38 + _DAT_01c74c34 * 4) = pCVar3;
      _DAT_01c74c34 = _DAT_01c74c34 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
