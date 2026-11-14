// Name: engine_pcx.c_saveScreenshotGeneral_FUN_0050da60
// Address: 0050da60
// Address Range: [[0050da60, 0050dc9c]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_0050da60(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_0050da60(char *filename)

{
  byte bVar1;
  _FILE *file;
  int iVar2;
  uint character;
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
  
  if (DAT_005fba20 == 0x10) {
    engine_pcx_c_saveScreenRaw16_FUN_0050d6f0(filename);
    return;
  }
  if (DAT_005fba20 == 0x20) {
    engine_pcx_c_saveScreenRaw32_FUN_0050d8b0(filename);
    return;
  }
  memset(&local_88,0,0x80);
  local_88 = 10;
  local_87 = 5;
  local_85 = 8;
  local_44 = 1;
  local_80 = (short)DAT_005fba18 + -1;
  local_86 = 1;
  local_47 = 1;
  local_7e = (short)DAT_005fba1c + -1;
  local_84 = 0;
  local_46 = (short)DAT_005fba18;
  local_42 = (short)DAT_005fba18;
  local_82 = 0;
  local_40 = (short)DAT_005fba1c;
  if ((DAT_005fba18 == 0x280) && (DAT_005fba1c == 0xf0)) {
    local_40 = 0x1e0;
    local_7e = 0x1df;
  }
  file = _fopen(filename,&DAT_005cba90);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pcx.c";
    _DAT_01d71de4 = 0xed;
    core_main_c_FUN_004e4330("Cannot write .PCX");
  }
  iVar2 = 0;
  _fwrite(&local_88,1,0x80,file);
  if (0 < DAT_005fba1c) {
    do {
      engine_pcx_c_writePCXScanline_FUN_0050d620(iVar2,file);
      if ((DAT_005fba18 == 0x280) && (DAT_005fba1c == 0xf0)) {
        engine_pcx_c_writePCXScanline_FUN_0050d620(iVar2,file);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005fba1c);
  }
  if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
    *file->_ptr = '\f';
    if (*file->_ptr != '\n') {
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
      goto LAB_0050dbce;
    }
    iVar2 = 10;
  }
  else {
    iVar2 = 0xc;
  }
  _fputc(iVar2,file);
LAB_0050dbce:
  iVar2 = 0;
  do {
    if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
      *file->_ptr = (&DAT_01c6af98)[iVar2];
      if (*file->_ptr == '\n') {
        character = 10;
        goto LAB_0050dbe4;
      }
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
    }
    else {
      character = (uint)(byte)(&DAT_01c6af98)[iVar2];
LAB_0050dbe4:
      _fputc(character,file);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      _fclose(file);
      return;
    }
  } while( true );
}
