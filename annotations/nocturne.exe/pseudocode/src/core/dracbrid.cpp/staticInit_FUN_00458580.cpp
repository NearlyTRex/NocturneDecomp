// Name: core_dracbrid.cpp_staticInit_FUN_00458580
// Address: 00458580
// Address Range: [[00458580, 0045860c]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_staticInit_FUN_00458580(void)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_staticInit_FUN_00458580(void)

{
  CVector3f_01b4d200.x = 0.0;
  CVector3f_01b4d200.y = 0.5;
  CVector3f_01b4d200.z = 0.0;
  CVector3f_01b4d20c.x = -0.6;
  CVector3f_01b4d20c.y = 0.0;
  CVector3f_01b4d20c.z = 0.0;
  CVector3f_01b4d218.x = 0.6;
  CVector3f_01b4d218.y = 0.0;
  CVector3f_01b4d218.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDraculaBrideActorType_01b4d224,"CDraculaBride",
             core_dracbrid_cpp_factoryFunc_FUN_00458610,&g_INT_005ae6c8,9,
             &g_CEnemyActorType_01bcdebc);
  __arrinit(&DAT_01b4d280,6,&g_SFreakyTypeInfo_0059c560);
  _atexit(&g_WatcomStaticDestructorNode_005ae6b8);
  return;
}
