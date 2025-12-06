// Name: core_gore.cpp_CreateFlies_FUN_004edf30
// Address: 004edf30
// Address Range: [[004edf30, 004ee021]]
// Convention: unknown
// Signature: undefined core_gore.cpp_CreateFlies_FUN_004edf30()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_CreateFlies(byte param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

CFlies * core_gore_cpp_CreateFlies_FUN_004edf30
                   (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
                   uint param_5,float *param_6,uint param_7,uint param_8,
                   uint *param_9,float param_10)

{
  int iVar1;
  float fVar2;
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\gore.cpp",0x67c);
  if (this_ptr != (CFlies *)0x0) {
    this_ptr = core_flies_cpp_FUN_004cbd60(this_ptr);
  }
  if (this_ptr == (CFlies *)0x0) {
    g_CurrentFilename = "..\\core\\gore.cpp";
    g_CurrentLineNumber = 0x67d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create flies!",unaff_EBX);
  }
  fVar2 = (float)60;
  (this_ptr->base_actor).location.position.x = *param_6;
  (this_ptr->base_actor).location.position.y = param_6[1];
  (this_ptr->base_actor).location.position.z = param_6[2];
  iVar1 = *(int *)g_CDemonMissionPtr->field0_0x0;
  this_ptr->field1_0x158[0xc] = '\0';
  this_ptr->field1_0x158[0xd] = '\0';
  this_ptr->field1_0x158[0xe] = '\0';
  this_ptr->field1_0x158[0xf] = '\0';
  (this_ptr->base_actor).location.area_id = iVar1;
  *(uint **)(this_ptr->field1_0x158 + 0x28b4) = param_9;
  *(float *)(this_ptr->field1_0x158 + 0x28bc) = fVar2 / param_10;
  if ((param_9 != (uint *)0x0) && (this_ptr->field1_0x158 != (char *)param_9)) {
    *(uint *)this_ptr->field1_0x158 = *param_9;
    *(uint *)(this_ptr->field1_0x158 + 4) = param_9[1];
    *(uint *)(this_ptr->field1_0x158 + 8) = param_9[2];
  }
  (*((this_ptr->base_actor).vtable)->setup)(&this_ptr->base_actor);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  return this_ptr;
}
