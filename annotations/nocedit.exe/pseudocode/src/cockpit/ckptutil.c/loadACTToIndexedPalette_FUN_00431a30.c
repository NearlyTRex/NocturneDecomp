// Name: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
// Address: 00431a30
// Address Range: [[00431a30, 00431ab5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char *filename,char *output_palette)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char *filename,char *output_palette)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte local_30c [768];
  
  cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(filename,(char *)local_30c);
  pbVar4 = local_30c;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 1;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    *output_palette =
         g_ColorCubeLookup
         [((int)(uint)*pbVar2 >> 3) +
          ((int)(uint)bVar3 >> 3) * 0x400 + ((int)(uint)*pbVar1 >> 3) * 0x20];
    output_palette = (char *)((uchar *)output_palette + 1);
  } while (pbVar4 != &stack0xfffffff4);
  return;
}
