// Name: core_barrier.cpp_CBarrier_getActorType_FUN_004141b0
// Address: 004141b0
// Address Range: [[004141b0, 004141b5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_barrier.cpp_CBarrier_getActorType_FUN_004141b0(CBarrier * this_ptr)
// Globals:
//   CDemonActorType g_CBarrierClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_004141b0(CBarrier *this_ptr)

{
  return &g_CBarrierClassInfo;
}


// Assembly code:
// 004141b0: MOV EAX,0x8226d4
//   Label: core_barrier.cpp_CBarrier_getActorType_FUN_004141b0
//   XREF to: 008226d4 (DATA)
// 004141b5: RET
