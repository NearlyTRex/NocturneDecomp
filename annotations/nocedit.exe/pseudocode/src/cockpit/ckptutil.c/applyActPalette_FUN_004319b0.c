// Name: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
// Address: 004319b0
// Address Range: [[004319b0, 00431a23]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_applyActPalette_FUN_004319b0
          (char *filename,void *bitmap_buffer,int bitmap_size,int palette_index)

{
  byte *pbVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  byte bStack00000014;
  char acStack_104 [4];
  byte abStack_100 [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(filename,acStack_104);
  if ((-1 < _bStack00000014) && (_bStack00000014 < 0x100)) {
    abStack_100[_bStack00000014] = bStack00000014;
  }
  uVar2 = 0;
  pbVar1 = (byte *)bitmap_size;
  if (bitmap_size != 0) {
    do {
      uVar2 = uVar2 + 1;
      *pbVar1 = abStack_100[*pbVar1];
      pbVar1 = pbVar1 + 1;
    } while (uVar2 < (uint)bitmap_size);
  }
  return;
}
