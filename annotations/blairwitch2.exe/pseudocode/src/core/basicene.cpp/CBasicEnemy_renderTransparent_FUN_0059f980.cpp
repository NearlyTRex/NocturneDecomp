// Name: core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
// Address: 0059f980
// Address Range: [[0059f980, 0059fa10]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy *this_ptr)

{
  CClothList *pCVar1;
  float fVar2;
  int iVar3;
  CClothList *pCVar4;
  float10 fVar5;
  
  if ((this_ptr->base).base.base.is_transparent != 0) {
    fVar5 = (float10)this_ptr->fade_val * (float10)_DAT_005ef9c7;
    round();
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,(int)ROUND(fVar5));
    pCVar1 = &(this_ptr->base).base.cloth_list;
    fVar2 = this_ptr->fade_val;
    iVar3 = 0;
    pCVar4 = pCVar1;
    if (0 < pCVar1->count) {
      do {
        pCVar4->cloths[0]->transparency = fVar2;
        iVar3 = iVar3 + 1;
        pCVar4 = (CClothList *)pCVar4->filenames;
      } while (iVar3 < pCVar1->count);
    }
    iVar3 = core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
    return iVar3;
  }
  return 0;
}
