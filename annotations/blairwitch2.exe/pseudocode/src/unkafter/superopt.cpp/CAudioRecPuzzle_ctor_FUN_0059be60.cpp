// Name: unkafter_superopt.cpp_CAudioRecPuzzle_ctor_FUN_0059be60
// Address: 0059be60
// Address Range: [[0059be60, 0059beb3]]
// Convention: unknown
// Signature: CAudioRecPuzzle * unkafter_superopt_cpp_CAudioRecPuzzle_ctor_FUN_0059be60(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * unkafter_superopt_cpp_CAudioRecPuzzle_ctor_FUN_0059be60(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  
  iVar1 = unkaddr_0059aa80_cpp_FUN_0059ab30(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(iVar1 + 4));
  iVar1 = __arrinit(&pCVar2[3].width,0x1e,&g___1hlg6hbuttonStructTypeInfo)
  ;
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(iVar1 + 0x528));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(pCVar3 + 1);
  *(byte ***)(pCVar3[-5].model_name + 4) = &g_CAudioRecPuzzleVTable;
  return (CAudioRecPuzzle *)(pCVar3[-5].model_name + 4);
}
