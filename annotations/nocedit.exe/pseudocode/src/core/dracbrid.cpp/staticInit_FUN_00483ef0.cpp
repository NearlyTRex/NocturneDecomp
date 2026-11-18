// Name: core_dracbrid.cpp_staticInit_FUN_00483ef0
// Address: 00483ef0
// Address Range: [[00483ef0, 00483f7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

{
  g_DraculaBrideOffsetUp.x = 0.0;
  g_DraculaBrideOffsetUp.y = 0.5;
  g_DraculaBrideOffsetUp.z = 0.0;
  g_DraculaBrideOffsetMinusX.x = -0.6;
  g_DraculaBrideOffsetMinusX.y = 0.0;
  g_DraculaBrideOffsetMinusX.z = 0.0;
  g_DraculaBrideOffsetPlusX.x = 0.6;
  g_DraculaBrideOffsetPlusX.y = 0.0;
  g_DraculaBrideOffsetPlusX.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDraculaBrideClassInfo,"CDraculaBride",
             core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00483f80,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  __arrinit(g_FreakySounds,6,&g_SFreakyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006703a0);
  return;
}
