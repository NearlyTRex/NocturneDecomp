// Name: core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
// Address: 004dfcb0
// Address Range: [[004dfcb0, 004dfe93]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint local_20;
  int local_18;
  uint local_14;
  
  if (2000 < *(int *)(param_1 + 0x54)) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x1f8;
    core_main_c_FUN_004c8440("CMorphModel::rotatePoints - too many points!");
  }
  local_20 = 0;
  local_14 = 0xff;
  local_18 = 0;
  fVar7 = 1.0 - param_2;
  if (0 < *(int *)(param_1 + 0x54)) {
    piVar10 = (int *)&DAT_01cce554;
    iVar9 = 0;
    iVar11 = 0;
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x58) + iVar9) * 0x10 + param_3;
      fVar1 = *(float *)(iVar8 + 8);
      fVar2 = *(float *)(iVar8 + 0xc);
      iVar5 = *(int *)(param_1 + 0x58);
      fVar3 = *(float *)(iVar5 + 8 + iVar9);
      fVar4 = *(float *)(iVar5 + 0xc + iVar9);
      *piVar10 = (int)ROUND((*(float *)(iVar5 + 4 + iVar9) * param_2 + *(float *)(iVar8 + 4) * fVar7
                            ) * _DAT_005a0cc0);
      piVar10[1] = (int)ROUND((fVar3 * param_2 + fVar1 * fVar7) * _DAT_005a0cc0);
      piVar10[2] = (int)ROUND((param_2 * fVar4 + fVar7 * fVar2) * _DAT_005a0cc0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar11,piVar10);
      uVar6 = *(uint *)(iVar11 + 0x10 + *DAT_005ae704);
      if ((uVar6 & 0x80000000) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = local_14 & uVar6;
        local_20 = 1;
      }
      iVar11 = iVar11 + 0x30;
      piVar10 = piVar10 + 3;
      iVar9 = iVar9 + 0x10;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x54));
  }
  if (local_14 != 0) {
    return;
  }
  core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
            (0x01E57284,*(uint *)(param_1 + 0x54));
  core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
            (0x01E57284,*(uint *)(param_1 + 0x54),*(uint *)(param_1 + 0x5c),
             *(uint *)(param_1 + 0x60),&DAT_01cce554,3,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,local_20);
  return;
}
