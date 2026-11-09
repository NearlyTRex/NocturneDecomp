// Name: core_game.cpp_staticInit_FUN_0049a1e0
// Address: 0049a1e0
// Address Range: [[0049a1e0, 0049a238]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_0044e110(&g_CDemonLightInstance,0x100,0x100);
  _atexit(&g_CDemonLightDestructorNode);
  core_game_cpp_CGame_ctor_FUN_0049a650(&g_CGameInstance);
  _atexit(&g_CGameDestructorNode);
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&g_CPickList);
  _atexit(&g_CPickListDestructorNode);
  return;
}
