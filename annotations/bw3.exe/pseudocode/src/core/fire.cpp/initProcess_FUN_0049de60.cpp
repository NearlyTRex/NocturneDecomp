// Name: core_fire.cpp_initProcess_FUN_0049de60
// Address: 0049de60
// Address Range: [[0049de60, 0049df5a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_0049de60(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_initProcess_FUN_0049de60(void)

{
  CCharacter *this_ptr;
  EDeathState EVar1;
  int iVar2;
  CFlameCan *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  g_INT_01c74b68 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->character_count; iVar5 = iVar5 + 1) {
    this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->characters + iVar4);
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (EVar1 == DEATH_STATE_ALIVE) {
      iVar2 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370
                        (&(this_ptr->base).location.position,50.0);
      if (iVar2 != 0) {
        if (0x31 < g_INT_01c74b68) {
          g_CHAR_PTR_01d71de0 = "..\\core\\fire.cpp";
          g_INT_01d71de4 = 0x1043;
          core_main_c_displayErrorAndQuit_FUN_004e4330("CGunFlame::initProcess - too many characters!");
        }
        g_CCharacter_PTR_ARRAY_01c74b6c[g_INT_01c74b68] = this_ptr;
        g_INT_01c74b68 = g_INT_01c74b68 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  g_INT_01c74c34 = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = (CFlameCan *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CFlameCan *)0x0) && (g_INT_01c74c34 < 0x96)) {
      g_CFlameCan_PTR_ARRAY_01c74c38[g_INT_01c74c34] = pCVar3;
      g_INT_01c74c34 = g_INT_01c74c34 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
