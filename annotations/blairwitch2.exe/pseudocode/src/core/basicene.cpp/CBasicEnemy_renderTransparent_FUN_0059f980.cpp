// Name: core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
// Address: 0059f980
// Address Range: [[0059f980, 0059fa10]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy *this_ptr)

{
  CBasicEnemy *pCVar1;
  uint uVar2;
  int iVar3;
  CBasicEnemy *pCVar4;
  float10 fVar5;
  
  if (*(int *)(this_ptr + 0xfc) != 0) {
    fVar5 = (float10)*(float *)(this_ptr + 0x113c4) * (float10)_DAT_005ef9c7;
    round();
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,(int)ROUND(fVar5));
    pCVar1 = this_ptr + 0x2d0c;
    uVar2 = *(uint *)(this_ptr + 0x113c4);
    iVar3 = 0;
    pCVar4 = pCVar1;
    if (0 < *(int *)pCVar1) {
      do {
        *(uint *)(*(int *)(pCVar4 + 0x194) + 0x37b48) = uVar2;
        iVar3 = iVar3 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar3 < *(int *)pCVar1);
    }
    iVar3 = core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
    return iVar3;
  }
  return 0;
}
