// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fd0d5]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004fcf70(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)

{
  int iVar1;
  int iVar2;
  CCharacter *local_14;
  
  if (_DAT_01cedee0 <= index) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x640;
    core_main_c_FUN_004e4500("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(index * 4 + 0x1cedee4) != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x641;
    core_main_c_FUN_004e4500("CDemonMission::createOneHero - hero already created!");
  }
  iVar1 = *(int *)(this_ptr + 0x1114);
  local_14 = (CCharacter *)0x0;
  do {
    if (iVar1 == 0) {
LAB_004fcfea:
      if (local_14 == (CCharacter *)0x0) {
        shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"Can't find hero placeholder for hero %d",index)
        ;
        return 0;
      }
      *(CCharacter **)(index * 4 + 0x1cedee4) = local_14;
      return 1;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar1,_DAT_01cedf8c);
    if ((iVar2 != 0) && (index == *(int *)(iVar2 + 0x2b4))) {
      if (existing_actor == (CCharacter *)0x0) {
        local_14 = (CCharacter *)
                   core_hero_cpp_FUN_004d0a40(iVar2,(&PTR_s_CGabriella_00617a68)[hero_type]);
      }
      else {
        local_14 = existing_actor;
        (**(code **)(*(int *)&existing_actor->field_0x2b0 + 0x70))
                  (existing_actor,iVar2 + 0x20,iVar2 + 0x30);
        *(uint *)&existing_actor->field_0x2c = *(uint *)(iVar2 + 0x2c);
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                  ((CMotionController *)&existing_actor->field_0x2b4,0,0.0);
        (**(code **)(*(int *)&existing_actor->field_0x2b0 + 0x138))(existing_actor,0,0,0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (0x01D182F0,(CDemonActor *)local_14);
      goto LAB_004fcfea;
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
