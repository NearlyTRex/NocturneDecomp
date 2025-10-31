// Name: core_door.cpp_CDoor_getActorType_FUN_0047fac0
// Address: 0047fac0
// Address Range: [[0047fac0, 0047fac5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_door.cpp_CDoor_getActorType_FUN_0047fac0(CDoor * this_ptr)
// Globals:
//   CDemonActorType g_CDoorClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_door_cpp_CDoor_getActorType_FUN_0047fac0(CDoor *this_ptr)

{
  return &g_CDoorClassInfo;
}


// Assembly code:
// 0047fac0: MOV EAX,0x2c14cdc
//   Label: core_door.cpp_CDoor_getActorType_FUN_0047fac0
//   XREF to: 02c14cdc (DATA)
// 0047fac5: RET
