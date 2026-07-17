// Name: dll_dx7.cpp_FUN_100044b0
// Address: 100044b0
// Address Range: [[100044b0, 100047a7]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_100044b0(int param_1,float *param_2,uint param_3,int param_4)

#include "nocturne.h"

void dll_dx7_cpp_FUN_100044b0(int param_1,float *param_2,uint param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  float local_8;
  
  *param_2 = (float)*(int *)(param_1 + 0x10) * 1.5258789e-05;
  param_2[1] = (float)*(int *)(param_1 + 0x14) * 1.5258789e-05;
  if (g_UseHoldBuffer != 0) {
    *param_2 = (float)g_ScreenWidth * *param_2 * 0.0015625;
    param_2[1] = param_2[1] * (float)g_ScreenHeight * 0.0020833334;
  }
  local_8 = (float)*(int *)(param_1 + 8);
  iVar4 = 0xff;
  param_2[3] = (float)param_4 / local_8;
  if ((param_3 & 8) != 0) {
    iVar4 = 0xff - (*(int *)(param_1 + 0x2c) >> 8);
  }
  if ((param_3 & 4) != 0) {
    if ((param_3 & 0x200) == 0) {
      g_LightingOverflow = 0;
      g_LightingAlpha = *(int *)(param_1 + 0x20) + -0x100 >> 4;
      if (0xff < g_LightingAlpha) {
        g_LightingOverflow = g_LightingAlpha - 0x100;
        if (0xff < g_LightingOverflow) {
          g_LightingOverflow = 0xff;
        }
        g_LightingAlpha = 0xff;
      }
    }
    else {
      g_LightingOverflow = 0;
      g_LightingAlpha = 0xff;
    }
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 0x200) == 0) {
      if ((param_3 & 4) == 0) {
        uVar2 = *g_ExternalRendererBridge.console_text_color & 0xff;
      }
      else {
        uVar2 = (*(uint *)(param_1 + 0x18) & 0xff0000) >> 0x10;
      }
      pbVar3 = (byte *)(DAT_10215e40 + uVar2 * 3);
      fVar1 = (float)((*pbVar3 | 0xffffff00) << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2]);
    }
    else {
      fVar1 = (float)((*(uint *)(param_1 + 0x20) & 0xffffff00) << 8 |
                      *(uint *)(param_1 + 0x24) & 0xffffff00 | *(int *)(param_1 + 0x28) >> 8 |
                     0xff000000);
    }
    param_2[4] = fVar1;
    param_2[5] = (float)(iVar4 << 0x18);
  }
  else {
    param_2[5] = (float)((iVar4 << 0x10 | g_LightingOverflow) << 8 | g_LightingOverflow << 0x10 |
                        g_LightingOverflow);
    if ((param_3 & 0x100) == 0) {
      iVar4 = *g_ExternalRendererBridge.current_alpha;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2c) >> 8;
    }
    if ((param_3 & 0x200) == 0) {
      if ((g_PremultiplyColorAndAlpha == 0) || (*g_ExternalRendererBridge.blend_mode != 1)) {
        param_2[4] = (float)((iVar4 << 0x10 | g_LightingAlpha) << 8 | g_LightingAlpha << 0x10 |
                            g_LightingAlpha);
      }
      else {
        g_LightingAlpha =
             (int)(iVar4 * g_LightingAlpha + (iVar4 * g_LightingAlpha >> 0x1f & 0xffU)) >> 8;
        param_2[4] = (float)((g_LightingAlpha | 0xffff0000U) << 8 | g_LightingAlpha << 0x10 |
                            g_LightingAlpha);
      }
    }
    else {
      param_2[4] = (float)((*(uint *)(param_1 + 0x20) & 0xffffff00) << 8 |
                           *(uint *)(param_1 + 0x24) & 0xffffff00 | *(int *)(param_1 + 0x28) >> 8 |
                          iVar4 << 0x18);
    }
  }
  if (*g_ExternalRendererBridge.processor_type == 0) {
    local_8 = local_8 * g_TextureLodScale;
    if (local_8 < 1.0) {
      local_8 = 1.0;
    }
    if (0x43800000 < (int)local_8) {
      local_8 = 256.0;
    }
    param_2[2] = 1.0 - 1.0 / local_8;
  }
  else if ((g_FlyIniPresent == 0) || (g_ZBufferBitDepth != 0x10)) {
    param_2[2] = local_8 * g_TextureLodScale;
    if (0x3f800000 < (int)param_2[2]) {
      param_2[2] = 1.0;
    }
  }
  else {
    param_2[2] = (float)(((int)local_8 >> 1) + g_FlyModeDepthBias) * g_TextureLodScale;
    if (0x3f800000 < (int)param_2[2]) {
      param_2[2] = 1.0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  param_2[6] = (float)*(int *)(param_1 + 0x18) * 5.9604645e-08;
  param_2[7] = (float)iVar4 * 5.9604645e-08;
  return;
}
