// Name: core_dracbrid.cpp_staticInit_FUN_00483ef0
// Address: 00483ef0
// Address Range: [[00483ef0, 00483f7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

{
  CVector3f_02c6d040.x = 0.0;
  CVector3f_02c6d040.y = 0.5;
  CVector3f_02c6d040.z = 0.0;
  CVector3f_02c6d04c.x = -0.6;
  CVector3f_02c6d04c.y = 0.0;
  CVector3f_02c6d04c.z = 0.0;
  CVector3f_02c6d058.x = 0.6;
  CVector3f_02c6d058.y = 0.0;
  CVector3f_02c6d058.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDraculaBrideClassInfo,"CDraculaBride",
             core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00483f80,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  __arrinit(SFreaky_ARRAY_02c6d0c0,6,&g_SFreakyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006703a0);
  return;
}
