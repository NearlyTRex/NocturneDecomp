// Name: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
// Address: 004c4b00
// Address Range: [[004c4b00, 004c4bfa]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  DAT_02d13eb4 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->damage_listener_count; iVar5 = iVar5 + 1) {
    iVar1 = *(int *)(g_CDemonSetPtr->unk4 + iVar4 + -4);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x120))();
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_FUN_004f2220();
      if (iVar2 != 0) {
        if (0x31 < DAT_02d13eb4) {
          g_CurrentFilename = "..\\core\\fire.cpp";
          g_CurrentLineNumber = 0xd0f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CGunFlame::initProcess - too many characters!");
        }
        (&DAT_02d13eb8)[DAT_02d13eb4] = iVar1;
        DAT_02d13eb4 = DAT_02d13eb4 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  DAT_02d13f80 = 0;
  for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) && (DAT_02d13f80 < 0x96)) {
      (&DAT_02d13f84)[DAT_02d13f80] = pCVar3;
      DAT_02d13f80 = DAT_02d13f80 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}
