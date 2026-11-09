// Name: core_gore.cpp_FUN_004ced40
// Address: 004ced40
// Address Range: [[004ced40, 004cee27]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004ced40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004ced40(uint param_1,uint *param_2,uint param_3,float param_4,uint *param_5)

{
  uint uVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *actor;
  
  this_ptr = (CFlies *)FUN_005a3cb2(0x2a20);
  actor = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    actor = core_flies_cpp_CFlies_ctor_FUN_004ad7b0(this_ptr);
  }
  if (actor == (CFlies *)0x0) {
    _DAT_01d71de0 = "..\\core\\gore.cpp";
    _DAT_01d71de4 = 0x6aa;
    core_main_c_FUN_004e4330("Can't create flies!");
  }
  fVar2 = (float)_DAT_005c4779;
  *(uint *)&actor->field_0x20 = *param_2;
  *(uint *)&actor->field_0x24 = param_2[1];
  *(uint *)&actor->field_0x28 = param_2[2];
  uVar1 = *(uint *)0x01D81080;
  *(uint *)&actor->field_0x164 = 0;
  *(uint *)&actor->field_0x2c = uVar1;
  *(uint *)&actor->field_0x2a0c = param_3;
  *(float *)&actor->field_0x2a14 = fVar2 / param_4;
  if ((param_5 != (uint *)0x0) && ((uint *)&actor->field_0x158 != param_5)) {
    *(uint *)&actor->field_0x158 = *param_5;
    *(uint *)&actor->field_0x15c = param_5[1];
    *(uint *)&actor->field_0x160 = param_5[2];
  }
  (*(code *)**(uint **)&actor->field_0x154)(actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,(CDemonActor *)actor);
  core_mission_cpp_FUN_004f6930(0x01D81080,(CDemonActor *)actor);
  return actor;
}
