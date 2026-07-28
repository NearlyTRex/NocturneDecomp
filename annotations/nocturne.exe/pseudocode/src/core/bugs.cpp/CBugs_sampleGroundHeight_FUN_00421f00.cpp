// Name: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00
// Address: 00421f00
// Address Range: [[00421f00, 0042204c]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(int param_1,float param_2,float param_3)

#include "nocturne.h"

uint core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_18;
  
  fVar4 = 1.0 / 0.5f;
  fVar3 = *(float *)(param_1 + 0x19858);
  uVar11 = 0x421f40;
  dVar6 = round((double)((param_2 - *(float *)(param_1 + 0x19854)) * fVar4))
  ;
  uVar10 = 0x421f47;
  dVar7 = round((double)((param_3 - fVar3) * fVar4));
  local_18 = (int)ROUND(dVar6);
  iVar2 = (int)ROUND(dVar7);
  if (local_18 < 0) {
    iVar5 = 0;
    local_18 = 0;
  }
  else if (local_18 < 0xb) {
    iVar5 = local_18 + 1;
  }
  else {
    iVar5 = 0xb;
    local_18 = 0xb;
  }
  iVar1 = param_1 + local_18 * 0x30;
  param_1 = param_1 + iVar5 * 0x30;
  if (iVar2 < 0) {
    uVar9 = *(uint *)(param_1 + 0x12720);
    uVar8 = *(uint *)(iVar1 + 0x12720);
  }
  else {
    if (iVar2 < 0xb) {
      uVar10 = core_bugs_cpp_maxFloat_FUN_00423d60
                         (*(uint *)(iVar1 + 0x12720 + iVar2 * 4),
                          *(uint *)(param_1 + iVar2 * 4 + 0x12720));
      uVar11 = core_bugs_cpp_maxFloat_FUN_00423d60
                         (*(uint *)(iVar1 + 0x12724 + iVar2 * 4),
                          *(uint *)(param_1 + 0x12724 + iVar2 * 4));
      uVar10 = core_bugs_cpp_maxFloat_FUN_00423d60(uVar10,uVar11);
      return uVar10;
    }
    uVar9 = *(uint *)(param_1 + 0x1274c);
    uVar8 = *(uint *)(iVar1 + 0x1274c);
  }
  uVar10 = core_bugs_cpp_maxFloat_FUN_00423d60(uVar8,uVar9,uVar10,uVar11);
  return uVar10;
}
