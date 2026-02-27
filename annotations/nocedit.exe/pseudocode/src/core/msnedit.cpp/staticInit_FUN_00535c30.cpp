// Name: core_msnedit.cpp_staticInit_FUN_00535c30
// Address: 00535c30
// Address Range: [[00535c30, 00535c57]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void)

{
  core_actor_cpp_CActorPropertyList_init_FUN_0040e130(&g_MsnEditPropertyList);
  shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(&g_CEdCheckInstance);
  _atexit(&g_CEdCheckDestructorNode);
  return;
}
