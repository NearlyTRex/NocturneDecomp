// Name: core_game.cpp_staticInit_FUN_004cb7d0
// Address: 004cb7d0
// Address Range: [[004cb7d0, 004cb863]]
// Convention: unknown
// Signature: void core_game_cpp_staticInit_FUN_004cb7d0(void)

#include "nocturne.h"

void core_game_cpp_staticInit_FUN_004cb7d0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_00462470(&g_CDemonLightInstance,0x100,0x100);
  _atexit(&g_CDemonLightDestructorNode);
  core_game_cpp_CGame_ctor_FUN_004cbc80(&g_CGameInstance);
  _atexit(&g_CGameDestructorNode);
  shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&g_CPickList);
  _atexit(&g_CPickListDestructorNode);
  core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950(&CDemonFilter_01cd0af0);
  _atexit(&WatcomStaticDestructorNode_0061d8d0);
  __arrinit(CAlphaBitmap_ARRAY_01cd0b44,8,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061d8e0);
  return;
}
