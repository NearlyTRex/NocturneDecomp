// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// Address: 00524920
// Address Range: [[00524920, 00524a7e]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission *this_ptr)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  int in_stack_00000008;
  CDemonActor *in_stack_00000010;
  CHero *pCVar1;
  
  if (g_HeroCount <= in_stack_00000008) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - too many heros!");
  }
  if (g_HeroActors[in_stack_00000008] != (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = this_ptr->first_actor;
  pCVar1 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_0052499a:
      if (pCVar1 == (CHero *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      g_HeroActors[in_stack_00000008] = pCVar1;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (in_stack_00000008 == this_ptr_00->unk)) {
      if (in_stack_00000010 == (CDemonActor *)0x0) {
        pCVar1 = (CHero *)core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(this_ptr_00);
      }
      else {
        (*((in_stack_00000010->vtable)._ub)->setPositionAndOrientation)
                  (in_stack_00000010,&(this_ptr_00->base).location.position,
                   (CVector3f *)&(this_ptr_00->base).orient);
        (in_stack_00000010->location).area_id = (this_ptr_00->base).location.area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  ((CMotionController *)(in_stack_00000010 + 1),0,0.0);
        pCVar1 = (CHero *)0x0;
        (*(((in_stack_00000010->vtable)._uc)->_uc).cfunc23)();
      }
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      goto LAB_0052499a;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
