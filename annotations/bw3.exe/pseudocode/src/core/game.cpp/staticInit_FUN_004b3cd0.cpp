// Name: core_game.cpp_staticInit_FUN_004b3cd0
// Address: 004b3cd0
// Address Range: [[004b3cd0, 004b3d63]]
// Convention: unknown
// Signature: void core_game_cpp_staticInit_FUN_004b3cd0(void)

#include "nocturne.h"

void core_game_cpp_staticInit_FUN_004b3cd0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_0045c180(&g_CDemonLightInstance,0x100,0x100);
  _atexit(&g_CDemonLightDestructorNode);
  core_game_cpp_CGame_ctor_FUN_004b4180(&g_CGameInstance);
  _atexit();
  shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&g_CPickList);
  _atexit();
  core_dfilter_cpp_CDemonFilter_ctor_FUN_004598a0(&CDemonFilter_01d22af8);
  _atexit();
  __arrinit(CAlphaBitmap_ARRAY_01d22b4c,8);
  _atexit();
  return;
}
