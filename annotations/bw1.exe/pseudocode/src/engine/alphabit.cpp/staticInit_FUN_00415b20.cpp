// Name: engine_alphabit.cpp_staticInit_FUN_00415b20
// Address: 00415b20
// Address Range: [[00415b20, 00415b96]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_staticInit_FUN_00415b20(void)

#include "nocturne.h"

void engine_alphabit_cpp_staticInit_FUN_00415b20(void)

{
  __arrinit(CAlphaBitmap_ARRAY_007c3984,4,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00610a05);
  __arrinit(CAlphaBitmap_ARRAY_007c39d4,5,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00610a15);
  unkafter_alphabit_cpp_CAudioRecPuzzle_ctor_FUN_00415d90(&g_CAudioRecPuzzleInstance);
  _atexit();
  unkafter_superopt_cpp_CChemPuzzle_ctor_FUN_004175f0(&g_CChemPuzzleInstance);
  _atexit();
  return;
}
