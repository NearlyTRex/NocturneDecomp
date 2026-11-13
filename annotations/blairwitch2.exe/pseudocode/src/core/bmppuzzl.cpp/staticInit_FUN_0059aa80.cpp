// Name: core_bmppuzzl.cpp_staticInit_FUN_0059aa80
// Address: 0059aa80
// Address Range: [[0059aa80, 0059ab26]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_staticInit_FUN_0059aa80(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_staticInit_FUN_0059aa80(void)

{
  __arrinit(CAlphaBitmap_ARRAY_026677ec,4,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061e9ab);
  core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(&g_CExamplePuzzleInstance.base);
  g_CExamplePuzzleInstance.base.vtable = &g_CExamplePuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9bb);
  core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(&g_CAudioRecPuzzleInstance.base);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&g_CAudioRecPuzzleInstance.background);
  __arrinit
            (g_CAudioRecPuzzleInstance.buttons,0x1e,&g___1hlg6hbuttonStructTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(&g_CAudioRecPuzzleInstance.reel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            (&g_CAudioRecPuzzleInstance.reel_shadow_model);
  g_CAudioRecPuzzleInstance.base.vtable = &g_CAudioRecPuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9cb);
  return;
}
