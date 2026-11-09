// Name: core_wateract.cpp_FUN_00578670
// Address: 00578670
// Address Range: [[00578670, 0057873d] [005787a6, 005787e6]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00578670(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_wateract_cpp_FUN_00578670(int param_1,float param_2)

{
  float fVar1;
  CEventList *this_ptr;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_2 * (float10)_DAT_005d7273 * (float10)_DAT_005d727b;
  round();
  iVar2 = extraout_EDX + (int)ROUND(fVar4);
  *(int *)(param_1 + 0x2b230) = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x2b22c) + 1;
    *(int *)(param_1 + 0x2b230) = iVar2 + -0x10000;
    *(int *)(param_1 + 0x2b22c) = iVar3;
    if (0xf < iVar3) {
      *(uint *)(param_1 + 0x2b22c) = 0;
    }
  }
  this_ptr = 0x01C6E360;
  *(float *)(param_1 + 0x7fa0) = 1.0 / param_2;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr,(char *)(param_1 + 0x1b4));
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x280) = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,(char *)(param_1 + 0x218));
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x280) = 3;
  }
  switch(*(uint *)(param_1 + 0x280)) {
  case 1:
    fVar1 = param_2 / *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x27c);
    *(float *)(param_1 + 0x27c) = fVar1;
    if (fVar1 <= 1.0) break;
    *(uint *)(param_1 + 0x280) = 2;
  case 2:
    *(uint *)(param_1 + 0x27c) = 0x3f800000;
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x27c) - param_2 / *(float *)(param_1 + 0x170);
    *(float *)(param_1 + 0x27c) = fVar1;
    if (0.0 <= fVar1) break;
    *(uint *)(param_1 + 0x280) = 0;
  case 0:
    *(uint *)(param_1 + 0x27c) = 0;
    break;
  default:
    _DAT_01d71de0 = "..\\core\\wateract.cpp";
    _DAT_01d71de4 = 0x1b9;
    core_main_c_FUN_004e4330("CWaterActor::process - Bad state");
  }
  *(float *)(param_1 + 0x24) =
       *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x27c) + *(float *)(param_1 + 0x2b234);
  return;
}
