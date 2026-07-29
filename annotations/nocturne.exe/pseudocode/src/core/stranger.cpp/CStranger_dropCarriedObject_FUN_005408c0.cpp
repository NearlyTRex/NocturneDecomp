// Name: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005408c0
// Address: 005408c0
// Address Range: [[005408c0, 00540913]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CEnemy *param_1,int param_2,CVector3f *param_3)

#include "nocturne.h"

void core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CEnemy *param_1,int param_2,CVector3f *param_3)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CPlatform *)(param_1->base).carry_hands[param_2].carry_actor ==
      param_1[2].base.flames[0x1d].base.standing_platform) {
    pCVar1 = (param_1->base).base.vtable._ue;
    param_1[2].base.flames[0x1d].base.standing_platform = (CPlatform *)0x0;
    (*(pCVar1->_ue).updateVictim)(param_1,0.0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00429170(&param_1->base,param_2,param_3);
  return;
}
