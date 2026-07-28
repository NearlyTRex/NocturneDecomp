// Name: cockpit_ckptutil.c_applyActPalette_FUN_0042d370
// Address: 0042d370
// Address Range: [[0042d370, 0042d3e3]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_0042d370(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_0042d370(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  uint uVar1;
  byte bStack00000018;
  uchar auStack_104 [8];
  byte abStack_fc [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(filename,auStack_104);
  if ((-1 < _bStack00000018) && (_bStack00000018 < 0x100)) {
    abStack_fc[_bStack00000018] = bStack00000018;
  }
  uVar1 = 0;
  if (bitmap_size != 0) {
    do {
      uVar1 = uVar1 + 1;
      *(byte *)palette_index = abStack_fc[*(byte *)palette_index];
      palette_index = (int)(palette_index + 1);
    } while (uVar1 < (uint)bitmap_size);
  }
  return;
}
