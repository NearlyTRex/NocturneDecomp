// Name: engine_pcx.c_writePCXScanline_FUN_004f2550
// Address: 004f2550
// Address Range: [[004f2550, 004f261f]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_writePCXScanline_FUN_004f2550(int row_index,_FILE *pcx_file)

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_004f2550(int row_index,_FILE *pcx_file)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint character;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(&DAT_01bd2fa0 + row_index * 4);
  if (0 < g_WindowWidth) {
    do {
      if (0xbf < *pbVar1) {
        if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
          *pcx_file->_ptr = -0x3f;
          if (*pcx_file->_ptr != '\n') {
            iVar3 = pcx_file->_cnt;
            *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
            pcx_file->_cnt = iVar3 + 1;
            pcx_file->_ptr = pcx_file->_ptr + 1;
            goto LAB_004f258e;
          }
          iVar3 = 10;
        }
        else {
          iVar3 = 0xc1;
        }
        _fputc(iVar3,pcx_file);
      }
LAB_004f258e:
      if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
        *pcx_file->_ptr = *pbVar1;
        if (*pcx_file->_ptr == '\n') {
          character = 10;
          goto LAB_004f259a;
        }
        iVar3 = pcx_file->_cnt;
        *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
        pcx_file->_cnt = iVar3 + 1;
        pcx_file->_ptr = pcx_file->_ptr + 1;
      }
      else {
        character = (uint)*pbVar1;
LAB_004f259a:
        _fputc(character,pcx_file);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < g_WindowWidth);
  }
  return;
}
