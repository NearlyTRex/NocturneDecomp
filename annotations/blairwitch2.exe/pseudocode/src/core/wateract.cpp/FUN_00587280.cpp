// Name: core_wateract.cpp_FUN_00587280
// Address: 00587280
// Address Range: [[00587280, 0058734d] [005873b6, 005873f6]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00587280(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_wateract_cpp_FUN_00587280(int param_1,float param_2)

{
  float fVar1;
  CEventList *this_ptr;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_2 * (float10)_DAT_005edfa6 * (float10)_DAT_005edfae;
  round();
  iVar2 = extraout_EDX + (int)ROUND(fVar4);
  *(int *)(param_1 + 0x2b388) = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x2b384) + 1;
    *(int *)(param_1 + 0x2b388) = iVar2 + -0x10000;
    *(int *)(param_1 + 0x2b384) = iVar3;
    if (0xf < iVar3) {
      *(uint *)(param_1 + 0x2b384) = 0;
    }
  }
  this_ptr = 0x01C38BC0;
  *(float *)(param_1 + 0x80f8) = 1.0 / param_2;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr,(char *)(param_1 + 0x310));
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x3dc) = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,(char *)(param_1 + 0x374));
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x3dc) = 3;
  }
  switch(*(uint *)(param_1 + 0x3dc)) {
  case 1:
    fVar1 = param_2 / *(float *)(param_1 + 0x2c8) + *(float *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x3d8) = fVar1;
    if (fVar1 <= 1.0) break;
    *(uint *)(param_1 + 0x3dc) = 2;
  case 2:
    *(uint *)(param_1 + 0x3d8) = 0x3f800000;
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x3d8) - param_2 / *(float *)(param_1 + 0x2cc);
    *(float *)(param_1 + 0x3d8) = fVar1;
    if (0.0 <= fVar1) break;
    *(uint *)(param_1 + 0x3dc) = 0;
  case 0:
    *(uint *)(param_1 + 0x3d8) = 0;
    break;
  default:
    _DAT_01d046a0 = "..\\core\\wateract.cpp";
    _DAT_01d046a4 = 0x1a5;
    core_main_c_FUN_004e4500("CWaterActor::process - Bad state");
  }
  *(float *)(param_1 + 0x24) =
       *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x3d8) + *(float *)(param_1 + 0x2b38c);
  return;
}
