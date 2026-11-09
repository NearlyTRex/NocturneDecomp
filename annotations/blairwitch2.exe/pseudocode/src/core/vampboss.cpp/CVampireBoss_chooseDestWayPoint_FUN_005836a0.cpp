// Name: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0
// Address: 005836a0
// Address Range: [[005836a0, 0058377c]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(CVampireBoss *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(CVampireBoss *this_ptr)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  CVampireBoss *pCVar10;
  float local_20;
  
  *(uint *)&this_ptr->field_0xc3b84 = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  pCVar10 = this_ptr;
  do {
    if (*(int *)&pCVar10->field_0xc3b88 == 0) {
      _DAT_01d046a0 = "..\\core\\vampboss.cpp";
      _DAT_01d046a4 = 0x428;
      core_main_c_FUN_004e4500("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar2 = *(int *)&pCVar10->field_0xc3b88;
    fVar3 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)&this_ptr->field_0x20;
    fVar8 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
    fVar5 = *(float *)(iVar2 + 0x24) - *(float *)&this_ptr->field_0x24;
    fVar6 = *(float *)(iVar2 + 0x28) - *(float *)&this_ptr->field_0x28;
    fVar7 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar3) {
      *(int *)&this_ptr->field_0xc3b84 = iVar9;
      local_20 = fVar3;
    }
    iVar9 = iVar9 + 1;
    pCVar10 = (CVampireBoss *)&pCVar10->field_0x4;
  } while (iVar9 < 4);
  return;
}
