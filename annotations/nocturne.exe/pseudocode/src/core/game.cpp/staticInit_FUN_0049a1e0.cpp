// Name: core_game.cpp_staticInit_FUN_0049a1e0
// Address: 0049a1e0
// Address Range: [[0049a1e0, 0049a238]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_0044e110((CDemonLight *)&DAT_01c74640,0x100,0x100);
  _atexit(&g_WatcomStaticDestructorNode_005b92c0);
  core_game_cpp_CGame_ctor_FUN_0049a650((CGame *)&DAT_01c775ec);
  _atexit(&g_WatcomStaticDestructorNode_005b92d0);
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&DAT_01c78424);
  _atexit(&g_WatcomStaticDestructorNode_005b92e0);
  return;
}
