// Name: unkafter_alphabit.cpp_CAudioRecPuzzle_ctor_FUN_00415d90
// Address: 00415d90
// Address Range: [[00415d90, 00415de3]]
// Convention: unknown
// Signature: CAudioRecPuzzle * unkafter_alphabit_cpp_CAudioRecPuzzle_ctor_FUN_00415d90(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * unkafter_alphabit_cpp_CAudioRecPuzzle_ctor_FUN_00415d90(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  
  iVar1 = unkafter_alphabit_cpp_FUN_00415ba0(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(iVar1 + 4));
  iVar1 = __arrinit(&pCVar2[4].width,0x32,&g_buttonStructTypeInfo);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)(iVar1 + 0x898));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(pCVar3 + 1);
  ((CAudioRecPuzzle *)(pCVar3[-8].model_name + 0xf4))->vtable = &g_CAudioRecPuzzleVTable;
  return (CAudioRecPuzzle *)(pCVar3[-8].model_name + 0xf4);
}
