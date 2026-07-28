// Name: core_wateract.cpp_CWaterActor_process_FUN_00551a80
// Address: 00551a80
// Address Range: [[00551a80, 00551bf6]]
// Convention: unknown
// Signature: void core_wateract_cpp_CWaterActor_process_FUN_00551a80(float param_1,float param_2)

#include "nocturne.h"

void core_wateract_cpp_CWaterActor_process_FUN_00551a80(float param_1,float param_2)

{
  float fVar1;
  CEventList *this_ptr;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = *(int *)((int)param_1 + 0x2b224);
  dVar4 = round
                    ((double)(param_2 * (float)65536 * (float)8));
  iVar2 = iVar2 + (int)ROUND(dVar4);
  *(int *)((int)param_1 + 0x2b224) = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = *(int *)((int)param_1 + 0x2b220) + 1;
    *(int *)((int)param_1 + 0x2b224) = iVar2 + -0x10000;
    *(int *)((int)param_1 + 0x2b220) = iVar3;
    if (0xf < iVar3) {
      *(uint *)((int)param_1 + 0x2b220) = 0;
    }
  }
  this_ptr = 0x01C03A10;
  *(float *)((int)param_1 + 0x7f94) = 1.0 / param_1;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (this_ptr,(char *)((int)param_1 + 0x1ac));
  if (iVar2 != 0) {
    *(uint *)((int)param_1 + 0x278) = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,(char *)((int)param_1 + 0x210));
  if (iVar2 != 0) {
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
    PTR_01cc4800 = "..\\core\\wateract.cpp";
    INT_01cc4804 = 0x1a5;
    core_main_c_FUN_004c8440("CWaterActor::process - Bad state");
  }
  *(float *)((int)param_1 + 0x24) =
       *(float *)((int)param_1 + 0x160) * *(float *)((int)param_1 + 0x274) +
       *(float *)((int)param_1 + 0x2b228);
  return;
}
