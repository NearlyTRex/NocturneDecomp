// Name: core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20
// Address: 004d9c20
// Address Range: [[004d9c20, 004d9deb]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(int param_1)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_17c [92];
  
  shape_edittool_cpp_FUN_00474c90(local_17c);
  iVar2 = *(int *)(param_1 + 0x514);
  while( true ) {
    if (iVar2 == 0) {
      if (local_17c[0] < 1) {
        shape_edittool_cpp_FUN_0046fe60(0x01BCD074,"Warning: mission has no hero placeholders, and no heros.");
      }
      else {
        iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                          (local_17c,"Mission has no hero placeholders.\n\nSelect a hero to convert into a hero placeholder, or\npress ESC to leave mission as is.\n\n(You will not be able to play the mission without a hero placeholder.)",0xffffffff);
        if (-1 < iVar2) {
          uVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(local_17c,iVar2);
          iVar2 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(param_1,uVar3);
          if (iVar2 == 0) {
            PTR_01cc4800 = "..\\core\\mission.cpp";
            INT_01cc4804 = 0x687;
            core_main_c_FUN_004c8440("Hell froze finding hero.");
          }
          iVar4 = FUN_0056497c(0x154);
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(iVar4);
          }
          *(uint *)(iVar1 + 0x150) = 0;
          *(uint *)(iVar1 + 0x20) = *(uint *)(iVar2 + 0x20);
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar2 + 0x24);
          *(uint *)(iVar1 + 0x28) = *(uint *)(iVar2 + 0x28);
          *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar2 + 0x2c);
          if ((uint *)(iVar1 + 0x30) != (uint *)(iVar2 + 0x30)) {
            *(uint *)(iVar1 + 0x30) = *(uint *)(iVar2 + 0x30);
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar2 + 0x34);
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar2 + 0x38);
          }
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(param_1,iVar1);
          core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(param_1,iVar2,1);
          core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(param_1,iVar1);
          shape_edittool_cpp_FUN_0046fe60(0x01BCD074,"Replaced hero OK.  You will need to save the mission for changes to be perminent.");
          shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_17c,0);
          return;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_17c,0);
      return;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar2,"CHero");
    if (iVar1 != 0) {
      shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_17c,iVar2);
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (iVar2,g_CHeroPlaceholderActorType_01cae128.name_hash);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x150) == 0)) break;
    iVar2 = *(int *)(iVar2 + 0x144);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_17c,0);
  return;
}
