// Name: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
// Address Range: [[004b0580, 004b0667]]
// Convention: unknown
// Signature: CFlies * core_gore_cpp_CGore_spawnFlies_FUN_004b0580(undefined4 param_1,float *param_2,int param_3,float param_4,float *param_5)

#include "nocturne.h"

CFlies * core_gore_cpp_CGore_spawnFlies_FUN_004b0580(uint param_1,float *param_2,int param_3,float param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  
  this_ptr = (CFlies *)FUN_0056497c(0x2a18);
  this_ptr_00 = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    this_ptr_00 = core_flies_cpp_CFlies_ctor_FUN_0048eef0(this_ptr);
  }
  if (this_ptr_00 == (CFlies *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\gore.cpp";
    g_INT_01cc4804 = 0x675;
    core_main_c_FUN_004c8440("Can't create flies!");
  }
  fVar2 = (float)60;
  (this_ptr_00->base).location.position.x = *param_2;
  (this_ptr_00->base).location.position.y = param_2[1];
  (this_ptr_00->base).location.position.z = param_2[2];
  iVar1 = g_CDemonMission_PTR_005baf90->current_set_index;
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
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
            (g_CDemonMission_PTR_005baf90,&this_ptr_00->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
            (g_CDemonMission_PTR_005baf90,&this_ptr_00->base);
  return this_ptr_00;
}
