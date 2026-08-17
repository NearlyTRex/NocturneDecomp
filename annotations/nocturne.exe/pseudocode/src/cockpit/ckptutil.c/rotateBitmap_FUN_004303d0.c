// Name: cockpit_ckptutil.c_rotateBitmap_FUN_004303d0
// Address: 004303d0
// Address Range: [[004303d0, 0043058d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rotateBitmap_FUN_004303d0(uchar *source_data,int width,int height,int bytes_per_pixel)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_rotateBitmap_FUN_004303d0(uchar *source_data,int width,int height,int bytes_per_pixel)

{
  uint uVar1;
  uchar *puVar2;
  ulong size;
  uchar *puVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  uchar *puVar7;
  byte bVar8;
  char acStack_78 [80];
  uint uStack_28;
  uchar *puStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  uStack_18 = width * bytes_per_pixel;
  size = width * height * bytes_per_pixel;
  puStack_24 = (uchar *)malloc(size);
  if (puStack_24 == (uchar *)0x0) {
    _sprintf(acStack_78,"Unable to allocate %u bytes for temporary rotated bitmap.",size);
    g_CurrentLineNumber = 2050;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_004c8440(acStack_78);
  }
  if (bytes_per_pixel == 1) {
    uVar4 = 0;
    if (height != 0) {
      uStack_28 = uStack_18;
      iVar6 = 0;
      do {
        puVar2 = source_data + iVar6;
        puVar3 = puStack_24 + (height - uVar4) + -1;
        uVar1 = 0;
        if (uStack_18 != 0) {
          do {
            *puVar3 = *puVar2;
            uVar1 = uVar1 + 1;
            puVar3 = puVar3 + height;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uStack_18);
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + uStack_18;
      } while (uVar4 < (uint)height);
    }
  }
  else {
    uStack_20 = 0;
    if (height != 0) {
      iStack_1c = height * bytes_per_pixel;
      do {
        puVar3 = puStack_24 + ((height - uStack_20) + -1) * bytes_per_pixel;
        puVar2 = source_data + uStack_20 * uStack_18;
        uStack_14 = 0;
        if (uStack_18 != 0) {
          do {
            puVar5 = puVar2;
            puVar7 = puVar3;
            for (uVar4 = (uint)bytes_per_pixel >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(uint *)puVar7 = *(uint *)puVar5;
              puVar5 = puVar5 + (uint)bVar8 * -8 + 4;
              puVar7 = puVar7 + (uint)bVar8 * -8 + 4;
            }
            for (uVar4 = bytes_per_pixel & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            puVar2 = puVar2 + bytes_per_pixel;
            uStack_14 = uStack_14 + 1;
            puVar3 = puVar3 + iStack_1c;
          } while (uStack_14 < uStack_18);
        }
        uStack_20 = uStack_20 + 1;
      } while (uStack_20 < (uint)height);
    }
  }
  uVar1 = width * height * bytes_per_pixel;
  puVar2 = puStack_24;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)source_data = *(uint *)puVar2;
    puVar2 = puVar2 + (uint)bVar8 * -8 + 4;
    source_data = source_data + (uint)bVar8 * -8 + 4;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *source_data = *puVar2;
    puVar2 = puVar2 + (uint)bVar8 * -2 + 1;
    source_data = source_data + (uint)bVar8 * -2 + 1;
  }
  free(puStack_24);
  return;
}
