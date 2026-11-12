// Name: core_doc.cpp_FUN_0045df30
// Address: 0045df30
// Address Range: [[0045df30, 0045e00d]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0045df30(CCharacter *param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0045df30(CCharacter *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(int *)param_1[2].flames[2].base.create_event != 0) &&
     ((float)param_1[2].flames[2].globe.linear_radius_scaled < 1.0)) {
    uVar3 = 1;
  }
  if ((*(int *)param_1[2].flames[2].base.create_event == 0) &&
     (0.0 < (float)param_1[2].flames[2].globe.linear_radius_scaled)) {
    uVar3 = 1;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&param_1->model);
  iVar1 = *(int *)(iVar1 + 0x24);
  if ((((iVar1 == 0x13) || (iVar1 == 0x15)) || (iVar1 == 0x14)) || (iVar1 == 0x16)) {
    uVar3 = 1;
  }
  fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
  if ((fVar2 < 1.0) &&
     (fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,2),
     fVar2 < 1.0)) {
    uVar3 = 1;
  }
  if (param_1->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    uVar3 = 1;
  }
  return uVar3;
}
