// Name: unkaddr_0059aa80.cpp_FUN_0059aa80
// Address: 0059aa80
// Address Range: [[0059aa80, 0059ab26]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059aa80(void)

#include "nocturne.h"

void unkaddr_0059aa80_cpp_FUN_0059aa80(void)

{
  __arrinit(CAlphaBitmap_ARRAY_026677ec,4,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061e9ab);
  unkaddr_0059aa80_cpp_FUN_0059ab30(&g_CExamplePuzzleInstance);
  g_CExamplePuzzleInstance._0_4_ = &g_CExamplePuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9bb);
  unkaddr_0059aa80_cpp_FUN_0059ab30(&g_CAudioRecPuzzleInstance);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420
            ((CAlphaBitmap *)&g_CAudioRecPuzzleInstance.field_0x4);
  __arrinit(0x266789c,0x1e,&g___1hlg6hbuttonStructTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            ((CKeyFramedModelInstance *)&g_CAudioRecPuzzleInstance.field_0x574);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            ((CKeyFramedModelInstance *)&g_CAudioRecPuzzleInstance.field_0x6f0);
  g_CAudioRecPuzzleInstance._0_4_ = &g_CAudioRecPuzzleVTable;
  _atexit(&WatcomStaticDestructorNode_0061e9cb);
  return;
}
