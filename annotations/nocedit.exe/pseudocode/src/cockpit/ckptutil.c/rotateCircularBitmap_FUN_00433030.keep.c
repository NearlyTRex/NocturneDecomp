// Name: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
// Address: 00433030
// MANUAL RECONSTRUCTION
// Address Range: [[00433030, 00433156]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void *bitmap_data,int width,int height,int num_iterations)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void *bitmap_data,int width,int height,int num_iterations)

{
  uint uVar2;
  byte *puVar3;
  byte *puVar4;
  byte *puVar5;
  byte *puVar6;
  int iVar7;
  uint uVar10;
  int aiStack_28 [5];
  uint local_14;
  byte uVar1;

  aiStack_28[2] = width * num_iterations;
  aiStack_28[4] = width / 2;
  if (num_iterations == 1) {
    uVar10 = 0;
    if (height != 0) {
      iVar7 = 0;
      do {
        puVar5 = (byte *)bitmap_data + iVar7 + aiStack_28[2];
        uVar2 = 0;
        puVar3 = (byte *)bitmap_data + iVar7;
        if (aiStack_28[4] != 0) {
          do {
            puVar5 = puVar5 + -1;
            uVar1 = *puVar3;
            *puVar3 = *puVar5;
            uVar2 = uVar2 + 1;
            *puVar5 = uVar1;
            puVar3 = puVar3 + 1;
          } while (uVar2 < (uint)aiStack_28[4]);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + aiStack_28[2];
      } while (uVar10 < (uint)height);
    }
  }
  else {
    aiStack_28[3] = 0;
    if (height != 0) {
      do {
        puVar4 = (byte *)bitmap_data + aiStack_28[3] * aiStack_28[2];
        local_14 = 0;
        puVar6 = puVar4 + (aiStack_28[2] - num_iterations);
        if (aiStack_28[4] != 0) {
          do {
            memcpy(aiStack_28, puVar4, num_iterations);
            memcpy(puVar4, puVar6, num_iterations);
            memcpy(puVar6, aiStack_28, num_iterations);
            puVar4 = puVar4 + num_iterations;
            local_14 = local_14 + 1;
            puVar6 = puVar6 - num_iterations;
          } while (local_14 < (uint)aiStack_28[4]);
        }
        aiStack_28[3] = aiStack_28[3] + 1;
      } while ((uint)aiStack_28[3] < (uint)height);
    }
  }
  return;
}
