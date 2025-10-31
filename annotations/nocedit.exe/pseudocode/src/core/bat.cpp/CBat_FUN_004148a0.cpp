// Name: core_bat.cpp_CBat_FUN_004148a0
// Address: 004148a0
// Address Range: [[004148a0, 004148d2]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_004148a0(CBat * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_course.cpp_CCourse_load_FUN_00442580
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_004148a0(CBat *this_ptr)

{
  float min_value;
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->model_name);
  core_course_cpp_CCourse_load_FUN_00442580
            ((CCourse *)(this_ptr->course_filename + 0x20),this_ptr->course_filename);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_bat_cpp_FUN_00414ce0();
  fVar1 = this_ptr->periodic_sound_timer_max;
  min_value = this_ptr->periodic_sound_timer_min;
  this_ptr->field10_0x380[0] = '\0';
  this_ptr->field10_0x380[1] = '\0';
  this_ptr->field10_0x380[2] = '\0';
  this_ptr->field10_0x380[3] = '\0';
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar1);
  *(float *)(this_ptr->field10_0x380 + 4) = fVar1;
  return;
}


// Assembly code:
// 004148a0: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_004148a0
// 004148a1: SUB ESP,0x4
// 004148a4: MOV EBX,dword ptr [ESP + 0xc]
// 004148a8: LEA EAX,[EBX + 0x188]
// 004148ae: PUSH EAX
// 004148af: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004148b4: ADD ESP,0x4
// 004148b7: LEA EAX,[EBX + 0x158]
// 004148bd: PUSH EAX
// 004148be: LEA EAX,[EBX + 0x178]
// 004148c4: PUSH EAX
// 004148c5: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 004148ca: ADD ESP,0x8
// 004148cd: PUSH EBX
// 004148ce: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
