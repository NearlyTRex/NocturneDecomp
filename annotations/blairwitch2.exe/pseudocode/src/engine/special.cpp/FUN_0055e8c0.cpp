// Name: engine_special.cpp_FUN_0055e8c0
// Address: 0055e8c0
// Address Range: [[0055e8c0, 0055f4c9]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_0055e8c0(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_0055e8c0(HWND window_handle)

{
  HWND pHVar1;
  FARPROC pFVar2;
  int iVar3;
  CExternalRenderer aCStack_3c30 [7624];
  CExternalRenderer aCStack_1e68 [7624];
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
    pHVar1 = _DAT_0264bcf0;
  }
  _DAT_0264bcf0 = pHVar1;
  pHVar1 = _DAT_0264bcf0;
  if (_DAT_0264bba0 == (HMODULE)0x0) {
    return 0;
  }
  _DAT_0264bce0 = wincore_wddvmem_cpp_FUN_00589970(&DAT_0061e180);
  if (_DAT_0264bce0 == (HMODULE)0x0) {
    _DAT_0264bba0 = _DAT_0264bce0;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                     (_DAT_0264bce0,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_FUN_0055dcf0();
    _DAT_0264bba0 = (HMODULE)0x0;
    return 0;
  }
  (*pFVar2)(_DAT_0264bce0,aCStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_005602c0(aCStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00560310(aCStack_3c30,aCStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_FUN_0055dcf0();
    _DAT_0264bba0 = (HMODULE)0x0;
    return 0;
  }
  _DAT_0264bcf8 = 0;
  _DAT_0264bbb8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLinit");
  if (_DAT_0264bbb8 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbbc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLkill");
  if (_DAT_0264bbbc == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLtoggle");
  if (_DAT_0264bbc0 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbc4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetVideoMode");
  if (_DAT_0264bbc4 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbc8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetVideoMode2")
  ;
  if (_DAT_0264bbc8 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbcc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLrestoreVideoMode");
  if (_DAT_0264bbcc == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbd0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLbeginScene");
  if (_DAT_0264bbd0 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbd4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLendScene");
  if (_DAT_0264bbd4 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbd8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLlockFrame");
  if (_DAT_0264bbd8 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbdc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLunlockFrame");
  if (_DAT_0264bbdc == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbe0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLselectTexture")
  ;
  if (_DAT_0264bbe0 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbe4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLupdateTexture")
  ;
  if (_DAT_0264bbe4 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbe8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLselectTextureBGRA");
  _DAT_0264bbec =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLupdateTextureBGRA");
  _DAT_0264bbf0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetMipMapLevel");
  if (_DAT_0264bbf0 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbf4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdrawPolygon");
  if (_DAT_0264bbf4 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbf8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdrawPolygon2");
  if (_DAT_0264bbf8 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bbfc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdrawPolyList");
  _DAT_0264bc00 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdrawPolyList2")
  ;
  _DAT_0264bc04 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdrawPolyList3")
  ;
  _DAT_0264bc08 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLaddParticle");
  if (_DAT_0264bc08 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc0c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLflushParticleList");
  if (_DAT_0264bc0c == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc10 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLadd3dLine");
  if (_DAT_0264bc10 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc14 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLflushLineList")
  ;
  if (_DAT_0264bc14 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc18 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLclear");
  if (_DAT_0264bc18 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc1c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetFogColor");
  if (_DAT_0264bc1c == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc20 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsync");
  if (_DAT_0264bc20 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc24 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLclearZBuffer");
  if (_DAT_0264bc24 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc28 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLclearZBox");
  if (_DAT_0264bc28 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc2c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetColorTable16");
  if (_DAT_0264bc2c == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc30 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLGetDisplayContext");
  if (_DAT_0264bc30 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc34 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLReleaseDisplayContext");
  if (_DAT_0264bc34 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc38 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLmasterZBuffer")
  ;
  if (_DAT_0264bc38 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc3c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLrestoreZBuffer");
  if (_DAT_0264bc3c == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc40 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLgetVideoMemory");
  if (_DAT_0264bc40 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc44 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLselectCard");
  if (_DAT_0264bc44 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc48 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLbuildCardList")
  ;
  if (_DAT_0264bc48 == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc4c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLlockHoldBuffer");
  _DAT_0264bc50 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLunlockHoldBuffer");
  _DAT_0264bc54 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLlockTexture");
  _DAT_0264bc58 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLunlockTexture")
  ;
  _DAT_0264bc5c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLgetTextureInfo");
  if (_DAT_0264bc5c == (FARPROC)0x0) {
    _DAT_0264bcf8 = 1;
  }
  _DAT_0264bc60 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetVideoModeX")
  ;
  _DAT_0264bc64 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLrestoreVideoModeX");
  _DAT_0264bc68 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLlockFrameX");
  _DAT_0264bc6c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLunlockFrameX");
  _DAT_0264bc70 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLtoggleX");
  _DAT_0264bc74 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetViewport");
  _DAT_0264bc78 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetLightConstants");
  _DAT_0264bc7c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetLightVector");
  _DAT_0264bc80 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetAmbientLight");
  _DAT_0264bc84 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetTransform");
  _DAT_0264bc88 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyList");
  _DAT_0264bc8c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyList2");
  _DAT_0264bc90 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyListL");
  _DAT_0264bc94 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyListD3DL");
  _DAT_0264bc98 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyListD3DL2")
  ;
  _DAT_0264bc9c =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyListD3DTL")
  ;
  _DAT_0264bca0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLpolyListTL");
  _DAT_0264bca4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdotListD3DL");
  _DAT_0264bca8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLdotListD3DTL");
  _DAT_0264bcac =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLlineListD3DL");
  _DAT_0264bcb0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLlineListD3DTL")
  ;
  _DAT_0264bcb4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLgetTextureHandle");
  _DAT_0264bcb8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLselectTextureByHandle");
  _DAT_0264bcbc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLresetTextureCache");
  _DAT_0264bcc0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLenableCulling")
  ;
  _DAT_0264bcc4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLenableClipping");
  _DAT_0264bcc8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLsetTextureClamp");
  _DAT_0264bccc =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980(_DAT_0264bce0,"APIDLLsetFog");
  _DAT_0264bcd0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLresetDynamicLight");
  _DAT_0264bcd4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLaddDynamicLight");
  _DAT_0264bcd8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_00589980
                 (_DAT_0264bce0,"APIDLLdynamicLightHint");
  if (_DAT_0264bcf8 == 0) {
    _DAT_0264bcdc = 1;
    memset(&puStack_a0,0,0x90);
    puStack_a0 = &DAT_01c35814;
    puStack_9c = &DAT_01c35818;
    puStack_98 = &DAT_01c3581c;
    puStack_94 = &DAT_01c35820;
    puStack_90 = &DAT_01c35824;
    puStack_8c = &DAT_01c35828;
    puStack_88 = &DAT_01c3582c;
    puStack_84 = &DAT_01c35830;
    puStack_80 = &DAT_01c35834;
    puStack_7c = &DAT_01c38b4c;
    puStack_78 = &DAT_01c35e64;
    puStack_74 = &DAT_006141d8;
    puStack_70 = &DAT_01c35e60;
    puStack_6c = &DAT_01c35e48;
    puStack_68 = &DAT_01c35e4c;
    puStack_64 = &DAT_01c35e50;
    puStack_60 = &DAT_01c35e54;
    puStack_5c = &DAT_006141c4;
    puStack_58 = &DAT_006141c8;
    puStack_54 = &DAT_01c37780;
    puStack_50 = &DAT_0061e28c;
    puStack_4c = &DAT_0061e284;
    puStack_48 = &DAT_0061e288;
    uStack_44 = 0x264bba8;
    puStack_40 = &DAT_0061e280;
    puStack_3c = &DAT_0264bbac;
    puStack_38 = &DAT_01c38b50;
    puStack_34 = &DAT_006141dc;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    uStack_14 = 0x0264BBB4;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*_DAT_0264bbb8)(pHVar1,&puStack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_FUN_005600c0(_DAT_0264bba4);
      return 1;
    }
    _DAT_0264bba0 = (HMODULE)iVar3;
    return 0;
  }
  engine_special_cpp_FUN_0055dcf0();
  _DAT_0264bba0 = (HMODULE)0x0;
  return 0;
}
