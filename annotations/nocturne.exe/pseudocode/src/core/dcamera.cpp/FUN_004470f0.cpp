// Name: core_dcamera.cpp_FUN_004470f0
// Address: 004470f0
// Address Range: [[004470f0, 004474d5]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004470f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_004470f0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  _DAT_0140d77c = _DAT_0140d77c + _DAT_01bd1d80 * 4;
  iVar10 = 0;
  if (0x10000 < _DAT_0140d77c) {
    _DAT_0140d77c = _DAT_0140d77c + -0x10000;
    _DAT_0140d778 = _DAT_0140d778 + 1;
    if (0xf < _DAT_0140d778) {
      _DAT_0140d778 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60(0x140d784,_DAT_0140d778,_DAT_0140d77c);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(param_1);
  if (DAT_005b7624 == 0x20) {
    _DAT_01c039a8 =
         (*(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff) << (DAT_01c0063c & 0x1f) |
         (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) << (DAT_01c00630 & 0x1f) |
         (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) << (DAT_01c00624 & 0x1f);
  }
  else {
    _DAT_01c039a8 =
         (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) << 8 |
         (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) << 0x10 |
         *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff;
  }
  if (DAT_005b7624 == 0x10) {
    uVar9 = 1;
    while ((int)uVar9 < *(int *)(param_1 + 0x140) + -1) {
      iVar6 = *(int *)(param_1 + 0x144) * 2 +
              *(int *)(&DAT_01bd2fa0 + ((*(int *)(param_1 + 0x148) + uVar9) - _DAT_012ceb74) * 4) +
              _DAT_012ceb70 * 2;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x13c) * uVar9 * 4;
      iVar4 = ((int)uVar9 >> (DAT_012b0660 & 0x1f)) * 0x140;
      puVar5 = &DAT_012ceb78 + iVar4;
      iVar4 = iVar4 + 0xaafdb8;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < _DAT_012b0664) {
        do {
          puVar1 = (uint *)(iVar4 + 0x12b0670);
          if (uVar9 != *puVar1) goto LAB_0044729d;
          puVar2 = (uint *)(iVar4 + 0x12b0668);
          puVar3 = (uint *)(iVar4 + 0x12b066c);
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_FUN_00447c60(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar10 < _DAT_012b0664);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_0044729d:
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
    uVar9 = 1;
    while ((int)uVar9 < *(int *)(param_1 + 0x140) + -1) {
      iVar6 = *(int *)(param_1 + 0x144) * 4 +
              *(int *)(&DAT_01bd2fa0 + ((*(int *)(param_1 + 0x148) + uVar9) - _DAT_012ceb74) * 4) +
              _DAT_012ceb70 * 4;
      iVar7 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x13c) * uVar9 * 4;
      iVar8 = ((int)uVar9 >> (DAT_012b0660 & 0x1f)) * 0x140;
      iVar4 = iVar8 + 0xaafdb8;
      puVar5 = &DAT_012ceb78 + iVar8;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(param_1 + 0x14c) == 1) {
          core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
      }
      else {
        if (*(int *)(param_1 + 0x14c) == 1) {
          core_dstrender_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
        if (*(int *)(param_1 + 0x14c) == 2) {
          core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
                    (iVar6,iVar7,iVar4,puVar5,*(uint *)(param_1 + 0x13c));
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < _DAT_012b0664) {
        do {
          puVar1 = (uint *)(iVar4 + 0x12b0670);
          if (uVar9 != *puVar1) goto LAB_00447422;
          puVar2 = (uint *)(iVar4 + 0x12b0668);
          puVar3 = (uint *)(iVar4 + 0x12b066c);
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_FUN_00447bb0(param_1,*puVar3,*puVar1,*puVar2);
        } while (iVar10 < _DAT_012b0664);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_00447422:
        uVar9 = uVar9 + 1;
      }
    }
  }
  return;
}
