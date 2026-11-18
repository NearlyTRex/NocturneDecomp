// Name: core_tawiscara.cpp_staticInit_FUN_00593d40
// Address: 00593d40
// Address Range: [[00593d40, 00593d9f]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscara_cpp_staticInit_FUN_00593d40(void)

#include "nocturne.h"

void __cdecl core_tawiscara_cpp_staticInit_FUN_00593d40(void)

{
  g_CVector3f_02d24a54.x = -0.28;
  g_CVector3f_02d24a54.y = 0.42;
  g_CVector3f_02d24a54.z = 0.6;
  g_CVector3f_02d24a60.x = 0.35;
  g_CVector3f_02d24a60.y = 0.42;
  g_CVector3f_02d24a60.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTawiscaraClassInfo,"CTawiscara",
             core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0,&g_CTawiscaraClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
