// Name: engine_special.cpp_loadExternalRenderer_FUN_00581310
// Address: 00581310
// Address Range: [[00581310, 00581f19]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00581310(HWND window_handle)

#include "nocturne.h"

int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00581310(HWND window_handle)

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
    pHVar1 = g_HWND_02c834c0;
  }
  g_HWND_02c834c0 = pHVar1;
  pHVar1 = g_HWND_02c834c0;
  if (g_INT_02c83370 == 0) {
    return 0;
  }
  g_HMODULE_02c834b0 = wincore_wddvmem_cpp_loadLibrary_FUN_005ad460(g_CHAR_ARRAY_006257d0);
  if (g_HMODULE_02c834b0 == (HMODULE)0x0) {
    g_INT_02c83370 = (int)g_HMODULE_02c834b0;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                     (g_HMODULE_02c834b0,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_00580740();
    g_INT_02c83370 = 0;
    return 0;
  }
  (*pFVar2)(g_HMODULE_02c834b0,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_00582d10(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00582d60(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_shutdownExternalRenderer_FUN_00580740();
    g_INT_02c83370 = 0;
    return 0;
  }
  g_INT_02c834c8 = 0;
  g_PTR_02c83388 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLinit");
  if ((FARPROC)g_PTR_02c83388 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c8338c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLkill");
  if ((FARPROC)g_PTR_02c8338c == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83390 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLtoggle");
  if ((FARPROC)g_PTR_02c83390 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_INT_02c83394 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLsetVideoMode");
  if ((FARPROC)g_INT_02c83394 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83398 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetVideoMode2");
  if ((FARPROC)g_PTR_02c83398 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c8339c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLrestoreVideoMode");
  if ((FARPROC)g_PTR_02c8339c == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLbeginScene");
  if ((FARPROC)g_PTR_02c833a0 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLendScene")
  ;
  if ((FARPROC)g_PTR_02c833a4 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLlockFrame");
  if ((FARPROC)g_PTR_02c833a8 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833ac =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLunlockFrame");
  if ((FARPROC)g_PTR_02c833ac == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833b0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLselectTexture");
  if ((FARPROC)g_PTR_02c833b0 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833b4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLupdateTexture");
  if ((FARPROC)g_PTR_02c833b4 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833b8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLselectTextureBGRA");
  g_PTR_02c833bc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLupdateTextureBGRA");
  g_PTR_02c833c0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetMipMapLevel");
  if ((FARPROC)g_PTR_02c833c0 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833c4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdrawPolygon");
  if ((FARPROC)g_PTR_02c833c4 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833c8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdrawPolygon2");
  if ((FARPROC)g_PTR_02c833c8 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833cc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdrawPolyList");
  g_PTR_02c833d0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdrawPolyList2");
  g_PTR_02c833d4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdrawPolyList3");
  g_PTR_02c833d8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLaddParticle");
  if ((FARPROC)g_PTR_02c833d8 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833dc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLflushParticleList");
  if ((FARPROC)g_PTR_02c833dc == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833e0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLadd3dLine");
  if ((FARPROC)g_PTR_02c833e0 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833e4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLflushLineList");
  if ((FARPROC)g_PTR_02c833e4 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833e8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLclear");
  if ((FARPROC)g_PTR_02c833e8 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833ec =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetFogColor");
  if ((FARPROC)g_PTR_02c833ec == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833f0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLsync");
  if ((FARPROC)g_PTR_02c833f0 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833f4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLclearZBuffer");
  if ((FARPROC)g_PTR_02c833f4 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833f8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLclearZBox");
  if ((FARPROC)g_PTR_02c833f8 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c833fc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetColorTable16");
  if ((FARPROC)g_PTR_02c833fc == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_INT_02c83400 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLGetDisplayContext");
  if ((FARPROC)g_INT_02c83400 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_INT_02c83404 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLReleaseDisplayContext");
  if ((FARPROC)g_INT_02c83404 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83408 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLmasterZBuffer");
  if ((FARPROC)g_PTR_02c83408 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c8340c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLrestoreZBuffer");
  if ((FARPROC)g_PTR_02c8340c == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83410 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLgetVideoMemory");
  if ((FARPROC)g_PTR_02c83410 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83414 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLselectCard");
  if ((FARPROC)g_PTR_02c83414 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83418 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLbuildCardList");
  if ((FARPROC)g_PTR_02c83418 == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c8341c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLlockHoldBuffer");
  g_PTR_02c83420 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLunlockHoldBuffer");
  g_PTR_02c83424 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLlockTexture");
  g_PTR_02c83428 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLunlockTexture");
  g_PTR_02c8342c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLgetTextureInfo");
  if ((FARPROC)g_PTR_02c8342c == (FARPROC)0x0) {
    g_INT_02c834c8 = 1;
  }
  g_PTR_02c83430 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetVideoModeX");
  g_INT_02c83434 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLrestoreVideoModeX");
  g_PTR_02c83438 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLlockFrameX");
  g_INT_02c8343c =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLunlockFrameX");
  g_PTR_02c83440 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLtoggleX");
  g_PTR_02c83444 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetViewport");
  g_PTR_02c83448 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetLightConstants");
  g_PTR_02c8344c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetLightVector");
  g_PTR_02c83450 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetAmbientLight");
  g_PTR_02c83454 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetTransform");
  g_PTR_02c83458 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLpolyList")
  ;
  g_PTR_02c8345c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyList2");
  g_PTR_02c83460 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyListL");
  g_PTR_02c83464 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyListD3DL");
  g_PTR_02c83468 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyListD3DL2");
  g_PTR_02c8346c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyListD3DTL");
  g_PTR_02c83470 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLpolyListTL");
  g_INT_02c83474 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLdotListD3DL");
  g_INT_02c83478 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLdotListD3DTL");
  g_INT_02c8347c =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLlineListD3DL");
  g_PTR_02c83480 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLlineListD3DTL");
  g_PTR_02c83484 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLgetTextureHandle");
  g_PTR_02c83488 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLselectTextureByHandle");
  g_PTR_02c8348c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLresetTextureCache");
  g_INT_02c83490 =
       (int)wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                      (g_HMODULE_02c834b0,"APIDLLenableCulling");
  g_PTR_02c83494 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLenableClipping");
  g_PTR_02c83498 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLsetTextureClamp");
  g_PTR_02c8349c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(g_HMODULE_02c834b0,"APIDLLsetFog");
  g_PTR_02c834a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLresetDynamicLight");
  g_PTR_02c834a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLaddDynamicLight");
  g_PTR_02c834a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (g_HMODULE_02c834b0,"APIDLLdynamicLightHint");
  if (g_INT_02c834c8 == 0) {
    g_INT_02c834ac = 1;
    memset(&p_Stack_a0,0,0x90);
    p_Stack_a0 = &g_BIT_INTEGER32_01c4e9d4;
    piStack_9c = &g_INT_01c4e9d8;
    p_Stack_98 = &g_BIT_INTEGER32_01c4e9dc;
    p_Stack_94 = &g_BIT_INTEGER32_01c4e9e0;
    piStack_90 = &g_INT_01c4e9e4;
    p_Stack_8c = &g_BIT_INTEGER32_01c4e9e8;
    p_Stack_88 = &g_BIT_INTEGER32_01c4e9ec;
    piStack_84 = &g_INT_01c4e9f0;
    p_Stack_80 = &g_BIT_INTEGER32_01c4e9f4;
    piStack_7c = &g_INT_01c51d0c;
    piStack_78 = &g_INT_01c4f024;
    piStack_74 = &g_INT_0061b4b8;
    piStack_70 = &g_INT_01c4f020;
    piStack_6c = &g_INT_01c4f008;
    piStack_68 = &g_INT_01c4f00c;
    piStack_64 = &g_INT_01c4f010;
    piStack_60 = &g_INT_01c4f014;
    piStack_5c = &g_INT_0061b4a4;
    piStack_58 = &g_INT_0061b4a8;
    piStack_54 = &g_INT_01c50940;
    piStack_50 = &g_INT_006258dc;
    puStack_4c = &DAT_006258d4;
    puStack_48 = &DAT_006258d8;
    uStack_44 = 0x2c83378;
    piStack_40 = &g_INT_006258d0;
    piStack_3c = &g_INT_02c8337c;
    piStack_38 = &g_INT_01c51d10;
    puStack_34 = &DAT_0061b4bc;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    puStack_14 = g_PTR_006258e0;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*(code *)g_PTR_02c83388)(pHVar1,&p_Stack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_selectCard_FUN_00582b10(g_INT_02c83374);
      return 1;
    }
    g_INT_02c83370 = iVar3;
    return 0;
  }
  engine_special_cpp_shutdownExternalRenderer_FUN_00580740();
  g_INT_02c83370 = 0;
  return 0;
}
