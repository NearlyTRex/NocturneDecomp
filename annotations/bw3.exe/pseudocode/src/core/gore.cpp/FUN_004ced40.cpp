// Name: core_gore.cpp_FUN_004ced40
// Address: 004ced40
// Address Range: [[004ced40, 004cee27]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004ced40(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004ced40(uint param_1,float *param_2,int param_3,float param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  
  this_ptr = (CFlies *)debugAllocTracked1(0x2a20);
  this_ptr_00 = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    this_ptr_00 = core_flies_cpp_CFlies_ctor_FUN_004ad7b0(this_ptr);
  }
  if (this_ptr_00 == (CFlies *)0x0) {
    _DAT_01d71de0 = "..\\core\\gore.cpp";
    _DAT_01d71de4 = 0x6aa;
    core_main_c_FUN_004e4330("Can't create flies!");
  }
  fVar2 = (float)_DAT_005c4779;
  (this_ptr_00->base).location.position.x = *param_2;
  (this_ptr_00->base).location.position.y = param_2[1];
  (this_ptr_00->base).location.position.z = param_2[2];
  iVar1 = *(int *)0x01D81080;
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
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,&this_ptr_00->base);
  return this_ptr_00;
}
