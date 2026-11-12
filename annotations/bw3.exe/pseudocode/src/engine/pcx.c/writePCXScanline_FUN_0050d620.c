// Name: engine_pcx.c_writePCXScanline_FUN_0050d620
// Address: 0050d620
// Address Range: [[0050d620, 0050d6ef]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_writePCXScanline_FUN_0050d620(int row_index,_FILE *pcx_file)

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_0050d620(int row_index,_FILE *pcx_file)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint character;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(&DAT_01c5faec + row_index * 4);
  if (0 < DAT_005fba18) {
    do {
      if (0xbf < *pbVar1) {
        if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
          *pcx_file->_ptr = -0x3f;
          if (*pcx_file->_ptr != '\n') {
            iVar3 = pcx_file->_cnt;
            *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
            pcx_file->_cnt = iVar3 + 1;
            pcx_file->_ptr = pcx_file->_ptr + 1;
            goto LAB_0050d65e;
          }
          iVar3 = 10;
        }
        else {
          iVar3 = 0xc1;
        }
        _fputc(iVar3,pcx_file);
      }
LAB_0050d65e:
      if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
        *pcx_file->_ptr = *pbVar1;
        if (*pcx_file->_ptr == '\n') {
          character = 10;
          goto LAB_0050d66a;
        }
        iVar3 = pcx_file->_cnt;
        *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
        pcx_file->_cnt = iVar3 + 1;
        pcx_file->_ptr = pcx_file->_ptr + 1;
      }
      else {
        character = (uint)*pbVar1;
LAB_0050d66a:
        _fputc(character,pcx_file);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < DAT_005fba18);
  }
  return;
}
