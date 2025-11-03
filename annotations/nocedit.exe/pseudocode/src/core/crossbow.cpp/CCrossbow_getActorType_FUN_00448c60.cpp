// Name: core_crossbow.cpp_CCrossbow_getActorType_FUN_00448c60
// Address: 00448c60
// Address Range: [[00448c60, 00448c65]]
// Convention: __cdecl
// Signature: CDemonActorType * core_crossbow.cpp_CCrossbow_getActorType_FUN_00448c60(CCrossbow * this_ptr)
// Globals:
//   CDemonActorType g_CCrossbowClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_crossbow_cpp_CCrossbow_getActorType_FUN_00448c60(CCrossbow *this_ptr)

{
  return &g_CCrossbowClassInfo;
}


// Assembly code:
// 00448c60: MOV EAX,0x887980
//   Label: core_crossbow.cpp_CCrossbow_getActorType_FUN_00448c60
//   XREF to: 00887980 (DATA)
// 00448c65: RET
