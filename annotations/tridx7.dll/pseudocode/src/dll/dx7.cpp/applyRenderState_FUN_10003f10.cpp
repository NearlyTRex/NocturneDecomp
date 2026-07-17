// Name: dll_dx7.cpp_applyRenderState_FUN_10003f10
// Address: 10003f10
// Address Range: [[10003f10, 10004377]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_applyRenderState_FUN_10003f10(uint render_flags)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_applyRenderState_FUN_10003f10(uint render_flags)

{
  int iVar1;
  uint uVar2;
  DWORD value;
  
  if ((g_TextureOpacity != (uchar *)0x0) && ((render_flags & 1) != 0)) {
    render_flags = render_flags | 0x22;
  }
  if (*g_ExternalRendererBridge.system_initialized != g_PrevSystemInitialized) {
    dll_dx7_cpp_flushBatch_FUN_100047b0();
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x10,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x11,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    g_PrevSystemInitialized = *g_ExternalRendererBridge.system_initialized;
  }
  if (((render_flags ^ g_PrevRenderFlags) & 0x20) != 0) {
    if ((render_flags & 0x20) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 5;
    }
    dll_dx7_cpp_FUN_100037e0(0x13,uVar2);
  }
  if ((render_flags & 0x20) != 0) {
    render_flags = render_flags & 0xfffffff7;
  }
  iVar1 = *g_ExternalRendererBridge.blend_mode;
  if (iVar1 != g_PrevBlendMode) {
    g_PrevBlendMode = iVar1;
    if (iVar1 == 0) {
      dll_dx7_cpp_FUN_100037e0(0x14,6);
      if (g_PremultiplyColorAndAlpha != 0) {
        uVar2 = 5;
        goto LAB_1000400f;
      }
    }
    else if ((iVar1 == 1) && (dll_dx7_cpp_FUN_100037e0(0x14,2), g_PremultiplyColorAndAlpha != 0)) {
      uVar2 = 2;
LAB_1000400f:
      dll_dx7_cpp_FUN_100037e0(0x13,uVar2);
    }
  }
  if (((render_flags ^ g_PrevRenderFlags) & 1) != 0) {
    dll_dx7_cpp_flushBatch_FUN_100047b0();
    if ((render_flags & 1) == 0) {
      (*g_Device->vtable->SetTextureStageState)(g_Device,0,1,1);
    }
    else {
      g_CurrentBoundTexture = (IDirect3DTexture2 *)0x0;
    }
  }
  if (((render_flags & 1) != 0) &&
     (g_TextureSurfaces[g_CurrentTextureIndex].texture != g_CurrentBoundTexture)) {
    dll_dx7_cpp_flushBatch_FUN_100047b0();
    g_CurrentBoundTexture = g_TextureSurfaces[g_CurrentTextureIndex].texture;
    (*g_Device->vtable->SetTextureStageState)(g_Device,0,1,4);
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x10,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x11,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x12,
               (-(uint)(*g_ExternalRendererBridge.rendering_quality == 0) & 0xfffffffe) + 3);
    (*g_Device->vtable->SetTexture)(g_Device,0,g_CurrentBoundTexture);
  }
  iVar1 = *g_ExternalRendererBridge.rendering_quality;
  if (g_PrevRenderingQuality != iVar1) {
    if (iVar1 == 0) {
      value = 1;
    }
    else {
      value = 3;
    }
    g_PrevRenderingQuality = iVar1;
    (*g_Device->vtable->SetTextureStageState)(g_Device,0,0x12,value);
  }
  if (((render_flags ^ g_PrevRenderFlags) & 2) != 0) {
    if ((render_flags & 2) == 0) {
      dll_dx7_cpp_FUN_100037e0(0x1b,0);
      dll_dx7_cpp_FUN_100037e0(0xf,0);
      uVar2 = 2;
    }
    else {
      dll_dx7_cpp_FUN_100037e0(0x1b,1);
      dll_dx7_cpp_FUN_100037e0(0xf,1);
      uVar2 = 4;
    }
    dll_dx7_cpp_FUN_100037e0(0x15,uVar2);
  }
  if (((render_flags ^ g_PrevRenderFlags) & 4) != 0) {
    if ((render_flags & 4) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    dll_dx7_cpp_FUN_100037e0(9,uVar2);
  }
  if (((render_flags ^ g_PrevRenderFlags) & 8) != 0) {
    dll_dx7_cpp_FUN_100037e0(0x1c,(render_flags & 8) != 0);
  }
  if (((render_flags ^ g_PrevRenderFlags) & 0xc0) == 0) goto LAB_10004282;
  if ((render_flags & 0xc0) == 0) {
    dll_dx7_cpp_FUN_100037e0(7,0);
    uVar2 = 0;
LAB_1000426c:
    dll_dx7_cpp_FUN_100037e0(0xe,uVar2);
    uVar2 = 8;
  }
  else if (((render_flags & 0x40) == 0) || ((render_flags & 0x80) == 0)) {
    if ((render_flags & 0x40) == 0) {
      dll_dx7_cpp_FUN_100037e0(7,1);
      uVar2 = 1;
      goto LAB_1000426c;
    }
    dll_dx7_cpp_FUN_100037e0(7,1);
    dll_dx7_cpp_FUN_100037e0(0xe,0);
    uVar2 = 4;
  }
  else {
    dll_dx7_cpp_FUN_100037e0(7,1);
    dll_dx7_cpp_FUN_100037e0(0xe,1);
    uVar2 = 4;
  }
  dll_dx7_cpp_FUN_100037e0(0x17,uVar2);
LAB_10004282:
  g_PrevRenderFlags = render_flags;
  iVar1 = *g_ExternalRendererBridge.system_memory_size;
  if (g_PrevSystemMemorySize != iVar1) {
    g_PrevSystemMemorySize = iVar1;
    if (*g_ExternalRendererBridge.processor_type == 0) {
      g_TextureLodScale = 256.0 / (float)iVar1;
    }
    else if ((g_FlyIniPresent == 0) || (g_ZBufferBitDepth != 0x10)) {
      g_TextureLodScale = 1.0 / (float)iVar1;
    }
    else {
      g_TextureLodScale = 1.0 / (float)(((int)(float)iVar1 >> 1) + g_FlyModeDepthBias);
    }
  }
  if ((render_flags & 0x10) == 0) {
    g_LightingAlpha = 0xff;
  }
  else {
    g_LightingAlpha = *g_ExternalRendererBridge.current_lighting + -0x100 >> 4;
    if (0xff < g_LightingAlpha) {
      g_LightingOverflow = g_LightingAlpha + -0x100;
      if (0xff < g_LightingOverflow) {
        g_LightingOverflow = 0xff;
      }
      g_LightingAlpha = 0xff;
      return;
    }
  }
  g_LightingOverflow = 0;
  return;
}
