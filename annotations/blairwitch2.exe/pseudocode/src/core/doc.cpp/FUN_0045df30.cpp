// Name: core_doc.cpp_FUN_0045df30
// Address: 0045df30
// Address Range: [[0045df30, 0045e00d]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0045df30(CCharacter *param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0045df30(CCharacter *param_1)

{
  int iVar1;
  SMotion *pSVar2;
  float fVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(int *)param_1[2].flames[2].base.create_event != 0) &&
     ((float)param_1[2].flames[2].globe.linear_radius_scaled < 1.0)) {
    uVar4 = 1;
  }
  if ((*(int *)param_1[2].flames[2].base.create_event == 0) &&
     (0.0 < (float)param_1[2].flames[2].globe.linear_radius_scaled)) {
    uVar4 = 1;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&(param_1->model).base);
  iVar1 = pSVar2->state_index;
  if ((((iVar1 == 0x13) || (iVar1 == 0x15)) || (iVar1 == 0x14)) || (iVar1 == 0x16)) {
    uVar4 = 1;
  }
  fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
  if ((fVar3 < 1.0) &&
     (fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,2),
     fVar3 < 1.0)) {
    uVar4 = 1;
  }
  if (param_1->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    uVar4 = 1;
  }
  return uVar4;
}
