// Name: core_zombie.cpp_FUN_0059aa80
// Address: 0059aa80
// Address Range: [[0059aa80, 0059ab26]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0059aa80(void)

#include "nocturne.h"

void core_zombie_cpp_FUN_0059aa80(void)

{
  __arrinit(CAlphaBitmap_ARRAY_026677ec,4,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061e9ab);
  core_zombie_cpp_FUN_0059ab30(&g_CExamplePuzzleInstance);
  g_CExamplePuzzleInstance.vtable = &g_CExamplePuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9bb);
  core_zombie_cpp_FUN_0059ab30(&g_CAudioRecPuzzleInstance);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_CAudioRecPuzzleInstance.background);
  __arrinit(0x266789c,0x1e,&g___1hlg6hbuttonStructTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(&g_CAudioRecPuzzleInstance.reel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            (&g_CAudioRecPuzzleInstance.reel_shadow_model);
  g_CAudioRecPuzzleInstance.vtable = &g_CAudioRecPuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9cb);
  return;
}
