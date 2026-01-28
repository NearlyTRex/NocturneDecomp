// Name: core_game.cpp_staticInit_FUN_004d76d0
// Address: 004d76d0
// Address Range: [[004d76d0, 004d7728]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_staticInit_FUN_004d76d0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_staticInit_FUN_004d76d0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(&g_CDemonLightInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode1);
  core_game_cpp_CGame_ctor_FUN_004d7b40(&g_CGameInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode2);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&g_CPickList);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode3);
  return;
}
