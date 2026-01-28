// Name: core_msnedit.cpp_staticInit_FUN_00535c30
// Address: 00535c30
// Address Range: [[00535c30, 00535c57]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void)

{
  core_actor_cpp_FUN_0040e130();
  shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(&g_CEdCheckInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CEdCheckDestructorNode);
  return;
}
