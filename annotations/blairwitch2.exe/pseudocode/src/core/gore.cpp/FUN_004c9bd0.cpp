// Name: core_gore.cpp_FUN_004c9bd0
// Address: 004c9bd0
// Address Range: [[004c9bd0, 004c9cb8]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004c9bd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004c9bd0(uint param_1,uint *param_2,uint param_3,float param_4,uint *param_5)

{
  uint uVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *actor;
  
  this_ptr = (CFlies *)FUN_005b8be2(0x2b7c);
  actor = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    actor = core_flies_cpp_CFlies_ctor_FUN_004a6a90(this_ptr);
  }
  if (actor == (CFlies *)0x0) {
    _DAT_01d046a0 = "..\\core\\gore.cpp";
    _DAT_01d046a4 = 0x681;
    core_main_c_FUN_004e4500("Can't create flies!");
  }
  fVar2 = (float)_DAT_005d9572;
  *(uint *)&actor->field_0x20 = *param_2;
  *(uint *)&actor->field_0x24 = param_2[1];
  *(uint *)&actor->field_0x28 = param_2[2];
  uVar1 = *(uint *)0x01D182F0;
  *(uint *)&actor->field_0x2c0 = 0;
  *(uint *)&actor->field_0x2c = uVar1;
  *(uint *)&actor->field_0x2b68 = param_3;
  *(float *)&actor->field_0x2b70 = fVar2 / param_4;
  if ((param_5 != (uint *)0x0) && ((uint *)&actor->field_0x2b4 != param_5)) {
    *(uint *)&actor->field_0x2b4 = *param_5;
    *(uint *)&actor->field_0x2b8 = param_5[1];
    *(uint *)&actor->field_0x2bc = param_5[2];
  }
  (**(code **)(*(int *)&actor->field_0x2b0 + 8))(actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,(CDemonActor *)actor);
  return actor;
}
