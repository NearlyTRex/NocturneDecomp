// Name: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
// Address: 004319b0
// MANUAL RECONSTRUCTION
// Address Range: [[004319b0, 00431a23]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_004319b0(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_applyActPalette_FUN_004319b0(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  uint uVar1;
  byte *pbVar1;
  byte abStack_104 [256];

  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(filename,abStack_104);
  if ((-1 < palette_index) && (palette_index < 0x100)) {
    abStack_104[palette_index] = (byte)palette_index;
  }
  uVar1 = 0;
  pbVar1 = (byte *)bitmap_buffer;
  if (bitmap_size != 0) {
    do {
      uVar1 = uVar1 + 1;
      *pbVar1 = abStack_104[*pbVar1];
      pbVar1 = pbVar1 + 1;
    } while (uVar1 < (uint)bitmap_size);
  }
  return;
}
