// Name: core_gore.cpp_CreateFlies_FUN_004edf30
// Address: 004edf30
// Address Range: [[004edf30, 004ee021]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_gore_cpp_CreateFlies_FUN_004edf30(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_CreateFlies(byte param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

CFlies * __cdecl core_gore_cpp_CreateFlies_FUN_004edf30(void)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  CFlies *this_ptr_00;
  float *in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  float *in_stack_00000014;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\gore.cpp",0x67c);
  this_ptr_00 = (CFlies *)0x0;
  if (this_ptr != (CFlies *)0x0) {
    this_ptr_00 = core_flies_cpp_CFlies_ctor_FUN_004cbd60(this_ptr);
  }
  if (this_ptr_00 == (CFlies *)0x0) {
    g_CurrentFilename = "..\\core\\gore.cpp";
    g_CurrentLineNumber = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create flies!");
  }
  fVar2 = (float)60;
  (this_ptr_00->base).location.position.x = *in_stack_00000008;
  (this_ptr_00->base).location.position.y = in_stack_00000008[1];
  (this_ptr_00->base).location.position.z = in_stack_00000008[2];
  iVar1 = *(int *)g_CDemonMissionPtr->unk1;
  this_ptr_00->count = 0;
  (this_ptr_00->base).location.area_id = iVar1;
  this_ptr_00->gather_count = in_stack_0000000c;
  this_ptr_00->gather_time = fVar2 / in_stack_00000010;
  if ((in_stack_00000014 != (float *)0x0) &&
     (&this_ptr_00->box_size != (CVector3f *)in_stack_00000014)) {
    (this_ptr_00->box_size).x = *in_stack_00000014;
    (this_ptr_00->box_size).y = in_stack_00000014[1];
    (this_ptr_00->box_size).z = in_stack_00000014[2];
  }
  (*((this_ptr_00->base).vtable._ub)->setup)(&this_ptr_00->base);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  return this_ptr_00;
}
