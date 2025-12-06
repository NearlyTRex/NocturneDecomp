// Name: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
// Address: 00431a30
// Address Range: [[00431a30, 00431ab5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char *filename,char *output_palette)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  BADSPACEBASE *in_ESP;
  uchar *in_stack_0000000c;
  char local_30c [4];
  byte abStack_308 [764];
  
  cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(filename,local_30c);
  pbVar4 = abStack_308;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 1;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    *in_stack_0000000c =
         g_ColorCubeLookup
         [((int)(uint)*pbVar2 >> 3) +
          ((int)(uint)bVar3 >> 3) * 0x400 + ((int)(uint)*pbVar1 >> 3) * 0x20];
    in_stack_0000000c = in_stack_0000000c + 1;
  } while (pbVar4 != &stack0xfffffff8);
  return;
}
