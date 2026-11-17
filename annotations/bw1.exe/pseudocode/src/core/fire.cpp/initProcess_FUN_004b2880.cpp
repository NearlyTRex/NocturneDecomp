// Name: core_fire.cpp_initProcess_FUN_004b2880
// Address: 004b2880
// Address Range: [[004b2880, 004b297a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_004b2880(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_initProcess_FUN_004b2880(void)

{
  CCharacter *this_ptr;
  EDeathState EVar1;
  int iVar2;
  CFlameCan *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  g_GunFlameCandidateCount = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->character_count; iVar5 = iVar5 + 1) {
    this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->characters + iVar4);
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 == DEATH_STATE_ALIVE) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0
                        (&(this_ptr->base).location.position,50.0);
      if (iVar2 != 0) {
        if (0x31 < g_GunFlameCandidateCount) {
          g_CHAR_PTR_01d1d400 = "..\\core\\fire.cpp";
          g_INT_01d1d404 = 0xee3;
          core_main_c_displayErrorAndQuit_FUN_005030e0("CGunFlame::initProcess - too many characters!");
        }
        g_GunFlameCandidates[g_GunFlameCandidateCount] = this_ptr;
        g_GunFlameCandidateCount = g_GunFlameCandidateCount + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  g_FlameCanCount = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = (CFlameCan *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CFlameCan *)0x0) && (g_FlameCanCount < 0x96)) {
      g_FlameCans[g_FlameCanCount] = pCVar3;
      g_FlameCanCount = g_FlameCanCount + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
