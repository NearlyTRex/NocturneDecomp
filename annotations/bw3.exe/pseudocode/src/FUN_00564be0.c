// Name: FUN_00564be0
// Address: 00564be0
// Address Range: [[00564be0, 005657e9]]
// Convention: unknown
// Signature: undefined4 FUN_00564be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00564be0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  byte auStack_3c30 [7624];
  byte auStack_1e68 [7624];
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
  
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar3 = _DAT_02cf611c;
  }
  _DAT_02cf611c = iVar3;
  iVar3 = _DAT_02cf611c;
  if (_DAT_02cf5fcc == 0) {
    return 0;
  }
  _DAT_02cf610c = FUN_0057ad10(&DAT_00606730);
  if (_DAT_02cf610c == 0) {
    _DAT_02cf5fcc = _DAT_02cf610c;
    return 0;
  }
  pcVar1 = (code *)FUN_0057ad20(_DAT_02cf610c,"APIDLLInformation");
  if (pcVar1 == (code *)0x0) {
    FUN_00564010();
    _DAT_02cf5fcc = 0;
    return 0;
  }
  (*pcVar1)(_DAT_02cf610c,auStack_3c30);
  FUN_005665e0(auStack_1e68);
  iVar2 = FUN_00566630(auStack_3c30,auStack_1e68);
  if (iVar2 == 0) {
    FUN_00564010();
    _DAT_02cf5fcc = 0;
    return 0;
  }
  _DAT_02cf6124 = 0;
  _DAT_02cf5fe4 = (code *)FUN_0057ad20(_DAT_02cf610c,"APIDLLinit");
  if (_DAT_02cf5fe4 == (code *)0x0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5fe8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLkill");
  if (_DAT_02cf5fe8 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5fec = FUN_0057ad20(_DAT_02cf610c,"APIDLLtoggle");
  if (_DAT_02cf5fec == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoMode");
  if (_DAT_02cf5ff0 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoMode2");
  if (_DAT_02cf5ff4 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ff8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLrestoreVideoMode");
  if (_DAT_02cf5ff8 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf5ffc = FUN_0057ad20(_DAT_02cf610c,"APIDLLbeginScene");
  if (_DAT_02cf5ffc == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6000 = FUN_0057ad20(_DAT_02cf610c,"APIDLLendScene");
  if (_DAT_02cf6000 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6004 = FUN_0057ad20(_DAT_02cf610c,"APIDLLlockFrame");
  if (_DAT_02cf6004 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6008 = FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockFrame");
  if (_DAT_02cf6008 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf600c = FUN_0057ad20(_DAT_02cf610c,"APIDLLselectTexture");
  if (_DAT_02cf600c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6010 = FUN_0057ad20(_DAT_02cf610c,"APIDLLupdateTexture");
  if (_DAT_02cf6010 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6014 = FUN_0057ad20(_DAT_02cf610c,"APIDLLselectTextureBGRA");
  _DAT_02cf6018 = FUN_0057ad20(_DAT_02cf610c,"APIDLLupdateTextureBGRA");
  _DAT_02cf601c = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetMipMapLevel");
  if (_DAT_02cf601c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6020 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolygon");
  if (_DAT_02cf6020 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6024 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolygon2");
  if (_DAT_02cf6024 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6028 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList");
  _DAT_02cf602c = FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList2");
  _DAT_02cf6030 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdrawPolyList3");
  _DAT_02cf6034 = FUN_0057ad20(_DAT_02cf610c,"APIDLLaddParticle");
  if (_DAT_02cf6034 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6038 = FUN_0057ad20(_DAT_02cf610c,"APIDLLflushParticleList");
  if (_DAT_02cf6038 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf603c = FUN_0057ad20(_DAT_02cf610c,"APIDLLadd3dLine");
  if (_DAT_02cf603c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6040 = FUN_0057ad20(_DAT_02cf610c,"APIDLLflushLineList");
  if (_DAT_02cf6040 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6044 = FUN_0057ad20(_DAT_02cf610c,"APIDLLclear");
  if (_DAT_02cf6044 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6048 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetFogColor");
  if (_DAT_02cf6048 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf604c = FUN_0057ad20(_DAT_02cf610c,"APIDLLsync");
  if (_DAT_02cf604c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6050 = FUN_0057ad20(_DAT_02cf610c,"APIDLLclearZBuffer");
  if (_DAT_02cf6050 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6054 = FUN_0057ad20(_DAT_02cf610c,"APIDLLclearZBox");
  if (_DAT_02cf6054 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6058 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetColorTable16");
  if (_DAT_02cf6058 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf605c = FUN_0057ad20(_DAT_02cf610c,"APIDLLGetDisplayContext");
  if (_DAT_02cf605c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6060 = FUN_0057ad20(_DAT_02cf610c,"APIDLLReleaseDisplayContext");
  if (_DAT_02cf6060 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6064 = FUN_0057ad20(_DAT_02cf610c,"APIDLLmasterZBuffer");
  if (_DAT_02cf6064 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6068 = FUN_0057ad20(_DAT_02cf610c,"APIDLLrestoreZBuffer");
  if (_DAT_02cf6068 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf606c = FUN_0057ad20(_DAT_02cf610c,"APIDLLgetVideoMemory");
  if (_DAT_02cf606c == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6070 = FUN_0057ad20(_DAT_02cf610c,"APIDLLselectCard");
  if (_DAT_02cf6070 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6074 = FUN_0057ad20(_DAT_02cf610c,"APIDLLbuildCardList");
  if (_DAT_02cf6074 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf6078 = FUN_0057ad20(_DAT_02cf610c,"APIDLLlockHoldBuffer");
  _DAT_02cf607c = FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockHoldBuffer");
  _DAT_02cf6080 = FUN_0057ad20(_DAT_02cf610c,"APIDLLlockTexture");
  _DAT_02cf6084 = FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockTexture");
  _DAT_02cf6088 = FUN_0057ad20(_DAT_02cf610c,"APIDLLgetTextureInfo");
  if (_DAT_02cf6088 == 0) {
    _DAT_02cf6124 = 1;
  }
  _DAT_02cf608c = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetVideoModeX");
  _DAT_02cf6090 = FUN_0057ad20(_DAT_02cf610c,"APIDLLrestoreVideoModeX");
  _DAT_02cf6094 = FUN_0057ad20(_DAT_02cf610c,"APIDLLlockFrameX");
  _DAT_02cf6098 = FUN_0057ad20(_DAT_02cf610c,"APIDLLunlockFrameX");
  _DAT_02cf609c = FUN_0057ad20(_DAT_02cf610c,"APIDLLtoggleX");
  _DAT_02cf60a0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetViewport");
  _DAT_02cf60a4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetLightConstants");
  _DAT_02cf60a8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetLightVector");
  _DAT_02cf60ac = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetAmbientLight");
  _DAT_02cf60b0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetTransform");
  _DAT_02cf60b4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyList");
  _DAT_02cf60b8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyList2");
  _DAT_02cf60bc = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListL");
  _DAT_02cf60c0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DL");
  _DAT_02cf60c4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DL2");
  _DAT_02cf60c8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListD3DTL");
  _DAT_02cf60cc = FUN_0057ad20(_DAT_02cf610c,"APIDLLpolyListTL");
  _DAT_02cf60d0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdotListD3DL");
  _DAT_02cf60d4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdotListD3DTL");
  _DAT_02cf60d8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLlineListD3DL");
  _DAT_02cf60dc = FUN_0057ad20(_DAT_02cf610c,"APIDLLlineListD3DTL");
  _DAT_02cf60e0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLgetTextureHandle");
  _DAT_02cf60e4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLselectTextureByHandle");
  _DAT_02cf60e8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLresetTextureCache");
  _DAT_02cf60ec = FUN_0057ad20(_DAT_02cf610c,"APIDLLenableCulling");
  _DAT_02cf60f0 = FUN_0057ad20(_DAT_02cf610c,"APIDLLenableClipping");
  _DAT_02cf60f4 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetTextureClamp");
  _DAT_02cf60f8 = FUN_0057ad20(_DAT_02cf610c,"APIDLLsetFog");
  _DAT_02cf60fc = FUN_0057ad20(_DAT_02cf610c,"APIDLLresetDynamicLight");
  _DAT_02cf6100 = FUN_0057ad20(_DAT_02cf610c,"APIDLLaddDynamicLight");
  _DAT_02cf6104 = FUN_0057ad20(_DAT_02cf610c,"APIDLLdynamicLightHint");
  if (_DAT_02cf6124 == 0) {
    _DAT_02cf6108 = 1;
    FUN_005a28f0(&puStack_a0,0,0x90);
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
    iVar3 = (*_DAT_02cf5fe4)(iVar3,&puStack_a0);
    if (iVar3 != 0) {
      FUN_005663e0(_DAT_02cf5fd0);
      return 1;
    }
    _DAT_02cf5fcc = iVar3;
    return 0;
  }
  FUN_00564010();
  _DAT_02cf5fcc = 0;
  return 0;
}
