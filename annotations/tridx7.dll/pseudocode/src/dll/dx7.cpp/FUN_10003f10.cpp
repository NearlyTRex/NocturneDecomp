// Name: dll_dx7.cpp_FUN_10003f10
// Address: 10003f10
// Address Range: [[10003f10, 10004377]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10003f10(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dll_dx7_cpp_FUN_10003f10(uint param_1)

{
  int iVar1;
  uint uVar2;
  DWORD value;
  
  if ((g_TextureOpacity != (uchar *)0x0) && ((param_1 & 1) != 0)) {
    param_1 = param_1 | 0x22;
  }
  if (*g_ExternalRendererBridge.system_initialized != DAT_1001421c) {
    dll_dx7_cpp_FUN_100047b0();
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x10,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x11,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    DAT_1001421c = *g_ExternalRendererBridge.system_initialized;
  }
  if (((param_1 ^ _DAT_10014218) & 0x20) != 0) {
    if ((param_1 & 0x20) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 5;
    }
    dll_dx7_cpp_FUN_100037e0(0x13,uVar2);
  }
  if ((param_1 & 0x20) != 0) {
    param_1 = param_1 & 0xfffffff7;
  }
  iVar1 = *g_ExternalRendererBridge.blend_mode;
  if (iVar1 != DAT_10014220) {
    DAT_10014220 = iVar1;
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
  if (((param_1 ^ _DAT_10014218) & 1) != 0) {
    dll_dx7_cpp_FUN_100047b0();
    if ((param_1 & 1) == 0) {
      (*g_Device->vtable->SetTextureStageState)(g_Device,0,1,1);
    }
    else {
      DAT_100141d4 = (IDirect3DTexture2 *)0x0;
    }
  }
  if (((param_1 & 1) != 0) && (g_TextureSurfaces[g_CurrentTextureIndex].texture != DAT_100141d4)) {
    dll_dx7_cpp_FUN_100047b0();
    DAT_100141d4 = g_TextureSurfaces[g_CurrentTextureIndex].texture;
    (*g_Device->vtable->SetTextureStageState)(g_Device,0,1,4);
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x10,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x11,2 - (*g_ExternalRendererBridge.system_initialized == 0));
    (*g_Device->vtable->SetTextureStageState)
              (g_Device,0,0x12,
               (-(uint)(*g_ExternalRendererBridge.rendering_quality == 0) & 0xfffffffe) + 3);
    (*g_Device->vtable->SetTexture)(g_Device,0,DAT_100141d4);
  }
  iVar1 = *g_ExternalRendererBridge.rendering_quality;
  if (DAT_10014224 != iVar1) {
    if (iVar1 == 0) {
      value = 1;
    }
    else {
      value = 3;
    }
    DAT_10014224 = iVar1;
    (*g_Device->vtable->SetTextureStageState)(g_Device,0,0x12,value);
  }
  if (((param_1 ^ _DAT_10014218) & 2) != 0) {
    if ((param_1 & 2) == 0) {
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
  if (((param_1 ^ _DAT_10014218) & 4) != 0) {
    if ((param_1 & 4) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    dll_dx7_cpp_FUN_100037e0(9,uVar2);
  }
  if (((param_1 ^ _DAT_10014218) & 8) != 0) {
    dll_dx7_cpp_FUN_100037e0(0x1c,(param_1 & 8) != 0);
  }
  if (((param_1 ^ _DAT_10014218) & 0xc0) == 0) goto LAB_10004282;
  if ((param_1 & 0xc0) == 0) {
    dll_dx7_cpp_FUN_100037e0(7,0);
    uVar2 = 0;
LAB_1000426c:
    dll_dx7_cpp_FUN_100037e0(0xe,uVar2);
    uVar2 = 8;
  }
  else if (((param_1 & 0x40) == 0) || ((param_1 & 0x80) == 0)) {
    if ((param_1 & 0x40) == 0) {
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
  _DAT_10014218 = param_1;
  iVar1 = *g_ExternalRendererBridge.system_memory_size;
  if (DAT_10240624 != iVar1) {
    DAT_10240624 = iVar1;
    if (*g_ExternalRendererBridge.processor_type == 0) {
      _DAT_10240614 = 256.0 / (float)iVar1;
    }
    else if ((g_FlyIniPresent == 0) || (g_ZBufferBitDepth != 0x10)) {
      _DAT_10240614 = 1.0 / (float)iVar1;
    }
    else {
      _DAT_10240614 = 1.0 / (float)(((int)(float)iVar1 >> 1) + _DAT_1024062c);
    }
  }
  if ((param_1 & 0x10) == 0) {
    DAT_10236908 = 0xff;
  }
  else {
    DAT_10236908 = *g_ExternalRendererBridge.current_lighting + -0x100 >> 4;
    if (0xff < DAT_10236908) {
      DAT_10240610 = DAT_10236908 + -0x100;
      if (0xff < DAT_10240610) {
        DAT_10240610 = 0xff;
      }
      DAT_10236908 = 0xff;
      return;
    }
  }
  DAT_10240610 = 0;
  return;
}
