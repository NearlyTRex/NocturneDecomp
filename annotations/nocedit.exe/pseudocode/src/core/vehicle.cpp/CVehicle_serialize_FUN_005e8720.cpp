// Name: core_vehicle.cpp_CVehicle_serialize_FUN_005e8720
// Address: 005e8720
// Address Range: [[005e8720, 005e88a0]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_serialize_FUN_005e8720(CVehicle * this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle *this_ptr)

{
  CVector3f *vector_ptr;
  int iVar1;
  float *float_ptr;
  float *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_0000000c + 0x938),"tireCount");
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000010 + 0x938)) {
    vector_ptr = (CVector3f *)(in_stack_00000010 + 0x93c);
    float_ptr_00 = (float *)(in_stack_00000010 + 0x94c);
    float_ptr = (float *)(in_stack_00000010 + 0x948);
    model_ptr = (CKeyFramedModelInstance *)(in_stack_00000010 + 0x950);
    do {
      core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(model_ptr,(char *)0x0);
      core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr,"static_bpos");
      core_actor_cpp_serializeFloat_FUN_0040b770(float_ptr,"radius");
      core_actor_cpp_serializeFloat_FUN_0040b770(float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x6d;
      float_ptr_00 = float_ptr_00 + 0x6d;
    } while (iVar1 < *(int *)(in_stack_00000020 + 0x938));
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000020 + 0x102c),"curTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000018 + 0x1030),"totalTime");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_0000001c + 0x1034),"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000020 + 0x1070),"lastMobsterLeft");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000020 + 0x1070),"lastMobsterRight");
  return;
}
