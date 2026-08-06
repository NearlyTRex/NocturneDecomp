// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0
// Address: 004470f0
// Address Range: [[004470f0, 004474d5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  ulonglong *texture_buffer;
  uint uVar8;
  int iVar9;
  
  _DAT_0140d77c = _DAT_0140d77c + _DAT_01bd1d80 * 4;
  iVar9 = 0;
  if (0x10000 < _DAT_0140d77c) {
    _DAT_0140d77c = _DAT_0140d77c + -0x10000;
    _DAT_0140d778 = _DAT_0140d778 + 1;
    if (0xf < _DAT_0140d778) {
      _DAT_0140d778 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60
              (&g_SFogGrid_0140d784,_DAT_0140d778,_DAT_0140d77c);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(this_ptr);
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
    uVar8 = 1;
    while ((int)uVar8 < (int)this_ptr->max_distance + -1) {
      puVar5 = (uint *)(this_ptr->framebuffer_width * 2 +
                        *(int *)(&DAT_01bd2fa0 +
                                ((this_ptr->framebuffer_height + uVar8) - _DAT_012ceb74) * 4) +
                       _DAT_012ceb70 * 2);
      puVar6 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->screen_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (DAT_012b0660 & 0x1f)) * 0x140;
      pbVar4 = &DAT_012ceb78 + iVar3;
      pbVar7 = (byte *)(iVar3 + 0xaafdb8);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
                    (puVar5,(uint *)puVar6,pbVar7,pbVar4,this_ptr->screen_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->screen_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->screen_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->screen_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < _DAT_012b0664) {
        do {
          puVar5 = (uint *)(iVar3 + 0x12b0670);
          if (uVar8 != *puVar5) goto LAB_0044729d;
          piVar1 = (int *)(iVar3 + 0x12b0668);
          piVar2 = (int *)(iVar3 + 0x12b066c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_FUN_00447c60(this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < _DAT_012b0664);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_0044729d:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < (int)this_ptr->max_distance + -1) {
      puVar6 = (ulonglong *)
               (this_ptr->framebuffer_width * 4 +
                *(int *)(&DAT_01bd2fa0 +
                        ((this_ptr->framebuffer_height + uVar8) - _DAT_012ceb74) * 4) +
               _DAT_012ceb70 * 4);
      texture_buffer =
           (ulonglong *)((int)this_ptr->framebuffer_aligned + this_ptr->screen_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (DAT_012b0660 & 0x1f)) * 0x140;
      pbVar4 = (byte *)(iVar3 + 0xaafdb8);
      pbVar7 = &DAT_012ceb78 + iVar3;
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
                    ((uint *)puVar6,(uint *)texture_buffer,pbVar4,pbVar7,this_ptr->screen_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
                    (puVar6,texture_buffer,pbVar4,pbVar7,this_ptr->screen_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
                    ((uint *)puVar6,texture_buffer,pbVar4,pbVar7,this_ptr->screen_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
                    (puVar6,texture_buffer,pbVar4,pbVar7,this_ptr->screen_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < _DAT_012b0664) {
        do {
          puVar5 = (uint *)(iVar3 + 0x12b0670);
          if (uVar8 != *puVar5) goto LAB_00447422;
          piVar1 = (int *)(iVar3 + 0x12b0668);
          piVar2 = (int *)(iVar3 + 0x12b066c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_FUN_00447bb0(this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < _DAT_012b0664);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00447422:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
