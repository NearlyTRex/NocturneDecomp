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
    pHVar1 = g_HWND_0264bcf0;
  }
  g_HWND_0264bcf0 = pHVar1;
  pHVar1 = g_HWND_0264bcf0;
  if (g_INT_0264bba0 == 0) {
    return 0;
  }
  g_HMODULE_0264bce0 = wincore_wddvmem_cpp_loadLibrary_FUN_00589970(g_CHAR_ARRAY_0061e180);
  if (g_HMODULE_0264bce0 == (HMODULE)0x0) {
    g_INT_0264bba0 = (int)g_HMODULE_0264bce0;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                     (g_HMODULE_0264bce0,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
    g_INT_0264bba0 = 0;
    return 0;
  }
  (*pFVar2)(g_HMODULE_0264bce0,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_005602c0(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00560310(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_0055dcf0();
    g_INT_0264bba0 = 0;
    return 0;
  }
  g_INT_0264bcf8 = 0;
  g_PTR_0264bbb8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLinit");
  if ((FARPROC)g_PTR_0264bbb8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbbc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLkill");
  if ((FARPROC)g_PTR_0264bbbc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLtoggle");
  if ((FARPROC)g_PTR_0264bbc0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_INT_0264bbc4 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                      (g_HMODULE_0264bce0,"APIDLLsetVideoMode");
  if ((FARPROC)g_INT_0264bbc4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbc8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetVideoMode2");
  if ((FARPROC)g_PTR_0264bbc8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbcc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLrestoreVideoMode");
  if ((FARPROC)g_PTR_0264bbcc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLbeginScene");
  if ((FARPROC)g_PTR_0264bbd0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLendScene")
  ;
  if ((FARPROC)g_PTR_0264bbd4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbd8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlockFrame");
  if ((FARPROC)g_PTR_0264bbd8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbdc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLunlockFrame");
  if ((FARPROC)g_PTR_0264bbdc == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLselectTexture");
  if ((FARPROC)g_PTR_0264bbe0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLupdateTexture");
  if ((FARPROC)g_PTR_0264bbe4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbe8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLselectTextureBGRA");
  g_PTR_0264bbec =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLupdateTextureBGRA");
  g_PTR_0264bbf0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetMipMapLevel");
  if ((FARPROC)g_PTR_0264bbf0 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbf4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdrawPolygon");
  if ((FARPROC)g_PTR_0264bbf4 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbf8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdrawPolygon2");
  if ((FARPROC)g_PTR_0264bbf8 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bbfc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdrawPolyList");
  g_PTR_0264bc00 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdrawPolyList2");
  g_PTR_0264bc04 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdrawPolyList3");
  g_PTR_0264bc08 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLaddParticle");
  if ((FARPROC)g_PTR_0264bc08 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc0c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLflushParticleList");
  if ((FARPROC)g_PTR_0264bc0c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc10 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLadd3dLine");
  if ((FARPROC)g_PTR_0264bc10 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc14 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLflushLineList");
  if ((FARPROC)g_PTR_0264bc14 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc18 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLclear");
  if ((FARPROC)g_PTR_0264bc18 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc1c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetFogColor");
  if ((FARPROC)g_PTR_0264bc1c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc20 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLsync");
  if ((FARPROC)g_PTR_0264bc20 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc24 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLclearZBuffer");
  if ((FARPROC)g_PTR_0264bc24 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc28 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLclearZBox");
  if ((FARPROC)g_PTR_0264bc28 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc2c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetColorTable16");
  if ((FARPROC)g_PTR_0264bc2c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  _DAT_0264bc30 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLGetDisplayContext");
  if (_DAT_0264bc30 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  _DAT_0264bc34 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLReleaseDisplayContext");
  if (_DAT_0264bc34 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc38 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLmasterZBuffer");
  if ((FARPROC)g_PTR_0264bc38 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc3c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLrestoreZBuffer");
  if ((FARPROC)g_PTR_0264bc3c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc40 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLgetVideoMemory");
  if ((FARPROC)g_PTR_0264bc40 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc44 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLselectCard");
  if ((FARPROC)g_PTR_0264bc44 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc48 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLbuildCardList");
  if ((FARPROC)g_PTR_0264bc48 == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc4c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlockHoldBuffer");
  g_PTR_0264bc50 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLunlockHoldBuffer");
  g_PTR_0264bc54 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlockTexture");
  g_PTR_0264bc58 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLunlockTexture");
  g_PTR_0264bc5c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLgetTextureInfo");
  if ((FARPROC)g_PTR_0264bc5c == (FARPROC)0x0) {
    g_INT_0264bcf8 = 1;
  }
  g_PTR_0264bc60 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetVideoModeX");
  _DAT_0264bc64 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLrestoreVideoModeX");
  g_PTR_0264bc68 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlockFrameX");
  _DAT_0264bc6c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLunlockFrameX");
  g_PTR_0264bc70 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLtoggleX");
  g_PTR_0264bc74 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetViewport");
  g_PTR_0264bc78 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetLightConstants");
  g_PTR_0264bc7c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetLightVector");
  g_PTR_0264bc80 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetAmbientLight");
  g_PTR_0264bc84 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetTransform");
  g_PTR_0264bc88 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLpolyList")
  ;
  g_PTR_0264bc8c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyList2");
  g_PTR_0264bc90 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyListL");
  g_PTR_0264bc94 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyListD3DL");
  g_PTR_0264bc98 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyListD3DL2");
  g_PTR_0264bc9c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyListD3DTL");
  g_PTR_0264bca0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLpolyListTL");
  _DAT_0264bca4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdotListD3DL");
  _DAT_0264bca8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdotListD3DTL");
  _DAT_0264bcac =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlineListD3DL");
  g_PTR_0264bcb0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLlineListD3DTL");
  g_PTR_0264bcb4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLgetTextureHandle");
  g_PTR_0264bcb8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLselectTextureByHandle");
  g_PTR_0264bcbc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLresetTextureCache");
  _DAT_0264bcc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLenableCulling");
  g_PTR_0264bcc4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLenableClipping");
  g_PTR_0264bcc8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLsetTextureClamp");
  g_PTR_0264bccc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(g_HMODULE_0264bce0,"APIDLLsetFog");
  g_PTR_0264bcd0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLresetDynamicLight");
  g_PTR_0264bcd4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLaddDynamicLight");
  g_PTR_0264bcd8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (g_HMODULE_0264bce0,"APIDLLdynamicLightHint");
  if (g_INT_0264bcf8 == 0) {
    g_INT_0264bcdc = 1;
    memset(&p_Stack_a0,0,0x90);
    p_Stack_a0 = &g_BIT_INTEGER32_01c35814;
    piStack_9c = &g_INT_01c35818;
    p_Stack_98 = &g_BIT_INTEGER32_01c3581c;
    p_Stack_94 = &g_BIT_INTEGER32_01c35820;
    piStack_90 = &g_INT_01c35824;
    p_Stack_8c = &g_BIT_INTEGER32_01c35828;
    p_Stack_88 = &g_BIT_INTEGER32_01c3582c;
    piStack_84 = &g_INT_01c35830;
    p_Stack_80 = &g_BIT_INTEGER32_01c35834;
    piStack_7c = &g_INT_01c38b4c;
    piStack_78 = &g_INT_01c35e64;
    piStack_74 = &g_INT_006141d8;
    piStack_70 = &g_INT_01c35e60;
    piStack_6c = &g_INT_01c35e48;
    piStack_68 = &g_INT_01c35e4c;
    piStack_64 = &g_INT_01c35e50;
    piStack_60 = &g_INT_01c35e54;
    piStack_5c = &g_INT_006141c4;
    piStack_58 = &g_INT_006141c8;
    piStack_54 = &g_INT_01c37780;
    piStack_50 = &g_INT_0061e28c;
    puStack_4c = &DAT_0061e284;
    puStack_48 = &DAT_0061e288;
    uStack_44 = 0x264bba8;
    piStack_40 = &g_INT_0061e280;
    piStack_3c = &g_INT_0264bbac;
    piStack_38 = &g_INT_01c38b50;
    puStack_34 = &DAT_006141dc;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    puStack_14 = g_PTR_0061e290;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*(code *)g_PTR_0264bbb8)(pHVar1,&p_Stack_a0);
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
