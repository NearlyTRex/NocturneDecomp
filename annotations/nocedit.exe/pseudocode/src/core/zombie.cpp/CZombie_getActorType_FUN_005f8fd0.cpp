// Name: core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0
// Address: 005f8fd0
// Address Range: [[005f8fd0, 005f8fd5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0(CZombie * this_ptr)
// Globals:
//   CDemonActorType g_CZombieClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_zombie_cpp_CZombie_getActorType_FUN_005f8fd0(CZombie *this_ptr)

{
  return &g_CZombieClassInfo;
}


// Assembly code:
// 005f8fd0: MOV EAX,0x3f9ad20
//   Label: core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0
//   XREF to: 03f9ad20 (DATA)
// 005f8fd5: RET
