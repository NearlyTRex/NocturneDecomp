// Name: core_wateract.cpp_CWaterActor_process_FUN_00551a80
// Address: 00551a80
// Address Range: [[00551a80, 00551bf6]]
// Convention: unknown
// Signature: void core_wateract_cpp_CWaterActor_process_FUN_00551a80(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_wateract_cpp_CWaterActor_process_FUN_00551a80(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = *(int *)((int)param_1 + 0x2b224);
  fVar5 = (float10)round
                             ((float10)param_2 * (float10)_DAT_0059764f * (float10)_DAT_00597657);
  iVar3 = iVar3 + (int)ROUND(fVar5);
  *(int *)((int)param_1 + 0x2b224) = iVar3;
  if (0x10000 < iVar3) {
    iVar4 = *(int *)((int)param_1 + 0x2b220) + 1;
    *(int *)((int)param_1 + 0x2b224) = iVar3 + -0x10000;
    *(int *)((int)param_1 + 0x2b220) = iVar4;
    if (0xf < iVar4) {
      *(uint *)((int)param_1 + 0x2b220) = 0;
    }
  }
  uVar2 = 0x01C03A10;
  *(float *)((int)param_1 + 0x7f94) = 1.0 / param_1;
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(uVar2,(int)param_1 + 0x1ac);
  if (iVar3 != 0) {
    *(uint *)((int)param_1 + 0x278) = 1;
  }
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,(int)param_1 + 0x210);
  if (iVar3 != 0) {
    *(uint *)((int)param_1 + 0x278) = 3;
  }
  switch(*(uint *)((int)param_1 + 0x278)) {
  case 1:
    fVar1 = param_1 / *(float *)((int)param_1 + 0x164) + *(float *)((int)param_1 + 0x274);
    *(float *)((int)param_1 + 0x274) = fVar1;
    if (fVar1 <= 1.0) break;
    *(uint *)((int)param_1 + 0x278) = 2;
  case 2:
    *(uint *)((int)param_1 + 0x274) = 0x3f800000;
    break;
  case 3:
    fVar1 = *(float *)((int)param_1 + 0x274) - param_1 / *(float *)((int)param_1 + 0x168);
    *(float *)((int)param_1 + 0x274) = fVar1;
    if (0.0 <= fVar1) break;
    *(uint *)((int)param_1 + 0x278) = 0;
  case 0:
    *(uint *)((int)param_1 + 0x274) = 0;
    break;
  default:
    _DAT_01cc4800 = "`A..\\core\\wateract.cpp" + 2;
    _DAT_01cc4804 = 0x1a5;
    FUN_004c8440("CWaterActor::process - Bad state");
  }
  *(float *)((int)param_1 + 0x24) =
       *(float *)((int)param_1 + 0x160) * *(float *)((int)param_1 + 0x274) +
       *(float *)((int)param_1 + 0x2b228);
  return;
}
