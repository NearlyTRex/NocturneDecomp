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
    pHVar1 = _DAT_02cf611c;
  }
  _DAT_02cf611c = pHVar1;
  pHVar1 = _DAT_02cf611c;
  if (_DAT_02cf5fcc == (HMODULE)0x0) {
    return 0;
  }
  _DAT_02cf610c = wincore_wddvmem_cpp_loadLibrary_FUN_0057ad10(&DAT_00606730);
  if (_DAT_02cf610c == (HMODULE)0x0) {
    _DAT_02cf5fcc = _DAT_02cf610c;
    return 0;
  }
  pFVar2 = wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                     (_DAT_02cf610c,"APIDLLInformation");
  if (pFVar2 == (FARPROC)0x0) {
    engine_special_cpp_FUN_00564010();
    _DAT_02cf5fcc = (HMODULE)0x0;
    return 0;
  }
  (*pFVar2)(_DAT_02cf610c,&CStack_3c30);
  engine_special_cpp_CExternalRenderer_ctor_FUN_005665e0(&CStack_1e68);
  iVar3 = engine_special_cpp_CExternalRenderer_validate_FUN_00566630(&CStack_3c30,&CStack_1e68);
  if (iVar3 == 0) {
    engine_special_cpp_FUN_00564010();
    _DAT_02cf5fcc = (HMODULE)0x0;
    return 0;
  }
  _DAT_02cf6124 = 0;
  _DAT_02cf5fe4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLinit");
  if (_DAT_02cf5fe4 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5fe8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLkill");
  if (_DAT_02cf5fe8 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5fec =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLtoggle");
  if (_DAT_02cf5fec == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoMode");
  if (_DAT_02cf5ff0 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoMode2")
  ;
  if (_DAT_02cf5ff4 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLrestoreVideoMode");
  if (_DAT_02cf5ff8 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ffc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLbeginScene");
  if (_DAT_02cf5ffc == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6000 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLendScene");
  if (_DAT_02cf6000 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6004 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLlockFrame");
  if (_DAT_02cf6004 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6008 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockFrame");
  if (_DAT_02cf6008 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf600c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLselectTexture")
  ;
  if (_DAT_02cf600c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6010 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLupdateTexture")
  ;
  if (_DAT_02cf6010 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6014 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLselectTextureBGRA");
  _DAT_02cf6018 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLupdateTextureBGRA");
  _DAT_02cf601c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetMipMapLevel");
  if (_DAT_02cf601c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6020 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolygon");
  if (_DAT_02cf6020 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6024 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolygon2");
  if (_DAT_02cf6024 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6028 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList");
  _DAT_02cf602c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList2")
  ;
  _DAT_02cf6030 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList3")
  ;
  _DAT_02cf6034 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLaddParticle");
  if (_DAT_02cf6034 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6038 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLflushParticleList");
  if (_DAT_02cf6038 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf603c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLadd3dLine");
  if (_DAT_02cf603c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6040 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLflushLineList")
  ;
  if (_DAT_02cf6040 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6044 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLclear");
  if (_DAT_02cf6044 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6048 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetFogColor");
  if (_DAT_02cf6048 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf604c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsync");
  if (_DAT_02cf604c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6050 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLclearZBuffer");
  if (_DAT_02cf6050 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6054 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLclearZBox");
  if (_DAT_02cf6054 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6058 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetColorTable16");
  if (_DAT_02cf6058 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf605c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLGetDisplayContext");
  if (_DAT_02cf605c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6060 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLReleaseDisplayContext");
  if (_DAT_02cf6060 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6064 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLmasterZBuffer")
  ;
  if (_DAT_02cf6064 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6068 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLrestoreZBuffer");
  if (_DAT_02cf6068 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf606c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLgetVideoMemory");
  if (_DAT_02cf606c == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6070 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLselectCard");
  if (_DAT_02cf6070 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6074 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLbuildCardList")
  ;
  if (_DAT_02cf6074 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6078 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLlockHoldBuffer");
  _DAT_02cf607c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLunlockHoldBuffer");
  _DAT_02cf6080 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLlockTexture");
  _DAT_02cf6084 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockTexture")
  ;
  _DAT_02cf6088 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLgetTextureInfo");
  if (_DAT_02cf6088 == (FARPROC)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf608c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoModeX")
  ;
  _DAT_02cf6090 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLrestoreVideoModeX");
  _DAT_02cf6094 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLlockFrameX");
  _DAT_02cf6098 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockFrameX");
  _DAT_02cf609c =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLtoggleX");
  _DAT_02cf60a0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetViewport");
  _DAT_02cf60a4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetLightConstants");
  _DAT_02cf60a8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetLightVector");
  _DAT_02cf60ac =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetAmbientLight");
  _DAT_02cf60b0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetTransform");
  _DAT_02cf60b4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyList");
  _DAT_02cf60b8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyList2");
  _DAT_02cf60bc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListL");
  _DAT_02cf60c0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DL");
  _DAT_02cf60c4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DL2")
  ;
  _DAT_02cf60c8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DTL")
  ;
  _DAT_02cf60cc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListTL");
  _DAT_02cf60d0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdotListD3DL");
  _DAT_02cf60d4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLdotListD3DTL");
  _DAT_02cf60d8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLlineListD3DL");
  _DAT_02cf60dc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLlineListD3DTL")
  ;
  _DAT_02cf60e0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLgetTextureHandle");
  _DAT_02cf60e4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLselectTextureByHandle");
  _DAT_02cf60e8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLresetTextureCache");
  _DAT_02cf60ec =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLenableCulling")
  ;
  _DAT_02cf60f0 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLenableClipping");
  _DAT_02cf60f4 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLsetTextureClamp");
  _DAT_02cf60f8 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(_DAT_02cf610c,"APIDLLsetFog");
  _DAT_02cf60fc =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLresetDynamicLight");
  _DAT_02cf6100 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLaddDynamicLight");
  _DAT_02cf6104 =
       wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20
                 (_DAT_02cf610c,"APIDLLdynamicLightHint");
  if (_DAT_02cf6124 == 0) {
    _DAT_02cf6108 = 1;
    memset(&puStack_a0,0,0x90);
    puStack_a0 = &DAT_01c6af74;
    puStack_9c = &DAT_01c6af78;
    puStack_98 = &DAT_01c6af7c;
    puStack_94 = &DAT_01c6af80;
    puStack_90 = &DAT_01c6af84;
    puStack_8c = &DAT_01c6af88;
    puStack_88 = &DAT_01c6af8c;
    puStack_84 = &DAT_01c6af90;
    puStack_80 = &DAT_01c6af94;
    puStack_7c = &DAT_01c6e2ac;
    puStack_78 = &DAT_01c6b5c4;
    puStack_74 = &DAT_005fba38;
    puStack_70 = &DAT_01c6b5c0;
    puStack_6c = &DAT_01c6b5a8;
    puStack_68 = &DAT_01c6b5ac;
    puStack_64 = &DAT_01c6b5b0;
    puStack_60 = &DAT_01c6b5b4;
    puStack_5c = &DAT_005fba24;
    puStack_58 = &DAT_005fba28;
    puStack_54 = &DAT_01c6cee0;
    puStack_50 = &DAT_0060683c;
    puStack_4c = &DAT_00606834;
    puStack_48 = &DAT_00606838;
    uStack_44 = 0x2cf5fd4;
    puStack_40 = &DAT_00606830;
    puStack_3c = &DAT_02cf5fd8;
    puStack_38 = &DAT_01c6e2b0;
    puStack_34 = &DAT_005fba3c;
    uStack_30 = 0x30;
    uStack_2c = 0x2c;
    uStack_18 = 0x2c;
    uStack_1c = 0x24;
    uStack_14 = 0x02CF5FE0;
    uStack_28 = 0xc;
    uStack_24 = 0x20;
    uStack_20 = 0x28;
    iVar3 = (*_DAT_02cf5fe4)(pHVar1,&puStack_a0);
    if (iVar3 != 0) {
      engine_special_cpp_selectCard_FUN_005663e0(_DAT_02cf5fd0);
      return 1;
    }
    _DAT_02cf5fcc = (HMODULE)iVar3;
    return 0;
  }
  engine_special_cpp_FUN_00564010();
  _DAT_02cf5fcc = (HMODULE)0x0;
  return 0;
}
