// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820
// Address: 00442820
// Address Range: [[00442820, 00442be2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  _DAT_01465924 = _DAT_01465924 + _DAT_01c2a370 * 4;
  iVar9 = 0;
  if (0x10000 < _DAT_01465924) {
    _DAT_01465924 = _DAT_01465924 + -0x10000;
    _DAT_01465920 = _DAT_01465920 + 1;
    if (0xf < _DAT_01465920) {
      _DAT_01465920 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380(0x146592c,_DAT_01465920,_DAT_01465924);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0043fef0(this_ptr);
  if (DAT_006141c0 == 0x20) {
    _DAT_01c38b5c =
         (*(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff) << (DAT_01c3582c & 0x1f) |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << (DAT_01c35814 & 0x1f) |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << (DAT_01c35820 & 0x1f);
  }
  else {
    _DAT_01c38b5c =
         (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << 0x10 |
         (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << 8 |
         *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff;
  }
  if (DAT_006141c0 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)&this_ptr->field_0x148 + -1) {
      puVar5 = (uint *)(*(int *)(&DAT_01c2a38c + (uVar8 - _DAT_01326d1c) * 4) + _DAT_01326d18 * 2);
      puVar6 = (uint *)(*(int *)&this_ptr->field_0x158 + *(int *)&this_ptr->field_0x144 * uVar8 * 4)
      ;
      iVar3 = ((int)uVar8 >> (DAT_01308800 & 0x1f)) * 0x140;
      pbVar4 = &DAT_01326d20 + iVar3;
      pbVar7 = (byte *)(iVar3 + 0xb07f58);
      if ((uVar8 & 1) == 0) {
        if (*(int *)&this_ptr->field_0x14c == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00471a60
                    (puVar5,puVar6,pbVar7,pbVar4,*(int *)&this_ptr->field_0x144);
        }
        if (*(int *)&this_ptr->field_0x14c == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
      }
      else {
        if (*(int *)&this_ptr->field_0x14c == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00471fc4
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
        if (*(int *)&this_ptr->field_0x14c == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00471650
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < _DAT_01308804) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1308810);
          if (uVar8 != *puVar5) goto LAB_004429bc;
          piVar1 = (int *)(iVar3 + 0x1308808);
          piVar2 = (int *)(iVar3 + 0x130880c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < _DAT_01308804);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004429bc:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < *(int *)&this_ptr->field_0x148 + -1) {
      puVar5 = (uint *)(*(int *)(&DAT_01c2a38c + (uVar8 - _DAT_01326d1c) * 4) + _DAT_01326d18 * 4);
      puVar6 = (uint *)(*(int *)&this_ptr->field_0x158 + *(int *)&this_ptr->field_0x144 * uVar8 * 4)
      ;
      iVar3 = ((int)uVar8 >> (DAT_01308800 & 0x1f)) * 0x140;
      pbVar4 = &DAT_01326d20 + iVar3;
      pbVar7 = (byte *)(iVar3 + 0xb07f58);
      if ((uVar8 & 1) == 0) {
        if (*(int *)&this_ptr->field_0x14c == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004708e1
                    (puVar5,puVar6,pbVar7,pbVar4,*(int *)&this_ptr->field_0x144);
        }
        if (*(int *)&this_ptr->field_0x14c == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_0046f9bc
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
      }
      else {
        if (*(int *)&this_ptr->field_0x14c == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00470dd5
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
        if (*(int *)&this_ptr->field_0x14c == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0046fe9a
                    (puVar5,puVar6,pbVar7,pbVar4,*(uint *)&this_ptr->field_0x144);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < _DAT_01308804) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1308810);
          if (uVar8 != *puVar5) goto LAB_00442b33;
          piVar1 = (int *)(iVar3 + 0x1308808);
          piVar2 = (int *)(iVar3 + 0x130880c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_004432c0
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < _DAT_01308804);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00442b33:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
