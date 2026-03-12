// Name: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
// Address: 00433030
// Address Range: [[00433030, 00433156]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void *bitmap_data,int width,int height,int num_iterations)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void *bitmap_data,int width,int height,int num_iterations)

{
  uint uVar2;
  uint uVar3;
  byte *puVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar4;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar5;
  uint *puVar11;
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
        puVar5 = (byte *)((int)bitmap_data + iVar7) + aiStack_28[2];
        uVar2 = 0;
        puVar3 = (byte *)((int)bitmap_data + iVar7);
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
        puVar4 = (uint *)(aiStack_28[3] * aiStack_28[2] + (int)bitmap_data);
        local_14 = 0;
        puVar6 = (uint *)((int)puVar4 + (aiStack_28[2] - num_iterations));
        if (aiStack_28[4] != 0) {
          do {
            piVar4 = puVar4;
            piVar5 = aiStack_28;
            for (uVar3 = (uint)num_iterations >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            }
            for (uVar3 = num_iterations & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(char *)piVar5 = (char)*piVar4;
              piVar4 = (int *)((int)piVar4 + 1);
              piVar5 = (int *)((int)piVar5 + 1);
            }
            puVar8 = puVar6;
            puVar11 = puVar4;
            for (uVar3 = (uint)num_iterations >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar3 = num_iterations & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(byte *)puVar11 = *(byte *)puVar8;
              puVar8 = (uint *)((int)puVar8 + 1);
              puVar11 = (uint *)((int)puVar11 + 1);
            }
            piVar9 = aiStack_28;
            piVar4 = puVar6;
            for (uVar3 = (uint)num_iterations >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *piVar4 = *piVar9;
              piVar9 = piVar9 + 1;
              piVar4 = piVar4 + 1;
            }
            for (uVar3 = num_iterations & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(char *)piVar4 = (char)*piVar9;
              piVar9 = (int *)((int)piVar9 + 1);
              piVar4 = (int *)((int)piVar4 + 1);
            }
            puVar4 = (uint *)((int)puVar4 + num_iterations);
            local_14 = local_14 + 1;
            puVar6 = (uint *)((int)puVar6 - num_iterations);
          } while (local_14 < (uint)aiStack_28[4]);
        }
        aiStack_28[3] = aiStack_28[3] + 1;
      } while ((uint)aiStack_28[3] < (uint)height);
    }
  }
  return;
}
