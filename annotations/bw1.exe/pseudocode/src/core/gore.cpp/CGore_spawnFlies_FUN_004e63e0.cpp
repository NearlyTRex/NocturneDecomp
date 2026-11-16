// Name: core_gore.cpp_CGore_spawnFlies_FUN_004e63e0
// Address: 004e63e0
// Address Range: [[004e63e0, 004e64c7]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004e63e0(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004e63e0(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr_00;
  CFlies *this_ptr_01;
  
  this_ptr_00 = operator_new(0x2a20);
  this_ptr_01 = (CFlies *)0x0;
  if (this_ptr_00 != (CFlies *)0x0) {
    this_ptr_01 = core_flies_cpp_CFlies_ctor_FUN_004bfa60(this_ptr_00);
  }
  if (this_ptr_01 == (CFlies *)0x0) {
    _DAT_01d1d400 = "..\\core\\gore.cpp";
    _DAT_01d1d404 = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't create flies!");
  }
  fVar2 = (float)_DAT_005e4155;
  (this_ptr_01->base).location.position.x = position->x;
  (this_ptr_01->base).location.position.y = position->y;
  (this_ptr_01->base).location.position.z = position->z;
  iVar1 = 0x01D2C900->current_set_index;
  this_ptr_01->fly_count = 0;
  (this_ptr_01->base).location.area_id = iVar1;
  this_ptr_01->gather_count = gather_count;
  this_ptr_01->gather_time = fVar2 / spawn_rate;
  if ((box_size != (CVector3f *)0x0) && (&this_ptr_01->box_size != box_size)) {
    (this_ptr_01->box_size).x = box_size->x;
    (this_ptr_01->box_size).y = box_size->y;
    (this_ptr_01->box_size).z = box_size->z;
  }
  (*((this_ptr_01->base).vtable._ub)->setup)(&this_ptr_01->base);
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&this_ptr_01->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,&this_ptr_01->base);
  return this_ptr_01;
}
