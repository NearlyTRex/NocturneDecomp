// Name: core_bmppuzzl.cpp_staticInit_FUN_004118e0
// Address: 004118e0
// Address Range: [[004118e0, 00411956]]
// Convention: unknown
// Signature: void core_bmppuzzl_cpp_staticInit_FUN_004118e0(void)

#include "nocturne.h"

void core_bmppuzzl_cpp_staticInit_FUN_004118e0(void)

{
  __arrinit(CAlphaBitmap_ARRAY_007dffc0,4,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005f0c67);
  __arrinit(CAlphaBitmap_ARRAY_007e0010,5,&g_CAlphaBitmapTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005f0c77);
  core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_00411b50(&g_CAudioRecPuzzleInstance);
  _atexit(&WatcomStaticDestructorNode_005f0c87);
  core_bmppuzzl_cpp_CChemPuzzle_ctor_FUN_00413200(&g_CChemPuzzleInstance);
  _atexit(&WatcomStaticDestructorNode_005f0c97);
  return;
}
