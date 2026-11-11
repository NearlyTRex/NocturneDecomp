// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710
// Address: 004f7710
// Address Range: [[004f7710, 004f787e]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004f7710(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004f7710(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  CDemonActor *pCVar1;
  int iVar2;
  CCharacter *local_14;
  
  if (_DAT_01d5ba00 <= index) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x651;
    core_main_c_FUN_004e4330("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(index * 4 + 0x1d5ba04) != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x652;
    core_main_c_FUN_004e4330("CDemonMission::createOneHero - hero already created!");
  }
  pCVar1 = this_ptr->first_actor;
  local_14 = (CCharacter *)0x0;
  do {
    if (pCVar1 == (CDemonActor *)0x0) {
LAB_004f778a:
      if (local_14 == (CCharacter *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      *(CCharacter **)(index * 4 + 0x1d5ba04) = local_14;
      return 1;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,_DAT_01d5baac);
    if ((iVar2 != 0) && (index == *(int *)(iVar2 + 0x158))) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = (CCharacter *)
                   core_hero_cpp_FUN_004d4be0(iVar2,(&PTR_s_CGabriella_005fffc4)[hero_type]);
      }
      else {
        local_14 = existing_actor;
        (*((existing_actor->base).vtable._ub)->setPositionAndOrientation)
                  (&existing_actor->base,(CVector3f *)(iVar2 + 0x20),(CVector3f *)(iVar2 + 0x30));
        (existing_actor->base).location.area_id = *(int *)(iVar2 + 0x2c);
        core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&existing_actor->model);
        core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                  (&(existing_actor->model).base,0,0.0);
        (*(((existing_actor->base).vtable._uc)->_uc).setWalkTarget)
                  (existing_actor,(CDemonActor *)0x0,0.0,0.0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,&local_14->base);
      goto LAB_004f778a;
    }
    pCVar1 = pCVar1->next_actor;
  } while( true );
}
