// Name: core_gore.cpp_FUN_004e63e0
// Address: 004e63e0
// Address Range: [[004e63e0, 004e64c7]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_FUN_004e63e0(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * core_gore_cpp_FUN_004e63e0(uint param_1,float *param_2,int param_3,float param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  
  this_ptr = (CFlies *)debugAllocTracked1(0x2a20);
  this_ptr_00 = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    this_ptr_00 = core_flies_cpp_CFlies_ctor_FUN_004bfa60(this_ptr);
  }
  if (this_ptr_00 == (CFlies *)0x0) {
    _DAT_01d1d400 = "..\\core\\gore.cpp";
    _DAT_01d1d404 = 0x67d;
    core_main_c_FUN_005030e0("Can't create flies!");
  }
  fVar2 = (float)_DAT_005e4155;
  (this_ptr_00->base).location.position.x = *param_2;
  (this_ptr_00->base).location.position.y = param_2[1];
  (this_ptr_00->base).location.position.z = param_2[2];
  iVar1 = *(int *)0x01D2C900;
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
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,&this_ptr_00->base);
  return this_ptr_00;
}
