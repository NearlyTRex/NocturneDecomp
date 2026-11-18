// Name: engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0
// Address: 0055dcf0
// Address Range: [[0055dcf0, 0055ded4]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0(void)

{
  g_INT_01c37788 = 0;
  g_LoadedExternalDLLRenderer = 0;
  if (g_RendererDLLHandle != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_00589960(g_RendererDLLHandle);
    g_RendererDLLHandle = (HMODULE)0x0;
  }
  g_PTR_0264bbbc = (byte *)0x0;
  g_PTR_0264bbc0 = (byte *)0x0;
  g_INT_0264bbc4 = 0;
  g_PTR_0264bbc8 = (byte *)0x0;
  g_PTR_0264bbcc = (byte *)0x0;
  g_PTR_0264bbd0 = (byte *)0x0;
  g_PTR_0264bbd4 = (byte *)0x0;
  g_PTR_0264bbd8 = (byte *)0x0;
  g_PTR_0264bbdc = (byte *)0x0;
  g_PTR_0264bbe0 = (byte *)0x0;
  g_PTR_0264bbe4 = (byte *)0x0;
  g_PTR_0264bbf0 = (byte *)0x0;
  g_PTR_0264bbf4 = (byte *)0x0;
  g_PTR_0264bbf8 = (byte *)0x0;
  g_PTR_0264bbfc = (byte *)0x0;
  g_PTR_0264bc00 = (byte *)0x0;
  g_PTR_0264bc04 = (byte *)0x0;
  g_PTR_0264bc08 = (byte *)0x0;
  g_PTR_0264bc0c = (byte *)0x0;
  g_PTR_0264bc10 = (byte *)0x0;
  g_PTR_0264bc14 = (byte *)0x0;
  g_PTR_0264bc18 = (byte *)0x0;
  g_PTR_0264bc1c = (byte *)0x0;
  g_PTR_0264bc20 = (byte *)0x0;
  g_PTR_0264bc24 = (byte *)0x0;
  g_PTR_0264bc28 = (byte *)0x0;
  g_PTR_0264bc2c = (byte *)0x0;
  _DAT_0264bc30 = 0;
  _DAT_0264bc34 = 0;
  g_PTR_0264bc38 = (byte *)0x0;
  g_PTR_0264bc3c = (byte *)0x0;
  g_PTR_0264bc40 = (byte *)0x0;
  g_PTR_0264bc44 = (byte *)0x0;
  g_PTR_0264bc48 = (byte *)0x0;
  g_PTR_0264bc4c = (byte *)0x0;
  g_PTR_0264bc50 = (byte *)0x0;
  g_PTR_0264bc54 = (byte *)0x0;
  g_PTR_0264bc58 = (byte *)0x0;
  g_PTR_0264bc5c = (byte *)0x0;
  g_PTR_0264bc60 = (byte *)0x0;
  _DAT_0264bc64 = 0;
  g_APIDLL_getDisplayContext = (byte *)0x0;
  _DAT_0264bc6c = 0;
  g_PTR_0264bc70 = (byte *)0x0;
  g_PTR_0264bc74 = (byte *)0x0;
  g_PTR_0264bc78 = (byte *)0x0;
  g_PTR_0264bc7c = (byte *)0x0;
  g_PTR_0264bc80 = (byte *)0x0;
  g_APIDLL_lockHoldBuffer = (byte *)0x0;
  g_APIDLL_unlockHoldBuffer = (byte *)0x0;
  g_APIDLL_lockTexture = (byte *)0x0;
  g_APIDLL_unlockTexture = (byte *)0x0;
  g_APIDLL_getTextureInfo = (byte *)0x0;
  g_APIDLL_setVideoModeX = (byte *)0x0;
  g_APIDLL_restoreVideoModeX = (byte *)0x0;
  g_APIDLL_lockFrameX = (byte *)0x0;
  _DAT_0264bca4 = 0;
  _DAT_0264bca8 = 0;
  _DAT_0264bcac = 0;
  g_APIDLL_setLightConstants = (byte *)0x0;
  g_APIDLL_setLightVector = (byte *)0x0;
  g_APIDLL_setAmbientLight = (byte *)0x0;
  g_APIDLL_setTransform = (byte *)0x0;
  _DAT_0264bcc0 = 0;
  g_APIDLL_getTextureHandle = (byte *)0x0;
  g_APIDLL_selectTextureByHandle = (byte *)0x0;
  g_APIDLL_enableCulling = (byte *)0x0;
  g_APIDLL_enableClipping = (byte *)0x0;
  g_APIDLL_setTextureClamp = (byte *)0x0;
  g_APIDLL_setFog = (byte *)0x0;
  g_APIDLL_init = (byte *)0x0;
  return;
}
