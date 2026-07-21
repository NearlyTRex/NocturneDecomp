// Name: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
// Address: 004ca640
// Address Range: [[004ca640, 004ca70b]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(int param_1,int param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  byte local_1c [12];
  int local_10;
  
  local_10 = param_2;
  iVar3 = param_1 + 0x5e8 + param_2 * 100;
  fVar1 = ((float)param_2 + *(float *)(iVar3 + 4)) * _DAT_005a003c;
  *(uint *)(iVar3 + 0x18) = 0;
  *(uint *)(iVar3 + 0x20) = 0;
  *(float *)(iVar3 + 0x1c) = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(iVar3 + 0x24,iVar3 + 0x18);
  local_2c = *(uint *)(param_1 + 0x1504);
  local_34 = 0;
  local_30 = 0;
  puVar2 = (uint *)
           core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(iVar3 + 0x24,local_28,&local_34)
  ;
  if ((uint *)(iVar3 + 0xc) != puVar2) {
    *(uint *)(iVar3 + 0xc) = *puVar2;
    *(uint *)(iVar3 + 0x10) = puVar2[1];
    *(uint *)(iVar3 + 0x14) = puVar2[2];
  }
  puVar2 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_1c,iVar3 + 0xc);
  if ((uint *)(iVar3 + 0x58) == puVar2) {
    return;
  }
  *(uint *)(iVar3 + 0x58) = *puVar2;
  *(uint *)(iVar3 + 0x5c) = puVar2[1];
  *(uint *)(iVar3 + 0x60) = puVar2[2];
  return;
}
