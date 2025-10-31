// Name: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0
// Address: 004127a0
// Address Range: [[004127a0, 004127a5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0(CBackgroundActor * this_ptr)
// Globals:
//   CDemonActorType g_CBackgroundActorClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_backgnd_cpp_CBackgroundActor_getActorType_FUN_004127a0(CBackgroundActor *this_ptr)

{
  return &g_CBackgroundActorClassInfo;
}


// Assembly code:
// 004127a0: MOV EAX,0x82245c
//   Label: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0
//   XREF to: 0082245c (DATA)
// 004127a5: RET
