// Name: core_stranger.cpp_CStranger_drop_FUN_00540920
// Address: 00540920
// Address Range: [[00540920, 00540965]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_drop_FUN_00540920(CEnemy *param_1,CPlatform *param_2,CVector3f *param_3)

#include "nocturne.h"

void core_stranger_cpp_CStranger_drop_FUN_00540920(CEnemy *param_1,CPlatform *param_2,CVector3f *param_3)

{
  CEnemy_full_vtable *pCVar1;
  
  if (param_2 == param_1[2].base.flames[0x1d].base.standing_platform) {
    pCVar1 = (param_1->base).base.vtable._ue;
    param_1[2].base.flames[0x1d].base.standing_platform = (CPlatform *)0x0;
    (*(pCVar1->_ue).updateVictim)(param_1,0.0);
  }
  core_charactr_cpp_FUN_00428100(&param_1->base,&param_2->base,param_3);
  return;
}
