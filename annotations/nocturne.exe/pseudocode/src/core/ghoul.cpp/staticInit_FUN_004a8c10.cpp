// Name: core_ghoul.cpp_staticInit_FUN_004a8c10
// Address: 004a8c10
// Address Range: [[004a8c10, 004a8c65]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004a8c10(void)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_staticInit_FUN_004a8c10(void)

{
  CVector3f_01c78bc0.x = -0.6;
  CVector3f_01c78bc0.y = 0.0;
  CVector3f_01c78bc0.z = 0.0;
  CVector3f_01c78bcc.x = 0.6;
  CVector3f_01c78bcc.y = 0.0;
  CVector3f_01c78bcc.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGhoulActorType_01c78bd8,"CGhoul",core_ghoul_cpp_FUN_004a8c70,&INT_005b9650
             ,7,&g_CEnemyActorType_01bcdebc);
  return;
}
