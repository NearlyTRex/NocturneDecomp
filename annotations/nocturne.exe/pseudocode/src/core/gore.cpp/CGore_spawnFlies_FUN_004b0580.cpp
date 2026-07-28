// Name: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
// Address Range: [[004b0580, 004b0667]]
// Convention: unknown
// Signature: CDemonActor * core_gore_cpp_CGore_spawnFlies_FUN_004b0580(undefined4 param_1,float *param_2,undefined4 param_3,float param_4,CDemonActor *param_5)

#include "nocturne.h"

CDemonActor * core_gore_cpp_CGore_spawnFlies_FUN_004b0580(uint param_1,float *param_2,uint param_3,float param_4,CDemonActor *param_5)

{
  float fVar1;
  int iVar2;
  CDemonActor *this_ptr;
  
  iVar2 = FUN_0056497c(0x2a18);
  this_ptr = (CDemonActor *)0x0;
  if (iVar2 != 0) {
    this_ptr = (CDemonActor *)core_flies_cpp_FUN_0048eef0(iVar2);
  }
  if (this_ptr == (CDemonActor *)0x0) {
    PTR_01cc4800 = "..\\core\\gore.cpp";
    INT_01cc4804 = 0x675;
    core_main_c_FUN_004c8440("Can't create flies!");
  }
  fVar1 = (float)60;
  (this_ptr->location).position.x = *param_2;
  (this_ptr->location).position.y = param_2[1];
  (this_ptr->location).position.z = param_2[2];
  iVar2 = 0x01CC9450->current_set_index;
  this_ptr[1].actor_name[0xc] = '\0';
  this_ptr[1].actor_name[0xd] = '\0';
  this_ptr[1].actor_name[0xe] = '\0';
  this_ptr[1].actor_name[0xf] = '\0';
  (this_ptr->location).area_id = iVar2;
  *(uint *)(this_ptr[0x20].actor_name + 4) = param_3;
  *(float *)(this_ptr[0x20].actor_name + 0xc) = fVar1 / param_4;
  if ((param_5 != (CDemonActor *)0x0) && (this_ptr + 1 != param_5)) {
    *(uint *)this_ptr[1].actor_name = *(uint *)param_5->actor_name;
    *(uint *)(this_ptr[1].actor_name + 4) = *(uint *)(param_5->actor_name + 4);
    *(uint *)(this_ptr[1].actor_name + 8) = *(uint *)(param_5->actor_name + 8);
  }
  (*((this_ptr->vtable)._ub)->setup)(this_ptr);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,this_ptr);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,this_ptr);
  return this_ptr;
}
