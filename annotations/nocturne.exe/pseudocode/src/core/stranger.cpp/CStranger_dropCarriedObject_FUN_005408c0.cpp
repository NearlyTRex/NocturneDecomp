// Name: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005408c0
// Address: 005408c0
// Address Range: [[005408c0, 00540913]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CCharacter *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,CVector3f *param_6)

#include "nocturne.h"

void core_stranger_cpp_CStranger_dropCarriedObject_FUN_005408c0(CCharacter *param_1,int param_2,uint param_3,uint param_4,int param_5,CVector3f *param_6)

{
  CCharacter_full_vtable *pCVar1;
  CFlame *pCVar2;
  CVector3f *unaff_ESI;
  
  if (param_1->carry_hands[param_2].carry_actor ==
      *(CDemonActor **)(param_1[2].flames[0x1d].on_event + 0x5c)) {
    pCVar1 = (param_1->base).vtable._uc;
    pCVar2 = param_1[2].flames;
    pCVar2[0x1d].on_event[0x5c] = '\0';
    pCVar2[0x1d].on_event[0x5d] = '\0';
    pCVar2[0x1d].on_event[0x5e] = '\0';
    pCVar2[0x1d].on_event[0x5f] = '\0';
    (*(pCVar1->_uc).dropCarriedObject)(param_1,0,unaff_ESI);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00429170(param_1,param_5,param_6);
  return;
}
