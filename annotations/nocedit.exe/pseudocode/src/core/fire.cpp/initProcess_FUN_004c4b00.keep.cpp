// Name: core_fire.cpp_initProcess_FUN_004c4b00
// Address: 004c4b00
// MANUAL RECONSTRUCTION
// Address Range: [[004c4b00, 004c4bfa]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_004c4b00(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_initProcess_FUN_004c4b00(void)

{
  CCharacter *this_ptr;
  EDeathState EVar1;
  int iVar2;
  CFlameCan *pCVar3;
  int iVar4;
  int iVar5;
  
  g_CharactersOnFireCount = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->character_count; iVar5 = iVar5 + 1) {
    this_ptr = g_CDemonSetPtr->characters[iVar5];
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 == DEATH_STATE_ALIVE) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220
                        (&(this_ptr->base).location.position,50.0);
      if (iVar2 != 0) {
        if (0x31 < g_CharactersOnFireCount) {
          g_CurrentFilename = "..\\core\\fire.cpp";
          g_CurrentLineNumber = 3343;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CGunFlame::initProcess - too many characters!");
        }
        g_CharactersOnFire[g_CharactersOnFireCount] = this_ptr;
        g_CharactersOnFireCount = g_CharactersOnFireCount + 1;
      }
    }
  }
  g_FlameCanCount = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = (CFlameCan *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (g_CDemonSetPtr->actors[iVar4],
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CFlameCan *)0x0) && (g_FlameCanCount < 0x96)) {
      g_FlameCans[g_FlameCanCount] = pCVar3;
      g_FlameCanCount = g_FlameCanCount + 1;
    }
  }
  return;
}
