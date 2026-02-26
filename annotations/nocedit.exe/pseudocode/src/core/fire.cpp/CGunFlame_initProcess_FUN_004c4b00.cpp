// Name: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
// Address: 004c4b00
// Address Range: [[004c4b00, 004c4bfa]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CFlameCan *pCVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  g_CharactersOnFireCount = 0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->character_count; iVar4 = iVar4 + 1) {
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iVar3);
    iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_FUN_004f2220();
      if (iVar1 != 0) {
        if (0x31 < g_CharactersOnFireCount) {
          g_CurrentFilename = "..\\core\\fire.cpp";
          g_CurrentLineNumber = 0xd0f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CGunFlame::initProcess - too many characters!");
        }
        g_CharactersOnFire[g_CharactersOnFireCount] = this_ptr_00;
        g_CharactersOnFireCount = g_CharactersOnFireCount + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  g_FlameCanCount = 0;
  for (iVar3 = 0; iVar3 < g_CDemonSetPtr->actor_count; iVar3 = iVar3 + 1) {
    pCVar2 = (CFlameCan *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar2 != (CFlameCan *)0x0) && (g_FlameCanCount < 0x96)) {
      g_FlameCans[g_FlameCanCount] = pCVar2;
      g_FlameCanCount = g_FlameCanCount + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
