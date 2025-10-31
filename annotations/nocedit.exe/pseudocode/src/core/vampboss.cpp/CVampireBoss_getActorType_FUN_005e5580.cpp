// Name: core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580
// Address: 005e5580
// Address Range: [[005e5580, 005e5585]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580(CVampireBoss * this_ptr)
// Globals:
//   CDemonActorType g_CVampireBossClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_vampboss_cpp_CVampireBoss_getActorType_FUN_005e5580(CVampireBoss *this_ptr)

{
  return &g_CVampireBossClassInfo;
}


// Assembly code:
// 005e5580: MOV EAX,0x3f8751c
//   Label: core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580
//   XREF to: 03f8751c (DATA)
// 005e5585: RET
