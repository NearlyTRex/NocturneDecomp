// Name: engine_special.cpp_FUN_00581310
// Address: 00581310
// Address Range: [[00581310, 00581f19]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00581310(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00581310(HWND window_handle)

{
  HWND pHVar1;
  FARPROC pFVar2;
  int iVar3;
  CExternalRenderer CStack_3c30;
  CExternalRenderer CStack_1e68;
  byte *puStack_a0;
  byte *puStack_9c;
  byte *puStack_98;
  byte *puStack_94;
  byte *puStack_90;
  byte *puStack_8c;
  byte *puStack_88;
  byte *puStack_84;
  byte *puStack_80;
  byte *puStack_7c;
  byte *puStack_78;
  uint *puStack_74;
  byte *puStack_70;
  byte *puStack_6c;
  byte *puStack_68;
  byte *puStack_64;
  byte *puStack_60;
  byte *puStack_5c;
  uint *puStack_58;
  byte *puStack_54;
  byte *puStack_50;
  byte *puStack_4c;
  byte *puStack_48;
  uint uStack_44;
  byte *puStack_40;
  byte *puStack_3c;
  byte *puStack_38;
  byte *puStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  pHVar1 = window_handle;
  if (window_handle == (HWND)0x0) {
    pHVar1 = _DAT_02c834c0;
  }
  _DAT_02c834c0 = pHVar1;
  pHVar1 = _DAT_02c834c0;
  if (_DAT_02c83370 == (HMODULE)0x0) {
    return 0;
  }
  _DAT_02c834b0 = wincore_wddvmem_cpp_loadLibrary_FUN_005ad460(&DAT_006257d0);
  if (_DAT_02c834b0 == (HMODULE)0x0) {
    _DAT_02c83370 = _DAT_02c834b0;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                     (_DAT_02c834b0,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_FUN_00580740();
    _DAT_02c83370 = (HMODULE)0x0;
    return 0;
  }
  (*pFVar2)(_DAT_02c834b0,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_00582d10(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00582d60(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_FUN_00580740();
    _DAT_02c83370 = (HMODULE)0x0;
    return 0;
  }
  _DAT_02c834c8 = 0;
  _DAT_02c83388 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLinit");
  if (_DAT_02c83388 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c8338c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLkill");
  if (_DAT_02c8338c == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83390 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLtoggle");
  if (_DAT_02c83390 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83394 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetVideoMode");
  if (_DAT_02c83394 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83398 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetVideoMode2")
  ;
  if (_DAT_02c83398 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c8339c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLrestoreVideoMode");
  if (_DAT_02c8339c == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLbeginScene");
  if (_DAT_02c833a0 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLendScene");
  if (_DAT_02c833a4 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLlockFrame");
  if (_DAT_02c833a8 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833ac =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLunlockFrame");
  if (_DAT_02c833ac == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833b0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLselectTexture")
  ;
  if (_DAT_02c833b0 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833b4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLupdateTexture")
  ;
  if (_DAT_02c833b4 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833b8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLselectTextureBGRA");
  _DAT_02c833bc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLupdateTextureBGRA");
  _DAT_02c833c0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetMipMapLevel");
  if (_DAT_02c833c0 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833c4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdrawPolygon");
  if (_DAT_02c833c4 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833c8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdrawPolygon2");
  if (_DAT_02c833c8 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833cc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdrawPolyList");
  _DAT_02c833d0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdrawPolyList2")
  ;
  _DAT_02c833d4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdrawPolyList3")
  ;
  _DAT_02c833d8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLaddParticle");
  if (_DAT_02c833d8 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833dc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLflushParticleList");
  if (_DAT_02c833dc == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833e0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLadd3dLine");
  if (_DAT_02c833e0 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833e4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLflushLineList")
  ;
  if (_DAT_02c833e4 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833e8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLclear");
  if (_DAT_02c833e8 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833ec =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetFogColor");
  if (_DAT_02c833ec == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833f0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsync");
  if (_DAT_02c833f0 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833f4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLclearZBuffer");
  if (_DAT_02c833f4 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833f8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLclearZBox");
  if (_DAT_02c833f8 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c833fc =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetColorTable16");
  if (_DAT_02c833fc == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83400 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLGetDisplayContext");
  if (_DAT_02c83400 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83404 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLReleaseDisplayContext");
  if (_DAT_02c83404 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83408 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLmasterZBuffer")
  ;
  if (_DAT_02c83408 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c8340c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLrestoreZBuffer");
  if (_DAT_02c8340c == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83410 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLgetVideoMemory");
  if (_DAT_02c83410 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83414 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLselectCard");
  if (_DAT_02c83414 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83418 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLbuildCardList")
  ;
  if (_DAT_02c83418 == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c8341c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLlockHoldBuffer");
  _DAT_02c83420 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLunlockHoldBuffer");
  _DAT_02c83424 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLlockTexture");
  _DAT_02c83428 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLunlockTexture")
  ;
  _DAT_02c8342c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLgetTextureInfo");
  if (_DAT_02c8342c == (FARPROC)0x0) {
    _DAT_02c834c8 = 1;
  }
  _DAT_02c83430 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetVideoModeX")
  ;
  _DAT_02c83434 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLrestoreVideoModeX");
  _DAT_02c83438 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLlockFrameX");
  _DAT_02c8343c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLunlockFrameX");
  _DAT_02c83440 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLtoggleX");
  _DAT_02c83444 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetViewport");
  _DAT_02c83448 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetLightConstants");
  _DAT_02c8344c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetLightVector");
  _DAT_02c83450 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetAmbientLight");
  _DAT_02c83454 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetTransform");
  _DAT_02c83458 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyList");
  _DAT_02c8345c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyList2");
  _DAT_02c83460 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyListL");
  _DAT_02c83464 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyListD3DL");
  _DAT_02c83468 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyListD3DL2")
  ;
  _DAT_02c8346c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyListD3DTL")
  ;
  _DAT_02c83470 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLpolyListTL");
  _DAT_02c83474 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdotListD3DL");
  _DAT_02c83478 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLdotListD3DTL");
  _DAT_02c8347c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLlineListD3DL");
  _DAT_02c83480 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLlineListD3DTL")
  ;
  _DAT_02c83484 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLgetTextureHandle");
  _DAT_02c83488 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLselectTextureByHandle");
  _DAT_02c8348c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLresetTextureCache");
  _DAT_02c83490 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLenableCulling")
  ;
  _DAT_02c83494 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLenableClipping");
  _DAT_02c83498 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLsetTextureClamp");
  _DAT_02c8349c =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(_DAT_02c834b0,"APIDLLsetFog");
  _DAT_02c834a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLresetDynamicLight");
  _DAT_02c834a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLaddDynamicLight");
  _DAT_02c834a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_005ad470
                 (_DAT_02c834b0,"APIDLLdynamicLightHint");
  if (_DAT_02c834c8 == 0) {
    _DAT_02c834ac = 1;
    memset(&puStack_a0,0,0x90);
    puStack_a0 = &DAT_01c4e9d4;
    puStack_9c = &DAT_01c4e9d8;
    puStack_98 = &DAT_01c4e9dc;
    puStack_94 = &DAT_01c4e9e0;
    puStack_90 = &DAT_01c4e9e4;
    puStack_8c = &DAT_01c4e9e8;
    puStack_88 = &DAT_01c4e9ec;
    puStack_84 = &DAT_01c4e9f0;
    puStack_80 = &DAT_01c4e9f4;
    puStack_7c = &DAT_01c51d0c;
    puStack_78 = &DAT_01c4f024;
    puStack_74 = &DAT_0061b4b8;
    puStack_70 = &DAT_01c4f020;
    puStack_6c = &DAT_01c4f008;
    puStack_68 = &DAT_01c4f00c;
    puStack_64 = &DAT_01c4f010;
    puStack_60 = &DAT_01c4f014;
    puStack_5c = &DAT_0061b4a4;
    puStack_58 = &DAT_0061b4a8;
    puStack_54 = &DAT_01c50940;
    puStack_50 = &DAT_006258dc;
    puStack_4c = &DAT_006258d4;
    puStack_48 = &DAT_006258d8;
    uStack_44 = 0x2c83378;
    puStack_40 = &DAT_006258d0;
    puStack_3c = &DAT_02c8337c;
    puStack_38 = &DAT_01c51d10;
    puStack_34 = &DAT_0061b4bc;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    uStack_14 = 0x02C83384;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*_DAT_02c83388)(pHVar1,&puStack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_selectCard_FUN_00582b10(_DAT_02c83374);
      return 1;
    }
    _DAT_02c83370 = (HMODULE)iVar3;
    return 0;
  }
  engine_special_cpp_FUN_00580740();
  _DAT_02c83370 = (HMODULE)0x0;
  return 0;
}
