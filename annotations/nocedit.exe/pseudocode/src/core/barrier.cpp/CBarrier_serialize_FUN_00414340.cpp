// Name: core_barrier.cpp_CBarrier_serialize_FUN_00414340
// Address: 00414340
// Address Range: [[00414340, 00414398]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_serialize_FUN_00414340(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_serialize_FUN_00414340(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeVector_FUN_0040b340((CVector3f *)this_ptr->unk,"size");
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->unk + 0x10),"effectClassNameList");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->unk + 0xc),"addToPathGrid");
  return;
}
