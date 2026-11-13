// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_0059be60
// Address: 0059be60
// Address Range: [[0059be60, 0059beb3]]
// Convention: __cdecl
// Signature: CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_0059be60(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

CAudioRecPuzzle * __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_0059be60(CAudioRecPuzzle *this_ptr)

{
  CPuzzle *pCVar1;
  CAlphaBitmap *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar1 = core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(&this_ptr->base);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(pCVar1 + 1));
  pvVar3 = __arrinit
                     (&pCVar2[3].width,0x1e,&g___1hlg6hbuttonStructTypeInfo);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)((int)pvVar3 + 0x528));
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(pCVar4 + 1);
  (((CAudioRecPuzzle *)(pCVar4[-5].model_name + 4))->base).vtable = &g_CAudioRecPuzzleVTable;
  return (CAudioRecPuzzle *)(pCVar4[-5].model_name + 4);
}
