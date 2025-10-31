// Name: core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80
// Address: 005dda80
// Address Range: [[005dda80, 005dda85]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80(CTommyGun * this_ptr)
// Globals:
//   CDemonActorType g_CTommyGunClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_tommygun_cpp_CTommyGun_getActorType_FUN_005dda80(CTommyGun *this_ptr)

{
  return &g_CTommyGunClassInfo;
}


// Assembly code:
// 005dda80: MOV EAX,0x3f873a4
//   Label: core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80
//   XREF to: 03f873a4 (DATA)
// 005dda85: RET
