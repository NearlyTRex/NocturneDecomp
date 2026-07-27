// Name: engine_pcx.c_FUN_004f2990
// Address: 004f2990
// Address Range: [[004f2990, 004f2bcc]]
// Convention: unknown
// Signature: void engine_pcx_c_FUN_004f2990(undefined4 param_1)

#include "nocturne.h"

void engine_pcx_c_FUN_004f2990(uint param_1)

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
  
  if (DAT_005b7624 == 0x10) {
    engine_pcx_c_saveScreenRaw16_FUN_004f2620(param_1);
    return;
  }
  if (DAT_005b7624 == 0x20) {
    engine_pcx_c_saveScreenRaw32_FUN_004f27e0(param_1);
    return;
  }
  memset(&local_88,0,0x80);
  local_88 = 10;
  local_87 = 5;
  local_85 = 8;
  local_44 = 1;
  local_80 = (short)DAT_005b761c + -1;
  local_86 = 1;
  local_47 = 1;
  local_7e = (short)DAT_005b7620 + -1;
  local_84 = 0;
  local_46 = (short)DAT_005b761c;
  local_42 = (short)DAT_005b761c;
  local_82 = 0;
  local_40 = (short)DAT_005b7620;
  if ((DAT_005b761c == 0x280) && (DAT_005b7620 == 0xf0)) {
    local_40 = 0x1e0;
    local_7e = 0x1df;
  }
  piVar1 = (int *)_fopen(param_1,"wb");
  if (piVar1 == (int *)0x0) {
    PTR_01cc4800 = "..\\engine\\pcx.c";
    INT_01cc4804 = 0xee;
    core_main_c_FUN_004c8440("Cannot write .PCX");
  }
  iVar2 = 0;
  _fwrite(&local_88,1,0x80,piVar1);
  if (0 < DAT_005b7620) {
    do {
      engine_pcx_c_writePCXScanline_FUN_004f2550(iVar2,piVar1);
      if ((DAT_005b761c == 0x280) && (DAT_005b7620 == 0xf0)) {
        engine_pcx_c_writePCXScanline_FUN_004f2550(iVar2,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005b7620);
  }
  if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
    *(byte *)*piVar1 = 0xc;
    if (*(char *)*piVar1 != '\n') {
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
      goto LAB_004f2afe;
    }
    uVar4 = 10;
  }
  else {
    uVar4 = 0xc;
  }
  _fputc(uVar4,piVar1);
LAB_004f2afe:
  iVar2 = 0;
  do {
    if (((*(byte *)((int)piVar1 + 0xd) & 4) == 0) && (1 < (uint)(piVar1[5] - piVar1[1]))) {
      *(byte *)*piVar1 = (&DAT_01c00648)[iVar2];
      if (*(char *)*piVar1 == '\n') {
        uVar3 = 10;
        goto LAB_004f2b14;
      }
      piVar1[1] = piVar1[1] + 1;
      *piVar1 = *piVar1 + 1;
      *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) | 0x10;
    }
    else {
      uVar3 = (&DAT_01c00648)[iVar2];
LAB_004f2b14:
      _fputc(uVar3,piVar1);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      _fclose(piVar1);
      return;
    }
  } while( true );
}
