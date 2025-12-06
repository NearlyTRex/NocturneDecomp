// Name: engine_pcx.c_writePCXScanline_FUN_00548c50
// Address: 00548c50
// Address Range: [[00548c50, 00548d1f]]
// Convention: __cdecl
// Signature: void engine_pcx.c_writePCXScanline_FUN_00548c50(int row_index, FILE * pcx_file)

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_00548c50(int row_index,FILE *pcx_file)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint character;
  
  iVar2 = 0;
  pbVar1 = (byte *)g_ScreenBufferArray[row_index];
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
            goto LAB_00548c8e;
          }
          iVar3 = 10;
        }
        else {
          iVar3 = 0xc1;
        }
        crt_stdio_c_fputc_FUN_006007a0(iVar3,pcx_file);
      }
LAB_00548c8e:
      if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
        *pcx_file->_ptr = *pbVar1;
        if (*pcx_file->_ptr == '\n') {
          character = 10;
          goto LAB_00548c9a;
        }
        iVar3 = pcx_file->_cnt;
        *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
        pcx_file->_cnt = iVar3 + 1;
        pcx_file->_ptr = pcx_file->_ptr + 1;
      }
      else {
        character = (uint)*pbVar1;
LAB_00548c9a:
        crt_stdio_c_fputc_FUN_006007a0(character,pcx_file);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < g_WindowWidth);
  }
  return;
}
