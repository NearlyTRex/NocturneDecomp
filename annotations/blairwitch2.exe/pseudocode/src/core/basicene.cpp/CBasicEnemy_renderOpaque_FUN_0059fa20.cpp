// Name: core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20
// Address: 0059fa20
// Address Range: [[0059fa20, 0059fa6c]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(CBasicEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_basicene_cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(CBasicEnemy *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((this_ptr->base).base.base.is_transparent == 0) {
    iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) && (g_CGameHookPtr->debug_state_display != 0)) {
    unkafter_basicene_cpp_FUN_0059fae0(this_ptr);
    return iVar2;
  }
  return iVar2;
}
