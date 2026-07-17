// Name: dll_dx7.cpp_buildTLVertex_FUN_100044b0
// Address: 100044b0
// Address Range: [[100044b0, 100047a7]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_buildTLVertex_FUN_100044b0(SRenderVertex *src,SScreenVertex *out,uint render_flags,int rhw_scale)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_buildTLVertex_FUN_100044b0(SRenderVertex *src,SScreenVertex *out,uint render_flags,int rhw_scale)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  float local_8;
  
  out->x = (float)(src->projected_vertex).screen_x * 1.5258789e-05;
  out->y = (float)(src->projected_vertex).screen_y * 1.5258789e-05;
  if (g_UseHoldBuffer != 0) {
    out->x = (float)g_ScreenWidth * out->x * 0.0015625;
    out->y = out->y * (float)g_ScreenHeight * 0.0020833334;
  }
  local_8 = (float)(src->projected_vertex).transformed_z;
  iVar3 = 0xff;
  out->rhw = (float)rhw_scale / local_8;
  if ((render_flags & 8) != 0) {
    iVar3 = 0xff - (src->a >> 8);
  }
  if ((render_flags & 4) != 0) {
    if ((render_flags & 0x200) == 0) {
      g_LightingOverflow = 0;
      g_LightingAlpha = src->r + -0x100 >> 4;
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
  if ((render_flags & 1) == 0) {
    if ((render_flags & 0x200) == 0) {
      if ((render_flags & 4) == 0) {
        uVar1 = *g_ExternalRendererBridge.console_text_color & 0xff;
      }
      else {
        uVar1 = (src->u & 0xff0000U) >> 0x10;
      }
      pbVar2 = g_ColorPalette + uVar1 * 3;
      uVar1 = (*pbVar2 | 0xffffff00) << 0x10 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2];
    }
    else {
      uVar1 = (src->r & 0xffffff00U) << 8 | src->g & 0xffffff00U | src->b >> 8 | 0xff000000;
    }
    out->diffuse = uVar1;
    out->specular = iVar3 << 0x18;
  }
  else {
    out->specular =
         (iVar3 << 0x10 | g_LightingOverflow) << 8 | g_LightingOverflow << 0x10 | g_LightingOverflow
    ;
    if ((render_flags & 0x100) == 0) {
      iVar3 = *g_ExternalRendererBridge.current_alpha;
    }
    else {
      iVar3 = src->a >> 8;
    }
    if ((render_flags & 0x200) == 0) {
      if ((g_PremultiplyColorAndAlpha == 0) || (*g_ExternalRendererBridge.blend_mode != 1)) {
        out->diffuse = (iVar3 << 0x10 | g_LightingAlpha) << 8 | g_LightingAlpha << 0x10 |
                       g_LightingAlpha;
      }
      else {
        g_LightingAlpha =
             (int)(iVar3 * g_LightingAlpha + (iVar3 * g_LightingAlpha >> 0x1f & 0xffU)) >> 8;
        out->diffuse = (g_LightingAlpha | 0xffff0000U) << 8 | g_LightingAlpha << 0x10 |
                       g_LightingAlpha;
      }
    }
    else {
      out->diffuse = (src->r & 0xffffff00U) << 8 | src->g & 0xffffff00U | src->b >> 8 |
                     iVar3 << 0x18;
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
    out->z = 1.0 - 1.0 / local_8;
  }
  else if ((g_FlyIniPresent == 0) || (g_ZBufferBitDepth != 0x10)) {
    out->z = local_8 * g_TextureLodScale;
    if (0x3f800000 < (int)out->z) {
      out->z = 1.0;
    }
  }
  else {
    out->z = (float)(((int)local_8 >> 1) + g_FlyModeDepthBias) * g_TextureLodScale;
    if (0x3f800000 < (int)out->z) {
      out->z = 1.0;
    }
  }
  iVar3 = src->v;
  out->u = (float)src->u * 5.9604645e-08;
  out->v = (float)iVar3 * 5.9604645e-08;
  return;
}
