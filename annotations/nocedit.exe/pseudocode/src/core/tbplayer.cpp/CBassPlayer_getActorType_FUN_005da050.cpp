// Name: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_005da050
// Address: 005da050
// Address Range: [[005da050, 005da055]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tbplayer.cpp_CBassPlayer_getActorType_FUN_005da050(CBassPlayer * this_ptr)
// Globals:
//   CDemonActorType g_CBassPlayerClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_tbplayer_cpp_CBassPlayer_getActorType_FUN_005da050(CBassPlayer *this_ptr)

{
  return &g_CBassPlayerClassInfo;
}


// Assembly code:
// 005da050: MOV EAX,0x3f6cc18
//   Label: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_005da050
//   XREF to: 03f6cc18 (DATA)
// 005da055: RET
