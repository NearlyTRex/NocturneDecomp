// Name: core_turret.cpp_CTurret_getActorType_FUN_005e20e0
// Address: 005e20e0
// Address Range: [[005e20e0, 005e20e5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_turret.cpp_CTurret_getActorType_FUN_005e20e0(CTurret * this_ptr)
// Globals:
//   CDemonActorType g_CTurretClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_turret_cpp_CTurret_getActorType_FUN_005e20e0(CTurret *this_ptr)

{
  return &g_CTurretClassInfo;
}


// Assembly code:
// 005e20e0: MOV EAX,0x3f874a4
//   Label: core_turret.cpp_CTurret_getActorType_FUN_005e20e0
//   XREF to: 03f874a4 (DATA)
// 005e20e5: RET
