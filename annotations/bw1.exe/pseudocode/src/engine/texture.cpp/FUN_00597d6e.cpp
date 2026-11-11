// Name: engine_texture.cpp_FUN_00597d6e
// Address: 00597d6e
// Address Range: [[00597d6e, 0059831d]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00597d6e(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00597d6e(int param_1,char *param_2)

{
  byte uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  char *pcVar10;
  char acStack_364 [256];
  char acStack_264 [256];
  char acStack_164 [256];
  CInStreamFile CStack_64;
  uint *puStack_38;
  int iStack_34;
  void *pvStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint *puStack_18;
  uint *puStack_14;
  int iStack_10;
  
  if (param_2 == (char *)0x0) {
    engine_texture_cpp_FUN_00597a20(param_1);
    return;
  }
  if (_DAT_02c8337c == (uint *)0x0) {
    puStack_18 = _DAT_02c8337c;
    puStack_28 = _DAT_02c8337c;
    puStack_14 = _DAT_02c8337c;
    iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0((char *)0x5f7c88,param_2);
    if (iVar3 == 0x1000) {
      puStack_14 = (uint *)0x40;
    }
    else if (iVar3 == 0x4000) {
      puStack_14 = (uint *)0x80;
    }
    else if (iVar3 == 0x10000) {
      puStack_14 = (uint *)0x100;
    }
    else {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x572;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - %s is not a 64, 128, or 256 texture",param_2);
    }
    puStack_2c = (uint *)malloc((int)puStack_14 * (int)puStack_14);
    if (puStack_2c == (uint *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x577;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - Out of memory");
    }
    puStack_38 = (uint *)malloc(0x300);
    if (puStack_38 == (uint *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x57b;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - Out of memory");
    }
    unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&CStack_64);
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                      (&CStack_64,0x5f7d59,param_2,1);
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x580;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - Can't open texture %s, but for some reason, I got it's length",param_1 + 8);
    }
    unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
              (&CStack_64,puStack_2c,(int)puStack_14 * (int)puStack_14);
    unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&CStack_64);
    engine_dosio_cpp_splitPath_FUN_00479580(param_2,(char *)0x0,(char *)0x0,acStack_364,(char *)0x0)
    ;
    engine_dosio_cpp_makePath_FUN_004795b0
              (acStack_264,(char *)0x0,(char *)0x0,acStack_364,(char *)0x5f7dca);
    engine_dosio_cpp_makePath_FUN_004795b0
              (acStack_164,(char *)0x0,(char *)0x0,acStack_364,(char *)0x5f7dcf);
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                      (&CStack_64,0x5f7dd4,acStack_264,1);
    if (iVar3 == 0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x58d;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - Can't open %s",acStack_264);
    }
    unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10(&CStack_64,puStack_38,0x300);
    unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&CStack_64);
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                      (&CStack_64,0x5f7e15,acStack_164,1);
    if (iVar3 != 0) {
      puStack_18 = (uint *)malloc((int)puStack_14 * (int)puStack_14);
      if (puStack_18 == (uint *)0x0) {
        _DAT_01d1d400 = "..\\engine\\texture.cpp";
        _DAT_01d1d404 = 0x595;
        core_main_c_FUN_005030e0("cacheTextureAtFullSize - Out of memory");
      }
      unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
                (&CStack_64,puStack_18,(int)puStack_14 * (int)puStack_14);
      unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&CStack_64);
    }
    pvStack_30 = malloc((int)puStack_14 * (int)puStack_14 * 4);
    if (pvStack_30 == (void *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x5d4;
      core_main_c_FUN_005030e0("cacheTextureAtFullSize - Out of memory");
    }
    if (puStack_18 != (uint *)0x0) {
      puStack_28 = (uint *)malloc((int)puStack_14 * (int)puStack_14 * 4);
      if (puStack_28 == (uint *)0x0) {
        _DAT_01d1d400 = "..\\engine\\texture.cpp";
        _DAT_01d1d404 = 0x5da;
        core_main_c_FUN_005030e0("cacheTextureAtFullSize - Out of memory");
      }
    }
    iStack_20 = 0;
    if (0 < (int)puStack_14) {
      iStack_24 = (int)puStack_14 * 2;
      iStack_34 = (int)puStack_14 * 4;
      iStack_1c = 0;
      do {
        puVar8 = (byte *)((int)pvStack_30 + iStack_1c);
        puVar5 = (byte *)((int)puStack_28 + iStack_1c);
        puVar6 = (uint *)((int)puStack_2c + iStack_20 * (int)puStack_14);
        puVar4 = (uint *)(iStack_20 * (int)puStack_14 + (int)puStack_18);
        iStack_10 = 0;
        if (0 < (int)puStack_14) {
          puVar7 = puVar5 + iStack_24;
          puVar9 = puVar8 + iStack_24;
          do {
            uVar1 = *(byte *)puVar6;
            *puVar8 = uVar1;
            puVar8[1] = uVar1;
            *puVar9 = uVar1;
            puVar9[1] = uVar1;
            if (puStack_18 != (uint *)0x0) {
              uVar1 = *(byte *)puVar4;
              *puVar5 = uVar1;
              puVar5[1] = uVar1;
              *puVar7 = uVar1;
              puVar7[1] = uVar1;
            }
            puVar6 = (uint *)((int)puVar6 + 1);
            puVar4 = (uint *)((int)puVar4 + 1);
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            puVar7 = puVar7 + 2;
            iStack_10 = iStack_10 + 1;
            puVar5 = puVar5 + 2;
          } while (iStack_10 < (int)puStack_14);
        }
        iStack_1c = iStack_1c + iStack_34;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < (int)puStack_14);
    }
    FUN_005c09f0(puStack_2c);
    if (puStack_18 != (uint *)0x0) {
      FUN_005c09f0(puStack_18);
    }
    engine_texture_cpp_FUN_00597ac0(param_1,(int)puStack_14 * 2,pvStack_30,puStack_38,puStack_28);
    unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_64,0);
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
  engine_texture_cpp_FUN_00597a20(param_1);
  return;
}
