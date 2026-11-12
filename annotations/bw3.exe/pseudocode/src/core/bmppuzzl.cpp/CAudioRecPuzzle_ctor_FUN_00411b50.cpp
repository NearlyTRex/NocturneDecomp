// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411ba3]]
// Convention: unknown
// Signature: CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_00411b50(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAudioRecPuzzle * core_bmppuzzl_cpp_CAudioRecPuzzle_ctor_FUN_00411b50(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  
  iVar1 = core_bmppuzzl_cpp_FUN_00411960(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(iVar1 + 4));
  iVar1 = __arrinit(pCVar2 + 4,0x32,&g_buttonStructTypeInfo);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(iVar1 + 0x898));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(pCVar3 + 1);
  pCVar3[-8].model_ptr = (CKeyFramedModel *)&g_CAudioRecPuzzleVTable;
  return (CAudioRecPuzzle *)&pCVar3[-8].model_ptr;
}
