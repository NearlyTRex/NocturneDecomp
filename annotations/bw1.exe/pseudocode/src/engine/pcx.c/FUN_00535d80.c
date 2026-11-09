// Name: engine_pcx.c_FUN_00535d80
// Address: 00535d80
// Address Range: [[00535d80, 00535fbc]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_FUN_00535d80(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_FUN_00535d80(char *filename)

{
  int *piVar1;
  int iVar2;
  byte uVar3;
  uint uVar4;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  ushort local_84;
  ushort local_82;
  short local_80;
  short local_7e;
  byte local_47;
  short local_46;
  ushort local_44;
  short local_42;
  short local_40;
  
  if (DAT_0061b4a0 == 0x10) {
    engine_pcx_c_saveScreenRaw16_FUN_00535a10(filename);
    return;
  }
  if (DAT_0061b4a0 == 0x20) {
    engine_pcx_c_saveScreenRaw32_FUN_00535bd0(filename);
    return;
  }
  memset(&local_88,0,0x80);
  local_88 = 10;
  local_87 = 5;
  local_85 = 8;
  local_44 = 1;
  local_80 = (short)DAT_0061b498 + -1;
  local_86 = 1;
  local_47 = 1;
  local_7e = (short)DAT_0061b49c + -1;
  local_84 = 0;
  local_46 = (short)DAT_0061b498;
  local_42 = (short)DAT_0061b498;
  local_82 = 0;
  local_40 = (short)DAT_0061b49c;
  if ((DAT_0061b498 == 0x280) && (DAT_0061b49c == 0xf0)) {
    local_40 = 0x1e0;
    local_7e = 0x1df;
  }
  piVar1 = (int *)_fopen(filename,"wb");
  if (piVar1 == (int *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pcx.c";
    _DAT_01d1d404 = 0xed;
    core_main_c_FUN_005030e0("Cannot write .PCX");
  }
  iVar2 = 0;
  _fwrite(&local_88,1,0x80,piVar1);
  if (0 < DAT_0061b49c) {
    do {
      engine_pcx_c_writePCXScanline_FUN_00535940(iVar2,piVar1);
      if ((DAT_0061b498 == 0x280) && (DAT_0061b49c == 0xf0)) {
        engine_pcx_c_writePCXScanline_FUN_00535940(iVar2,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0061b49c);
  }
  if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
    *(byte *)*piVar1 = 0xc;
    if (*(char *)*piVar1 != '\n') {
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
      goto LAB_00535eee;
    }
    uVar4 = 10;
  }
  else {
    uVar4 = 0xc;
  }
  _fputc(uVar4,piVar1);
LAB_00535eee:
  iVar2 = 0;
  do {
    if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
      *(byte *)*piVar1 = (&DAT_01c4e9f8)[iVar2];
      if (*(char *)*piVar1 == '\n') {
        uVar3 = 10;
        goto LAB_00535f04;
      }
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
    }
    else {
      uVar3 = (&DAT_01c4e9f8)[iVar2];
LAB_00535f04:
      _fputc(uVar3,piVar1);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      _fclose(piVar1);
      return;
    }
  } while( true );
}
