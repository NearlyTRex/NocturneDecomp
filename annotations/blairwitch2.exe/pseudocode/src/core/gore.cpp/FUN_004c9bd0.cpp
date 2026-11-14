// Name: core_gore.cpp_FUN_004c9bd0
// Address: 004c9bd0
// Address Range: [[004c9bd0, 004c9cb8]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004c9bd0(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004c9bd0(uint param_1,float *param_2,int param_3,float param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  
  this_ptr = (CFlies *)operator_new(0x2b7c);
  this_ptr_00 = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    this_ptr_00 = core_flies_cpp_CFlies_ctor_FUN_004a6a90(this_ptr);
  }
  if (this_ptr_00 == (CFlies *)0x0) {
    _DAT_01d046a0 = "..\\core\\gore.cpp";
    _DAT_01d046a4 = 0x681;
    core_main_c_FUN_004e4500("Can't create flies!");
  }
  fVar2 = (float)_DAT_005d9572;
  (this_ptr_00->base).location.position.x = *param_2;
  (this_ptr_00->base).location.position.y = param_2[1];
  (this_ptr_00->base).location.position.z = param_2[2];
  iVar1 = 0x01D182F0->current_set_index;
  this_ptr_00->fly_count = 0;
  (this_ptr_00->base).location.area_id = iVar1;
  this_ptr_00->gather_count = param_3;
  this_ptr_00->gather_time = fVar2 / param_4;
  if ((param_5 != (float *)0x0) && (&this_ptr_00->box_size != (CVector3f *)param_5)) {
    (this_ptr_00->box_size).x = *param_5;
    (this_ptr_00->box_size).y = param_5[1];
    (this_ptr_00->box_size).z = param_5[2];
  }
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,&this_ptr_00->base);
  return this_ptr_00;
}
