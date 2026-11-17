// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820
// Address: 00442820
// Address Range: [[00442820, 00442be2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820(CDemonCamera *this_ptr)

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
  
  g_INT_01465924 = g_INT_01465924 + g_INT_01c2a370 * 4;
  iVar9 = 0;
  if (0x10000 < g_INT_01465924) {
    g_INT_01465924 = g_INT_01465924 + -0x10000;
    g_INT_01465920 = g_INT_01465920 + 1;
    if (0xf < g_INT_01465920) {
      g_INT_01465920 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0043b380
              (&g_SFogGrid_0146592c,g_INT_01465920,g_INT_01465924);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0043fef0(this_ptr);
  if (g_INT_006141c0 == 0x20) {
    g_ULONG_01c38b5c =
         (g_UINT_ARRAY_00b6639c[g_INT_00609fac] & 0xff) <<
         (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b6639c[g_INT_00609fa4] & 0xff) <<
         (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b6639c[g_INT_00609fa8] & 0xff) <<
         (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
  }
  else {
    g_ULONG_01c38b5c =
         (g_UINT_ARRAY_00b6639c[g_INT_00609fa4] & 0xff) << 0x10 |
         (g_UINT_ARRAY_00b6639c[g_INT_00609fa8] & 0xff) << 8 |
         g_UINT_ARRAY_00b6639c[g_INT_00609fac] & 0xff;
  }
  if (g_INT_006141c0 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar5 = (uint *)(g_ARRAY_PTR_01c2a38c[uVar8 - g_INT_01326d1c] + g_INT_01326d18 * 2);
      puVar6 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_01326d20 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b07f58 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00471a60
                    (puVar5,(uint *)puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00471fc4
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00471650
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_01308804) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1308810);
          if (uVar8 != *puVar5) goto LAB_004429bc;
          piVar1 = (int *)(iVar3 + 0x1308808);
          piVar2 = (int *)(iVar3 + 0x130880c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00443360
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_01308804);
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
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)(g_ARRAY_PTR_01c2a38c[uVar8 - g_INT_01326d1c] + g_INT_01326d18 * 4);
      texture_buffer =
           (ulonglong *)
           ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_01326d20 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b07f58 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004708e1
                    ((uint *)puVar6,(uint *)texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width
                    );
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_0046f9bc
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00470dd5
                    ((uint *)puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0046fe9a
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_01308804) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1308810);
          if (uVar8 != *puVar5) goto LAB_00442b33;
          piVar1 = (int *)(iVar3 + 0x1308808);
          piVar2 = (int *)(iVar3 + 0x130880c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_004432c0
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_01308804);
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
