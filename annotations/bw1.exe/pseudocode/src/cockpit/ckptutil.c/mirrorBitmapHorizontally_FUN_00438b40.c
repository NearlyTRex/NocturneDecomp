// Name: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00438b40
// Address: 00438b40
// Address Range: [[00438b40, 00438bcf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00438b40(uchar *bitmap_data,int width,int height,int bytes_per_pixel)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00438b40(uchar *bitmap_data,int width,int height,int bytes_per_pixel)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uint uVar6;
  
  iVar2 = width * bytes_per_pixel;
  uVar6 = 0;
  if (height / 2 != 0) {
    puVar4 = bitmap_data + height * iVar2;
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
        } while (puVar3 < bitmap_data + iVar2);
      }
      uVar6 = uVar6 + 1;
      bitmap_data = bitmap_data + iVar2;
    } while (uVar6 < (uint)(height / 2));
  }
  return;
}
