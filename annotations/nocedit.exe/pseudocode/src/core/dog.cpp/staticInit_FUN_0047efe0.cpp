// Name: core_dog.cpp_staticInit_FUN_0047efe0
// Address: 0047efe0
// Address Range: [[0047efe0, 0047f003]]
// Convention: __cdecl
// Signature: void core_dog.cpp_staticInit_FUN_0047efe0(void)
// Globals:
//   TerminatedCString s_CZombieDog_00620f81
//   undefined4 g_CZombieDogClassVersion
//   CDemonActorType g_CZombieDogClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_dog_cpp_staticInit_FUN_0047efe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CZombieDogClassInfo,"CZombieDog",core_dog_cpp_factoryFunc_FUN_0047f010,
             &g_CZombieDogClassVersion,2,&g_CEnemyClassInfo);
  return;
}


// Assembly code:
// 0047efe0: PUSH 0x2cf2bb8
//   Label: core_dog.cpp_staticInit_FUN_0047efe0
//   XREF to: 02cf2bb8 (DATA)
// 0047efe5: PUSH 0x2
// 0047efe7: PUSH 0x6702e8
//   XREF to: 006702e8 (DATA)
// 0047efec: PUSH 0x47f010
//   XREF to: 0047f010 (DATA)
// 0047eff1: PUSH 0x620f81
//   XREF to: 00620f81 (DATA)
// 0047eff6: PUSH 0x2c14c9c
//   XREF to: 02c14c9c (DATA)
// 0047effb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0047f000: ADD ESP,0x18
// 0047f003: RET
