// Name: core_game.cpp_staticInit_FUN_004b28b0
// Address: 004b28b0
// Address Range: [[004b28b0, 004b2922]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_staticInit_FUN_004b28b0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_staticInit_FUN_004b28b0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_00449c70(&g_CDemonLightInstance,0x100,0x100);
  _atexit(&g_CDemonLightDestructorNode);
  core_game_cpp_CGame_ctor_FUN_004b2d80(&g_CGameInstance);
  _atexit(&g_CGameDestructorNode);
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&g_CPickList);
  _atexit(&g_CPickListDestructorNode);
  core_dfilter_cpp_CDemonFilter_ctor_FUN_004477f0(&CDemonFilter_01cb8080);
  _atexit(&WatcomStaticDestructorNode_00616420);
  return;
}
