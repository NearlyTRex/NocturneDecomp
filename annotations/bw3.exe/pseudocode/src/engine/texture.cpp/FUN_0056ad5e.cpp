// Name: engine_texture.cpp_FUN_0056ad5e
// Address: 0056ad5e
// Address Range: [[0056ad5e, 0056b30d]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056ad5e(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_0056ad5e(int param_1,char *param_2)

{
  byte uVar1;
  char cVar2;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  char *pcVar10;
  char acStack_364 [256];
  char acStack_264 [256];
  char acStack_164 [256];
  CInStreamFile CStack_64;
  void *pvStack_38;
  int iStack_34;
  void *pvStack_30;
  void *pvStack_2c;
  void *pvStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  int iStack_10;
  
  if (param_2 == (char *)0x0) {
    engine_texture_cpp_FUN_0056aa10(param_1);
    return;
  }
  if (_DAT_02cf5fd8 == (void *)0x0) {
    pvStack_18 = _DAT_02cf5fd8;
    pvStack_28 = _DAT_02cf5fd8;
    pvStack_14 = _DAT_02cf5fd8;
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5d61f7,param_2);
    if (iVar3 == 0x1000) {
      pvStack_14 = (void *)0x40;
    }
    else if (iVar3 == 0x4000) {
      pvStack_14 = (void *)0x80;
    }
    else if (iVar3 == 0x10000) {
      pvStack_14 = (void *)0x100;
    }
    else {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x572;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - %s is not a 64, 128, or 256 texture",param_2);
    }
    pvStack_2c = FUN_005a3650((int)pvStack_14 * (int)pvStack_14);
    if (pvStack_2c == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x577;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    pvStack_38 = FUN_005a3650(0x300);
    if (pvStack_38 == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x57b;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&CStack_64);
    iVar3 = support_trstream_cpp_FUN_00573fc0(&CStack_64,0x5d62c8,param_2,1);
    if (iVar3 == 0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x580;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - Can't open texture %s, but for some reason, I got it's length",param_1 + 8);
    }
    unkafter_turret_cpp_FUN_00573c00(&CStack_64,pvStack_2c,(int)pvStack_14 * (int)pvStack_14);
    unkafter_turret_cpp_FUN_00573db0(&CStack_64);
    engine_dosio_cpp_splitPath_FUN_00465e50(param_2,(char *)0x0,(char *)0x0,acStack_364,(char *)0x0)
    ;
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_264,(char *)0x0,(char *)0x0,acStack_364,(char *)0x5d6339);
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_164,(char *)0x0,(char *)0x0,acStack_364,(char *)0x5d633e);
    iVar3 = support_trstream_cpp_FUN_00573fc0(&CStack_64,0x5d6343,acStack_264,1);
    if (iVar3 == 0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x58d;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - Can't open %s",acStack_264);
    }
    unkafter_turret_cpp_FUN_00573c00(&CStack_64,pvStack_38,0x300);
    unkafter_turret_cpp_FUN_00573db0(&CStack_64);
    iVar3 = support_trstream_cpp_FUN_00573fc0(&CStack_64,0x5d6384,acStack_164,1);
    if (iVar3 != 0) {
      pvStack_18 = FUN_005a3650((int)pvStack_14 * (int)pvStack_14);
      if (pvStack_18 == (void *)0x0) {
        _DAT_01d71de0 = "..\\engine\\texture.cpp";
        _DAT_01d71de4 = 0x595;
        core_main_c_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
      }
      unkafter_turret_cpp_FUN_00573c00(&CStack_64,pvStack_18,(int)pvStack_14 * (int)pvStack_14);
      unkafter_turret_cpp_FUN_00573db0(&CStack_64);
    }
    pvStack_30 = FUN_005a3650((int)pvStack_14 * (int)pvStack_14 * 4);
    if (pvStack_30 == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\texture.cpp";
      _DAT_01d71de4 = 0x5d4;
      core_main_c_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    if (pvStack_18 != (void *)0x0) {
      pvStack_28 = FUN_005a3650((int)pvStack_14 * (int)pvStack_14 * 4);
      if (pvStack_28 == (void *)0x0) {
        _DAT_01d71de0 = "..\\engine\\texture.cpp";
        _DAT_01d71de4 = 0x5da;
        core_main_c_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
      }
    }
    iStack_20 = 0;
    if (0 < (int)pvStack_14) {
      iStack_24 = (int)pvStack_14 * 2;
      iStack_34 = (int)pvStack_14 * 4;
      iStack_1c = 0;
      do {
        puVar8 = (byte *)((int)pvStack_30 + iStack_1c);
        puVar5 = (byte *)((int)pvStack_28 + iStack_1c);
        puVar6 = (byte *)((int)pvStack_2c + iStack_20 * (int)pvStack_14);
        puVar4 = (byte *)(iStack_20 * (int)pvStack_14 + (int)pvStack_18);
        iStack_10 = 0;
        if (0 < (int)pvStack_14) {
          puVar7 = puVar5 + iStack_24;
          puVar9 = puVar8 + iStack_24;
          do {
            uVar1 = *puVar6;
            *puVar8 = uVar1;
            puVar8[1] = uVar1;
            *puVar9 = uVar1;
            puVar9[1] = uVar1;
            if (pvStack_18 != (void *)0x0) {
              uVar1 = *puVar4;
              *puVar5 = uVar1;
              puVar5[1] = uVar1;
              *puVar7 = uVar1;
              puVar7[1] = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            puVar7 = puVar7 + 2;
            iStack_10 = iStack_10 + 1;
            puVar5 = puVar5 + 2;
          } while (iStack_10 < (int)pvStack_14);
        }
        iStack_1c = iStack_1c + iStack_34;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < (int)pvStack_14);
    }
    FUN_005a3770(pvStack_2c);
    if (pvStack_18 != (void *)0x0) {
      FUN_005a3770(pvStack_18);
    }
    engine_texture_cpp_FUN_0056aab0(param_1,(int)pvStack_14 * 2,pvStack_30,pvStack_38,pvStack_28);
    unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&CStack_64,0);
    return;
  }
  pcVar10 = (char *)(param_1 + 8);
  do {
    cVar2 = *param_2;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = param_2[1];
    param_2 = param_2 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  engine_texture_cpp_FUN_0056aa10(param_1);
  return;
}
