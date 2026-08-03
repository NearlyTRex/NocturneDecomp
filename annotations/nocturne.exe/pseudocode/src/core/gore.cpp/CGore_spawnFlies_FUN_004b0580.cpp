// Name: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
// Address Range: [[004b0580, 004b0667]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004b0580(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004b0580(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr_00;
  CFlies *this_ptr_01;
  
  this_ptr_00 = (CFlies *)FUN_0056497c(0x2a18);
  this_ptr_01 = (CFlies *)0x0;
  if (this_ptr_00 != (CFlies *)0x0) {
    this_ptr_01 = core_flies_cpp_CFlies_ctor_FUN_0048eef0(this_ptr_00);
  }
  if (this_ptr_01 == (CFlies *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\gore.cpp";
    g_INT_01cc4804 = 0x675;
    core_main_c_FUN_004c8440("Can't create flies!");
  }
  fVar2 = (float)60;
  (this_ptr_01->base).location.position.x = position->x;
  (this_ptr_01->base).location.position.y = position->y;
  (this_ptr_01->base).location.position.z = position->z;
  iVar1 = g_CDemonMission_PTR_005baf90->current_set_index;
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
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
            (g_CDemonMission_PTR_005baf90,&this_ptr_01->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
            (g_CDemonMission_PTR_005baf90,&this_ptr_01->base);
  return this_ptr_01;
}
