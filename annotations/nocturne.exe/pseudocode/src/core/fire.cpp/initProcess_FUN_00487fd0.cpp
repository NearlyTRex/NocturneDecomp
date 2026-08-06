// Name: core_fire.cpp_initProcess_FUN_00487fd0
// Address: 00487fd0
// Address Range: [[00487fd0, 004880ca]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  _DAT_01c09e08 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSet_PTR_005be368->character_count; iVar5 = iVar5 + 1) {
    iVar1 = *(int *)((int)g_CDemonSet_PTR_005be368->characters + iVar4);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0((CVector3f *)(iVar1 + 0x20),50.0);
      if (iVar2 != 0) {
        if (0x31 < _DAT_01c09e08) {
          g_CurrentFilename = "..\\core\\fire.cpp";
          g_CurrentLineNumber = 3331;
          core_main_c_displayErrorAndQuit_FUN_004c8440("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c09e0c + _DAT_01c09e08 * 4) = iVar1;
        _DAT_01c09e08 = _DAT_01c09e08 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  _DAT_01c09ed4 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSet_PTR_005be368->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar5),
                        g_CFlameCanActorType_01c70654.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) && (_DAT_01c09ed4 < 0x96)) {
      *(CDemonActor **)(&DAT_01c09ed8 + _DAT_01c09ed4 * 4) = pCVar3;
      _DAT_01c09ed4 = _DAT_01c09ed4 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
