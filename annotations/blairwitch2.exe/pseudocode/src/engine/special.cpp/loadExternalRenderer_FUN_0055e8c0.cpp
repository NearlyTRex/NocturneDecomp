// Name: engine_special.cpp_loadExternalRenderer_FUN_0055e8c0
// Address: 0055e8c0
// Address Range: [[0055e8c0, 0055f4c9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_loadExternalRenderer_FUN_0055e8c0(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_loadExternalRenderer_FUN_0055e8c0(HWND window_handle)

{
  HWND pHVar1;
  FARPROC pFVar2;
  int iVar3;
  CExternalRenderer CStack_3c30;
  CExternalRenderer CStack_1e68;
  _BIT_INTEGER32 *p_Stack_a0;
  int *piStack_9c;
  _BIT_INTEGER32 *p_Stack_98;
  _BIT_INTEGER32 *p_Stack_94;
  int *piStack_90;
  _BIT_INTEGER32 *p_Stack_8c;
  _BIT_INTEGER32 *p_Stack_88;
  int *piStack_84;
  _BIT_INTEGER32 *p_Stack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  byte *puStack_4c;
  byte *puStack_48;
  uint uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  byte *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  byte *puStack_14;
  
  pHVar1 = window_handle;
  if (window_handle == (HWND)0x0) {
    pHVar1 = g_StoredWindowHandle;
  }
  g_StoredWindowHandle = pHVar1;
  pHVar1 = g_StoredWindowHandle;
  if (g_INT_0264bba0 == 0) {
    return 0;
  }
  g_RendererDLLHandle = wincore_wddvmem_cpp_loadLibrary_FUN_00589970(g_RendererDllPath);
  if (g_RendererDLLHandle == (HMODULE)0x0) {
    g_INT_0264bba0 = (int)g_RendererDLLHandle;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                     (g_RendererDLLHandle,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
    g_INT_0264bba0 = 0;
    return 0;
  }
  (*pFVar2)(g_RendererDLLHandle,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_005602c0(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00560310(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
    g_INT_0264bba0 = 0;
    return 0;
  }
  g_INT_0264bcf8 = 0;
  g_APIDLL_init =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLinit");
  if ((FARPROC)g_APIDLL_init == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbbc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLkill");
  if ((FARPROC)g_PTR_0264bbbc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLtoggle");
  if ((FARPROC)g_PTR_0264bbc0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_INT_0264bbc4 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                      (g_RendererDLLHandle,"APIDLLsetVideoMode");
  if ((FARPROC)g_INT_0264bbc4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbc8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetVideoMode2");
  if ((FARPROC)g_PTR_0264bbc8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbcc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLrestoreVideoMode");
  if ((FARPROC)g_PTR_0264bbcc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLbeginScene");
  if ((FARPROC)g_PTR_0264bbd0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLendScene");
  if ((FARPROC)g_PTR_0264bbd4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlockFrame");
  if ((FARPROC)g_PTR_0264bbd8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbdc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLunlockFrame");
  if ((FARPROC)g_PTR_0264bbdc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLselectTexture");
  if ((FARPROC)g_PTR_0264bbe0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLupdateTexture");
  if ((FARPROC)g_PTR_0264bbe4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLselectTextureBGRA");
  g_PTR_0264bbec =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLupdateTextureBGRA");
  g_PTR_0264bbf0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetMipMapLevel");
  if ((FARPROC)g_PTR_0264bbf0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbf4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdrawPolygon");
  if ((FARPROC)g_PTR_0264bbf4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbf8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdrawPolygon2");
  if ((FARPROC)g_PTR_0264bbf8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbfc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdrawPolyList");
  g_PTR_0264bc00 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdrawPolyList2");
  g_PTR_0264bc04 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdrawPolyList3");
  g_PTR_0264bc08 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLaddParticle");
  if ((FARPROC)g_PTR_0264bc08 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc0c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLflushParticleList");
  if ((FARPROC)g_PTR_0264bc0c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc10 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLadd3dLine");
  if ((FARPROC)g_PTR_0264bc10 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc14 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLflushLineList");
  if ((FARPROC)g_PTR_0264bc14 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc18 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLclear");
  if ((FARPROC)g_PTR_0264bc18 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc1c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetFogColor");
  if ((FARPROC)g_PTR_0264bc1c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc20 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLsync");
  if ((FARPROC)g_PTR_0264bc20 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc24 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLclearZBuffer");
  if ((FARPROC)g_PTR_0264bc24 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc28 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLclearZBox");
  if ((FARPROC)g_PTR_0264bc28 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc2c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetColorTable16");
  if ((FARPROC)g_PTR_0264bc2c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  _DAT_0264bc30 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLGetDisplayContext");
  if (_DAT_0264bc30 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  _DAT_0264bc34 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLReleaseDisplayContext");
  if (_DAT_0264bc34 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc38 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLmasterZBuffer");
  if ((FARPROC)g_PTR_0264bc38 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc3c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLrestoreZBuffer");
  if ((FARPROC)g_PTR_0264bc3c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc40 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLgetVideoMemory");
  if ((FARPROC)g_PTR_0264bc40 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc44 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLselectCard");
  if ((FARPROC)g_PTR_0264bc44 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc48 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLbuildCardList");
  if ((FARPROC)g_PTR_0264bc48 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc4c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlockHoldBuffer");
  g_PTR_0264bc50 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLunlockHoldBuffer");
  g_PTR_0264bc54 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlockTexture");
  g_PTR_0264bc58 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLunlockTexture");
  g_PTR_0264bc5c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLgetTextureInfo");
  if ((FARPROC)g_PTR_0264bc5c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc60 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetVideoModeX");
  _DAT_0264bc64 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLrestoreVideoModeX");
  g_APIDLL_getDisplayContext =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlockFrameX");
  _DAT_0264bc6c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLunlockFrameX");
  g_PTR_0264bc70 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLtoggleX")
  ;
  g_PTR_0264bc74 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetViewport");
  g_PTR_0264bc78 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetLightConstants");
  g_PTR_0264bc7c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetLightVector");
  g_PTR_0264bc80 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetAmbientLight");
  g_APIDLL_lockHoldBuffer =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetTransform");
  g_APIDLL_unlockHoldBuffer =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyList");
  g_APIDLL_lockTexture =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyList2");
  g_APIDLL_unlockTexture =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyListL");
  g_APIDLL_getTextureInfo =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyListD3DL");
  g_APIDLL_setVideoModeX =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyListD3DL2");
  g_APIDLL_restoreVideoModeX =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyListD3DTL");
  g_APIDLL_lockFrameX =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLpolyListTL");
  _DAT_0264bca4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdotListD3DL");
  _DAT_0264bca8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdotListD3DTL");
  _DAT_0264bcac =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlineListD3DL");
  g_APIDLL_setLightConstants =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLlineListD3DTL");
  g_APIDLL_setLightVector =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLgetTextureHandle");
  g_APIDLL_setAmbientLight =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLselectTextureByHandle");
  g_APIDLL_setTransform =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLresetTextureCache");
  _DAT_0264bcc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLenableCulling");
  g_APIDLL_getTextureHandle =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLenableClipping");
  g_APIDLL_selectTextureByHandle =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLsetTextureClamp");
  g_APIDLL_enableCulling =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_RendererDLLHandle,"APIDLLsetFog");
  g_APIDLL_enableClipping =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLresetDynamicLight");
  g_APIDLL_setTextureClamp =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLaddDynamicLight");
  g_APIDLL_setFog =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_RendererDLLHandle,"APIDLLdynamicLightHint");
  if (g_INT_0264bcf8 == 0) {
    g_LoadedExternalDLLRenderer = 1;
    memset(&p_Stack_a0,0,0x90);
    p_Stack_a0 = &g_RedBitPosition;
    piStack_9c = &g_RedScaleFactor;
    p_Stack_98 = &g_RedDitherShift;
    p_Stack_94 = &g_GreenBitPosition;
    piStack_90 = &g_GreenScaleFactor;
    p_Stack_8c = &g_GreenDitherShift;
    p_Stack_88 = &g_BlueBitPosition;
    piStack_84 = &g_BlueScaleFactor;
    p_Stack_80 = &g_BlueDitherShift;
    piStack_7c = &g_BlendMode;
    piStack_78 = &g_CurrentLightingValue;
    piStack_74 = &g_CurrentAlphaValue;
    piStack_70 = &g_INT_01c35e60;
    piStack_6c = &g_INT_01c35e48;
    piStack_68 = &g_INT_01c35e4c;
    piStack_64 = &g_ClipRight;
    piStack_60 = &g_INT_01c35e54;
    piStack_5c = &g_TextureFilteringEnabled;
    piStack_58 = &g_CurrentTextureDimension;
    piStack_54 = &g_INT_01c37780;
    piStack_50 = &g_FullScreenQuadDepth;
    puStack_4c = &DAT_0061e284;
    puStack_48 = &DAT_0061e288;
    uStack_44 = 0x264bba8;
    piStack_40 = &g_SystemInitialized;
    piStack_3c = &g_INT_0264bbac;
    piStack_38 = &g_ProcessorType;
    puStack_34 = &DAT_006141dc;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    puStack_14 = g_PTR_0061e290;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*(code *)g_APIDLL_init)(pHVar1,&p_Stack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_selectCard_FUN_005600c0(g_INT_0264bba4);
      return 1;
    }
    g_INT_0264bba0 = iVar3;
    return 0;
  }
  engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
  g_INT_0264bba0 = 0;
  return 0;
}
