// Name: core_gore.cpp_FUN_004c9bd0
// Address: 004c9bd0
// Address Range: [[004c9bd0, 004c9cb8]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004c9bd0(undefined4 param_1,undefined4 *param_2,int param_3,float param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004c9bd0(uint param_1,uint *param_2,int param_3,float param_4,float *param_5)

{
  uint uVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  
  this_ptr = (CFlies *)debugAllocTracked1(0x2b7c);
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
  *(uint *)&(this_ptr_00->base).field_0x20 = *param_2;
  *(uint *)&(this_ptr_00->base).field_0x24 = param_2[1];
  *(uint *)&(this_ptr_00->base).field_0x28 = param_2[2];
  uVar1 = *(uint *)0x01D182F0;
  this_ptr_00->fly_count = 0;
  *(uint *)&(this_ptr_00->base).field_0x2c = uVar1;
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
