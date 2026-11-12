// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00415d90
// Address: 00415d90
// Address Range: [[00415d90, 00415de3]]
// Convention: unknown
// Signature: CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_00415d90(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_00415d90(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  void *pvVar3;
  CKeyFramedModelInstance *pCVar4;
  
  iVar1 = engine_alphabit_cpp_FUN_00415ba0(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(iVar1 + 4));
  pvVar3 = __arrinit(&pCVar2[4].width,0x32,&g_buttonStructTypeInfo);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)((int)pvVar3 + 0x898));
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(pCVar4 + 1);
  ((CAudioRecPuzzle *)(pCVar4[-8].model_name + 0xf4))->vtable = &g_CAudioRecPuzzleVTable;
  return (CAudioRecPuzzle *)(pCVar4[-8].model_name + 0xf4);
}
