// Name: engine_special.cpp_loadExternalRenderer_FUN_00564be0
// Address: 00564be0
// Address Range: [[00564be0, 005657e9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00564be0(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00564be0(HWND window_handle)

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
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
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
    pHVar1 = g_HWND_02cf611c;
  }
  g_HWND_02cf611c = pHVar1;
  pHVar1 = g_HWND_02cf611c;
  if (g_INT_02cf5fcc == 0) {
    return 0;
  }
  g_HMODULE_02cf610c = wincore_wddvmem_cpp_loadLibrary_FUN_0057ad10(g_CHAR_ARRAY_00606730);
  if (g_HMODULE_02cf610c == (HMODULE)0x0) {
    g_INT_02cf5fcc = (int)g_HMODULE_02cf610c;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                     (g_HMODULE_02cf610c,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_00564010();
    g_INT_02cf5fcc = 0;
    return 0;
  }
  (*pFVar2)(g_HMODULE_02cf610c,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00566630(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_00564010();
    g_INT_02cf5fcc = 0;
    return 0;
  }
  g_INT_02cf6124 = 0;
  g_PTR_02cf5fe4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLinit");
  if ((FARPROC)g_PTR_02cf5fe4 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf5fe8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLkill");
  if ((FARPROC)g_PTR_02cf5fe8 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf5fec =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLtoggle");
  if ((FARPROC)g_PTR_02cf5fec == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  _DAT_02cf5ff0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetVideoMode");
  if (_DAT_02cf5ff0 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf5ff4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetVideoMode2");
  if ((FARPROC)g_PTR_02cf5ff4 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf5ff8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLrestoreVideoMode");
  if ((FARPROC)g_PTR_02cf5ff8 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf5ffc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLbeginScene");
  if ((FARPROC)g_PTR_02cf5ffc == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6000 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLendScene")
  ;
  if ((FARPROC)g_PTR_02cf6000 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6004 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlockFrame");
  if ((FARPROC)g_PTR_02cf6004 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6008 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLunlockFrame");
  if ((FARPROC)g_PTR_02cf6008 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf600c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLselectTexture");
  if ((FARPROC)g_PTR_02cf600c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6010 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLupdateTexture");
  if ((FARPROC)g_PTR_02cf6010 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6014 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLselectTextureBGRA");
  g_PTR_02cf6018 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLupdateTextureBGRA");
  g_PTR_02cf601c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetMipMapLevel");
  if ((FARPROC)g_PTR_02cf601c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6020 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdrawPolygon");
  if ((FARPROC)g_PTR_02cf6020 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6024 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdrawPolygon2");
  if ((FARPROC)g_PTR_02cf6024 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6028 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdrawPolyList");
  g_PTR_02cf602c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdrawPolyList2");
  g_PTR_02cf6030 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdrawPolyList3");
  g_PTR_02cf6034 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLaddParticle");
  if ((FARPROC)g_PTR_02cf6034 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6038 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLflushParticleList");
  if ((FARPROC)g_PTR_02cf6038 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf603c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLadd3dLine");
  if ((FARPROC)g_PTR_02cf603c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6040 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLflushLineList");
  if ((FARPROC)g_PTR_02cf6040 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6044 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLclear");
  if ((FARPROC)g_PTR_02cf6044 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6048 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetFogColor");
  if ((FARPROC)g_PTR_02cf6048 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf604c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLsync");
  if ((FARPROC)g_PTR_02cf604c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6050 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLclearZBuffer");
  if ((FARPROC)g_PTR_02cf6050 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6054 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLclearZBox");
  if ((FARPROC)g_PTR_02cf6054 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6058 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetColorTable16");
  if ((FARPROC)g_PTR_02cf6058 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  _DAT_02cf605c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLGetDisplayContext");
  if (_DAT_02cf605c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  _DAT_02cf6060 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLReleaseDisplayContext");
  if (_DAT_02cf6060 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6064 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLmasterZBuffer");
  if ((FARPROC)g_PTR_02cf6064 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6068 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLrestoreZBuffer");
  if ((FARPROC)g_PTR_02cf6068 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf606c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLgetVideoMemory");
  if ((FARPROC)g_PTR_02cf606c == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6070 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLselectCard");
  if ((FARPROC)g_PTR_02cf6070 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6074 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLbuildCardList");
  if ((FARPROC)g_PTR_02cf6074 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf6078 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlockHoldBuffer");
  g_PTR_02cf607c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLunlockHoldBuffer");
  g_PTR_02cf6080 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlockTexture");
  g_PTR_02cf6084 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLunlockTexture");
  g_PTR_02cf6088 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLgetTextureInfo");
  if ((FARPROC)g_PTR_02cf6088 == (FARPROC)0x0) {
    g_INT_02cf6124 = 1;
  }
  g_PTR_02cf608c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetVideoModeX");
  _DAT_02cf6090 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLrestoreVideoModeX");
  g_PTR_02cf6094 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlockFrameX");
  _DAT_02cf6098 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLunlockFrameX");
  g_PTR_02cf609c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLtoggleX");
  g_PTR_02cf60a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetViewport");
  g_PTR_02cf60a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetLightConstants");
  g_PTR_02cf60a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetLightVector");
  g_PTR_02cf60ac =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetAmbientLight");
  g_PTR_02cf60b0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetTransform");
  g_PTR_02cf60b4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLpolyList")
  ;
  g_PTR_02cf60b8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyList2");
  g_PTR_02cf60bc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyListL");
  g_PTR_02cf60c0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyListD3DL");
  g_PTR_02cf60c4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyListD3DL2");
  g_PTR_02cf60c8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyListD3DTL");
  g_PTR_02cf60cc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLpolyListTL");
  _DAT_02cf60d0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdotListD3DL");
  _DAT_02cf60d4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdotListD3DTL");
  _DAT_02cf60d8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlineListD3DL");
  g_PTR_02cf60dc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLlineListD3DTL");
  g_PTR_02cf60e0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLgetTextureHandle");
  g_PTR_02cf60e4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLselectTextureByHandle");
  g_PTR_02cf60e8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLresetTextureCache");
  g_PTR_02cf60ec =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLenableCulling");
  g_PTR_02cf60f0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLenableClipping");
  g_PTR_02cf60f4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLsetTextureClamp");
  g_PTR_02cf60f8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(g_HMODULE_02cf610c,"APIDLLsetFog");
  g_PTR_02cf60fc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLresetDynamicLight");
  g_PTR_02cf6100 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLaddDynamicLight");
  g_PTR_02cf6104 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (g_HMODULE_02cf610c,"APIDLLdynamicLightHint");
  if (g_INT_02cf6124 == 0) {
    g_INT_02cf6108 = 1;
    memset(&p_Stack_a0,0,0x90);
    p_Stack_a0 = &g_BIT_INTEGER32_01c6af74;
    piStack_9c = &g_INT_01c6af78;
    p_Stack_98 = &g_BIT_INTEGER32_01c6af7c;
    p_Stack_94 = &g_BIT_INTEGER32_01c6af80;
    piStack_90 = &g_INT_01c6af84;
    p_Stack_8c = &g_BIT_INTEGER32_01c6af88;
    p_Stack_88 = &g_BIT_INTEGER32_01c6af8c;
    piStack_84 = &g_INT_01c6af90;
    p_Stack_80 = &g_BIT_INTEGER32_01c6af94;
    piStack_7c = &g_INT_01c6e2ac;
    piStack_78 = &g_INT_01c6b5c4;
    piStack_74 = &g_INT_005fba38;
    piStack_70 = &g_INT_01c6b5c0;
    piStack_6c = &g_INT_01c6b5a8;
    piStack_68 = &g_INT_01c6b5ac;
    piStack_64 = &g_INT_01c6b5b0;
    piStack_60 = &g_INT_01c6b5b4;
    piStack_5c = &g_INT_005fba24;
    piStack_58 = &g_INT_005fba28;
    piStack_54 = &g_INT_01c6cee0;
    piStack_50 = &g_INT_0060683c;
    piStack_4c = &g_INT_00606834;
    piStack_48 = &g_INT_00606838;
    piStack_44 = &g_INT_02cf5fd4;
    piStack_40 = &g_INT_00606830;
    piStack_3c = &g_INT_02cf5fd8;
    piStack_38 = &g_INT_01c6e2b0;
    piStack_34 = &g_INT_005fba3c;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    puStack_14 = g_PTR_00606840;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*(code *)g_PTR_02cf5fe4)(pHVar1,&p_Stack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_selectCard_FUN_005663e0(g_INT_02cf5fd0);
      return 1;
    }
    g_INT_02cf5fcc = iVar3;
    return 0;
  }
  engine_special_cpp_shutdownExternalRenderer_FUN_00564010();
  g_INT_02cf5fcc = 0;
  return 0;
}
