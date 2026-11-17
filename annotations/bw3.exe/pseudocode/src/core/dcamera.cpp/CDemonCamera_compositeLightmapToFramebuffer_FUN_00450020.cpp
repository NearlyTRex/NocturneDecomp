// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020
// Address: 00450020
// Address Range: [[00450020, 004503e2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(CDemonCamera *this_ptr)

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
  
  g_INT_0149d6d4 = g_INT_0149d6d4 + g_INT_01c5fad0 * 4;
  iVar9 = 0;
  if (0x10000 < g_INT_0149d6d4) {
    g_INT_0149d6d4 = g_INT_0149d6d4 + -0x10000;
    g_INT_0149d6d0 = g_INT_0149d6d0 + 1;
    if (0xf < g_INT_0149d6d0) {
      g_INT_0149d6d0 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_00448b60
              (&g_SFogGrid_0149d6dc,g_INT_0149d6d0,g_INT_0149d6d4);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(this_ptr);
  if (g_INT_005fba20 == 0x20) {
    g_ULONG_01c6e2bc =
         (g_UINT_ARRAY_00b9e14c[g_INT_005f17ec] & 0xff) <<
         (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b9e14c[g_INT_005f17e4] & 0xff) <<
         (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b9e14c[g_INT_005f17e8] & 0xff) <<
         (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
  }
  else {
    g_ULONG_01c6e2bc =
         (g_UINT_ARRAY_00b9e14c[g_INT_005f17e4] & 0xff) << 0x10 |
         (g_UINT_ARRAY_00b9e14c[g_INT_005f17e8] & 0xff) << 8 |
         g_UINT_ARRAY_00b9e14c[g_INT_005f17ec] & 0xff;
  }
  if (g_INT_005fba20 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar5 = (uint *)(g_ARRAY_PTR_01c5faec[uVar8 - g_INT_0135eacc] + g_INT_0135eac8 * 2);
      puVar6 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_0135ead0 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b3fd08 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0
                    (puVar5,(uint *)puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00472173
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_013405b4) {
        do {
          puVar5 = (uint *)(iVar3 + 0x13405c0);
          if (uVar8 != *puVar5) goto LAB_004501bc;
          piVar1 = (int *)(iVar3 + 0x13405b8);
          piVar2 = (int *)(iVar3 + 0x13405bc);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_013405b4);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004501bc:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)(g_ARRAY_PTR_01c5faec[uVar8 - g_INT_0135eacc] + g_INT_0135eac8 * 4);
      texture_buffer =
           (ulonglong *)
           ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_0135ead0 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b3fd08 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951
                    ((uint *)puVar6,(uint *)texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width
                    );
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45
                    ((uint *)puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_013405b4) {
        do {
          puVar5 = (uint *)(iVar3 + 0x13405c0);
          if (uVar8 != *puVar5) goto LAB_00450333;
          piVar1 = (int *)(iVar3 + 0x13405b8);
          piVar2 = (int *)(iVar3 + 0x13405bc);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_013405b4);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00450333:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
