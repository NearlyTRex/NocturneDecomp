// Name: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
// Address: 0042d3f0
// Address Range: [[0042d3f0, 0042d475]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(char *filename,uchar *output_palette)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(char *filename,uchar *output_palette)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *in_stack_00000010;
  uchar auStack_30c [8];
  byte abStack_304 [760];
  
  cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(filename,auStack_30c);
  pbVar4 = abStack_304;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 1;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    *in_stack_00000010 =
         (&DAT_01bf7720)
         [((int)(uint)*pbVar2 >> 3) +
          ((int)(uint)bVar3 >> 3) * 0x400 + ((int)(uint)*pbVar1 >> 3) * 0x20];
    in_stack_00000010 = in_stack_00000010 + 1;
  } while (pbVar4 != &stack0xfffffffc);
  return;
}
