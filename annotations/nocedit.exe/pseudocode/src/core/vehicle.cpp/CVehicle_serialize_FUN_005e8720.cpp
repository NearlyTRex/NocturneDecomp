// Name: core_vehicle.cpp_CVehicle_serialize_FUN_005e8720
// Address: 005e8720
// Address Range: [[005e8720, 005e88a0]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle *this_ptr)

{
  int iVar1;
  char *float_ptr;
  char *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->unk1,"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->tire_count,"tireCount");
  iVar1 = 0;
  if (0 < this_ptr->tire_count) {
    float_ptr_00 = this_ptr->unk2 + 0x10;
    float_ptr = this_ptr->unk2 + 0xc;
    model_ptr = (CKeyFramedModelInstance *)(this_ptr->unk2 + 0x14);
    do {
      core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(model_ptr,(char *)0x0);
      core_actor_cpp_serializeVector_FUN_0040b340
                ((CVector3f *)(this_ptr->unk2 + iVar1 * 0x1b4),"static_bpos");
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)float_ptr,"radius");
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x1b4;
      float_ptr_00 = float_ptr_00 + 0x1b4;
    } while (iVar1 < this_ptr->tire_count);
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->cur_time,"curTime");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->total_time,"totalTime");
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->unk3,"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->unk3 + 0x3c),"lastMobsterLeft");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->unk3 + 0x3c),"lastMobsterRight");
  return;
}
