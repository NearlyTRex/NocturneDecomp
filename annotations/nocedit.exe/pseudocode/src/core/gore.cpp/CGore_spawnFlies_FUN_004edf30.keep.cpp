// Name: core_gore.cpp_CGore_spawnFlies_FUN_004edf30
// Address: 004edf30
// MANUAL RECONSTRUCTION
// Address Range: [[004edf30, 004ee021]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004edf30(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004edf30(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr_00;
  CFlies *this_ptr_01;
  
  this_ptr_00 = (CFlies *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (sizeof(CFlies),"..\\core\\gore.cpp",1660);
  this_ptr_01 = (CFlies *)0x0;
  if (this_ptr_00 != (CFlies *)0x0) {
    this_ptr_01 = core_flies_cpp_CFlies_ctor_FUN_004cbd60(this_ptr_00);
  }
  if (this_ptr_01 == (CFlies *)0x0) {
    g_CurrentFilename = "..\\core\\gore.cpp";
    g_CurrentLineNumber = 1661;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create flies!");
  }
  fVar2 = (float)60;
  (this_ptr_01->base).location.position = *position;
  iVar1 = g_CDemonMissionPtr->current_set_index;
  this_ptr_01->fly_count = 0;
  (this_ptr_01->base).location.area_id = iVar1;
  this_ptr_01->gather_count = gather_count;
  this_ptr_01->gather_time = fVar2 / spawn_rate;
  if ((box_size != (CVector3f *)0x0) && (&this_ptr_01->box_size != box_size)) {
    this_ptr_01->box_size = *box_size;
  }
  (*((this_ptr_01->base).vtable._ub)->setup)(&this_ptr_01->base);
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
            (g_CDemonMissionPtr,&this_ptr_01->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(g_CDemonMissionPtr,&this_ptr_01->base);
  return this_ptr_01;
}
