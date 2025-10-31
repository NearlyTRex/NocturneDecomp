// Name: core_ammo.cpp_CAmmo_getActorType_FUN_00410db0
// Address: 00410db0
// Address Range: [[00410db0, 00410db5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ammo.cpp_CAmmo_getActorType_FUN_00410db0(CAmmo * this_ptr)
// Globals:
//   CDemonActorType g_CAmmoClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_00410db0(CAmmo *this_ptr)

{
  return &g_CAmmoClassInfo;
}


// Assembly code:
// 00410db0: MOV EAX,0x82236c
//   Label: core_ammo.cpp_CAmmo_getActorType_FUN_00410db0
//   XREF to: 0082236c (DATA)
// 00410db5: RET
