// Name: core_simbox.cpp_CSimBox_FUN_005891b0
// Address: 005891b0
// Address Range: [[005891b0, 00589258]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_005891b0(CSimBox * this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_005891b0(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->unk,"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(this_ptr->unk + 0x180),"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(this_ptr->unk + 0x1e8),"initialVelocity");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(this_ptr->unk + 500),"initRotVel");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->unk + 0x184),"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 0x17c),"type");
  return;
}
