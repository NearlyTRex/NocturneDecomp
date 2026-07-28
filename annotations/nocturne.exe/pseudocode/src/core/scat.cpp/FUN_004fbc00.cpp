// Name: core_scat.cpp_FUN_004fbc00
// Address: 004fbc00
// Address Range: [[004fbc00, 004fbcbe]]
// Convention: unknown
// Signature: CCharacter * core_scat_cpp_FUN_004fbc00(undefined4 param_1)

#include "nocturne.h"

CCharacter * core_scat_cpp_FUN_004fbc00(uint param_1)

{
  CFlame *pCVar1;
  CCharacter *this_ptr;
  
  this_ptr = (CCharacter *)core_hero_cpp_FUN_004b46d0(param_1);
  (this_ptr->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_scat_cpp_CScat_setup_FUN_004fbcc0_005a1554;
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[4] = '\0';
  pCVar1[0x1d].on_event[5] = '\0';
  pCVar1[0x1d].on_event[6] = '\0';
  pCVar1[0x1d].on_event[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(&this_ptr->model,"scat.dfm")
  ;
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x14] = '\0';
  pCVar1[0x1d].on_event[0x15] = '\0';
  pCVar1[0x1d].on_event[0x16] = -0x80;
  pCVar1[0x1d].on_event[0x17] = '?';
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x10] = '\0';
  pCVar1[0x1d].on_event[0x11] = '\0';
  pCVar1[0x1d].on_event[0x12] = '\0';
  pCVar1[0x1d].on_event[0x13] = '\0';
  *(uint *)(this_ptr[2].flames[0x1d].on_event + 0xc) =
       *(uint *)(this_ptr[2].flames[0x1d].on_event + 0x10);
  *(uint *)(this_ptr[2].flames[0x1d].on_event + 8) =
       *(uint *)(this_ptr[2].flames[0x1d].on_event + 0xc);
  core_scat_cpp_FUN_004fbe80(this_ptr);
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x18] = '\0';
  pCVar1[0x1d].on_event[0x19] = '\0';
  pCVar1[0x1d].on_event[0x1a] = '\0';
  pCVar1[0x1d].on_event[0x1b] = '\0';
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x20] = '\0';
  pCVar1[0x1d].on_event[0x21] = '\0';
  pCVar1[0x1d].on_event[0x22] = '\0';
  pCVar1[0x1d].on_event[0x23] = '\0';
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x28] = '\0';
  pCVar1[0x1d].on_event[0x29] = '\0';
  pCVar1[0x1d].on_event[0x2a] = '\0';
  pCVar1[0x1d].on_event[0x2b] = '\0';
  pCVar1 = this_ptr[2].flames;
  pCVar1[0x1d].on_event[0x2c] = '\0';
  pCVar1[0x1d].on_event[0x2d] = '\0';
  pCVar1[0x1d].on_event[0x2e] = '\0';
  pCVar1[0x1d].on_event[0x2f] = '\0';
  *(uint *)(this_ptr[2].flames[0x1d].on_event + 0x1c) =
       *(uint *)(this_ptr[2].flames[0x1d].on_event + 0x20);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (this_ptr,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (this_ptr,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr;
}
