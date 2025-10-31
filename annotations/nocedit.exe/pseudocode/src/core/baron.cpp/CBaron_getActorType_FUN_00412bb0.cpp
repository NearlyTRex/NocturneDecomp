// Name: core_baron.cpp_CBaron_getActorType_FUN_00412bb0
// Address: 00412bb0
// Address Range: [[00412bb0, 00412bb5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_CBaron_getActorType_FUN_00412bb0(CBaron * this_ptr)
// Globals:
//   CDemonActorType g_CBaronClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_baron_cpp_CBaron_getActorType_FUN_00412bb0(CBaron *this_ptr)

{
  return &g_CBaronClassInfo;
}


// Assembly code:
// 00412bb0: MOV EAX,0x8224e0
//   Label: core_baron.cpp_CBaron_getActorType_FUN_00412bb0
//   XREF to: 008224e0 (DATA)
// 00412bb5: RET
