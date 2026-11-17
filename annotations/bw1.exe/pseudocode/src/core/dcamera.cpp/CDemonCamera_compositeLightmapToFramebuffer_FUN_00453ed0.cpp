// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0
// Address: 00453ed0
// Address Range: [[00453ed0, 00454292]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0(CDemonCamera *this_ptr)

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
  
  g_INT_01480e24 = g_INT_01480e24 + g_INT_01c43530 * 4;
  iVar9 = 0;
  if (0x10000 < g_INT_01480e24) {
    g_INT_01480e24 = g_INT_01480e24 + -0x10000;
    g_INT_01480e20 = g_INT_01480e20 + 1;
    if (0xf < g_INT_01480e20) {
      g_INT_01480e20 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0044ca20
              (&g_SFogGrid_01480e2c,g_INT_01480e20,g_INT_01480e24);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0(this_ptr);
  if (g_INT_0061b4a0 == 0x20) {
    g_ULONG_01c51d1c =
         (g_UINT_ARRAY_00b8189c[g_INT_00611238] & 0xff) <<
         (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b8189c[g_INT_00611230] & 0xff) <<
         (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b8189c[g_INT_00611234] & 0xff) <<
         (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
  }
  else {
    g_ULONG_01c51d1c =
         (g_UINT_ARRAY_00b8189c[g_INT_00611230] & 0xff) << 0x10 |
         (g_UINT_ARRAY_00b8189c[g_INT_00611234] & 0xff) << 8 |
         g_UINT_ARRAY_00b8189c[g_INT_00611238] & 0xff;
  }
  if (g_INT_0061b4a0 == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar5 = (uint *)(g_ARRAY_PTR_01c4354c[uVar8 - g_INT_0134221c] + g_INT_01342218 * 2);
      puVar6 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_01342220 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b23458 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50
                    (puVar5,(uint *)puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00489b40
                    (puVar5,puVar6,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_01323d04) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1323d10);
          if (uVar8 != *puVar5) goto LAB_0045406c;
          piVar1 = (int *)(iVar3 + 0x1323d08);
          piVar2 = (int *)(iVar3 + 0x1323d0c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_01323d04);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_0045406c:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)(g_ARRAY_PTR_01c4354c[uVar8 - g_INT_0134221c] + g_INT_01342218 * 4);
      texture_buffer =
           (ulonglong *)
           ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar3 = ((int)uVar8 >> (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)) * 0x140;
      pbVar4 = (byte *)(g_CHAR_ARRAY_01342220 + iVar3);
      pbVar7 = (byte *)(g_CHAR_ARRAY_00b23458 + iVar3);
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1
                    ((uint *)puVar6,(uint *)texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width
                    );
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5
                    ((uint *)puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0048838a
                    (puVar6,texture_buffer,pbVar7,pbVar4,this_ptr->framebuffer_width);
        }
      }
      iVar3 = iVar9 * 0xc;
      if (iVar9 < g_INT_01323d04) {
        do {
          puVar5 = (uint *)(iVar3 + 0x1323d10);
          if (uVar8 != *puVar5) goto LAB_004541e3;
          piVar1 = (int *)(iVar3 + 0x1323d08);
          piVar2 = (int *)(iVar3 + 0x1323d0c);
          iVar3 = iVar3 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970
                    (this_ptr,*piVar2,*puVar5,*piVar1);
        } while (iVar9 < g_INT_01323d04);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_004541e3:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
