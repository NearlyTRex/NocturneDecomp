// Name: core_dracbrid.cpp_staticInit_FUN_00458580
// Address: 00458580
// Address Range: [[00458580, 0045860c]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_staticInit_FUN_00458580(void)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_staticInit_FUN_00458580(void)

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
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDraculaBrideClassInfo,"CDraculaBride",
             core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00458610,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  __arrinit(g_FreakySounds,6,&g_SFreakyTypeInfo_0059c560);
  _atexit(&g_WatcomStaticDestructorNode_005ae6b8);
  return;
}
