// Name: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160
// Address: 00433160
// Address Range: [[00433160, 004331ef]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160(void * bitmap_data, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00433160(void *bitmap_data,int width,int height)

{
  byte uVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  byte *puVar5;
  uint uVar6;
  int in_stack_00000010;
  
  iVar2 = width * in_stack_00000010;
  uVar6 = 0;
  if (height / 2 != 0) {
    puVar4 = (byte *)(height * iVar2 + (int)bitmap_data);
    do {
      puVar4 = puVar4 + -iVar2;
      if (iVar2 != 0) {
        puVar3 = bitmap_data;
        puVar5 = puVar4;
        do {
          uVar1 = *puVar3;
          *puVar3 = *puVar5;
          puVar3 = puVar3 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar3 < (byte *)((int)bitmap_data + iVar2));
      }
      uVar6 = uVar6 + 1;
      bitmap_data = (void *)((int)bitmap_data + iVar2);
    } while (uVar6 < (uint)(height / 2));
  }
  return;
}
