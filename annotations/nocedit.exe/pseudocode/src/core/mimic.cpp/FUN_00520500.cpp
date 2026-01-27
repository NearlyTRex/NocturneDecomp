// Name: core_mimic.cpp_FUN_00520500
// Address: 00520500
// Address Range: [[00520500, 005205e8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520500()

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_FUN_00520500(uint param_1) */

void core_mimic_cpp_FUN_00520500(void)

{
  CDemonActor *pCVar1;
  SMotion *motion_name;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000004;
  float frame_number;
  
  bVar6 = 0;
  *(uint *)(in_stack_00000004 + 0x4bdf4) = 2;
  core_cloth_cpp_FUN_00439710();
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],g_CGabriellaClassInfo.name_hash)
  ;
  if (pCVar1 != (CDemonActor *)0x0) {
    piVar4 = &pCVar1[0x1ba].is_transparent;
    piVar5 = (int *)(in_stack_00000004 + 0x1165c);
    for (uVar2 = *(int *)(in_stack_00000004 + 0xc088) * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + (uint)bVar6 * -2 + 1);
      piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  frame_number = (g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller.current_frame_number
  ;
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller);
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)(in_stack_00000004 + 0x158),motion_name->motion_name,frame_number)
  ;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),1,1);
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s attacking hero\n",in_stack_00000004);
  return;
}
