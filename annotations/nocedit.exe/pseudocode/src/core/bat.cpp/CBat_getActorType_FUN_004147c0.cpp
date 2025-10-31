// Name: core_bat.cpp_CBat_getActorType_FUN_004147c0
// Address: 004147c0
// Address Range: [[004147c0, 004147c5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bat.cpp_CBat_getActorType_FUN_004147c0(CBat * this_ptr)
// Globals:
//   CDemonActorType g_CBatClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_bat_cpp_CBat_getActorType_FUN_004147c0(CBat *this_ptr)

{
  return &g_CBatClassInfo;
}


// Assembly code:
// 004147c0: MOV EAX,0x822710
//   Label: core_bat.cpp_CBat_getActorType_FUN_004147c0
//   XREF to: 00822710 (DATA)
// 004147c5: RET
