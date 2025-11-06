// Name: core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000
// Address: 00419000
// Address Range: [[00419000, 00419005]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000(CBodyPart * this_ptr)
// Globals:
//   CDemonActorType g_CBodyPartClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_bodypart_cpp_CBodyPart_getActorType_FUN_00419000(CBodyPart *this_ptr)

{
  return &g_CBodyPartClassInfo;
}


// Assembly code:
// 00419000: MOV EAX,0x822908
//   Label: core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000
//   XREF to: 00822908 (DATA)
// 00419005: RET
