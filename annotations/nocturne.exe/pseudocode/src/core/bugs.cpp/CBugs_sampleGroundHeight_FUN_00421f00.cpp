// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00
// Address: 00421f00
// Address Range: [[00421f00, 0042204c]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_18;
  
  uVar9 = 0x421f40;
  fVar4 = (float10)round
                             ((float10)((param_2 - *(float *)(param_1 + 0x19854)) *
                                       (1.0 / _DAT_0059aea8)));
  uVar8 = 0x421f47;
  fVar5 = (float10)round();
  local_18 = (int)ROUND(fVar4);
  iVar2 = (int)ROUND(fVar5);
  if (local_18 < 0) {
    iVar3 = 0;
    local_18 = 0;
  }
  else if (local_18 < 0xb) {
    iVar3 = local_18 + 1;
  }
  else {
    iVar3 = 0xb;
    local_18 = 0xb;
  }
  iVar1 = param_1 + local_18 * 0x30;
  param_1 = param_1 + iVar3 * 0x30;
  if (iVar2 < 0) {
    uVar7 = *(uint *)(param_1 + 0x12720);
    uVar6 = *(uint *)(iVar1 + 0x12720);
  }
  else {
    if (iVar2 < 0xb) {
      uVar8 = core_bugs_cpp_maxFloat_FUN_00423d60
                        (*(uint *)(iVar1 + 0x12720 + iVar2 * 4),
                         *(uint *)(param_1 + iVar2 * 4 + 0x12720));
      uVar9 = core_bugs_cpp_maxFloat_FUN_00423d60
                        (*(uint *)(iVar1 + 0x12724 + iVar2 * 4),
                         *(uint *)(param_1 + 0x12724 + iVar2 * 4));
      uVar8 = core_bugs_cpp_maxFloat_FUN_00423d60(uVar8,uVar9);
      return uVar8;
    }
    uVar7 = *(uint *)(param_1 + 0x1274c);
    uVar6 = *(uint *)(iVar1 + 0x1274c);
  }
  uVar8 = core_bugs_cpp_maxFloat_FUN_00423d60(uVar6,uVar7,uVar8,uVar9);
  return uVar8;
}
