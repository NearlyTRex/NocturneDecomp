// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
// Address: 004610a0
// Address Range: [[004610a0, 0046139f]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int aiStack_a0 [4];
  uint uStack_90;
  int aiStack_70 [12];
  int aiStack_40 [4];
  uint uStack_30;
  
  bVar6 = 0;
  _DAT_01c00c70 = DAT_006b0260;
  piVar4 = (int *)(*param_1 + param_2 * 0x30);
  piVar5 = aiStack_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  puVar3 = (uint *)(*param_1 + param_3 * 0x30);
  piVar4 = aiStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if (((uStack_30 & uStack_90 & 0x80000000) == 0) || ((char)(uStack_30 & uStack_90) == '\0')) {
    iVar1 = 0;
    do {
      if (aiStack_a0[2] < aiStack_a0[0]) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_a0[0] != aiStack_a0[2] && aiStack_a0[0] <= -aiStack_a0[2]) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_a0[2] < aiStack_a0[1]) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_a0[1] != aiStack_a0[2] && aiStack_a0[1] <= -aiStack_a0[2]) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_40[2] < aiStack_40[0]) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_40[0] != aiStack_40[2] && aiStack_40[0] <= -aiStack_40[2]) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_40[2] < aiStack_40[1]) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_40[1] != aiStack_40[2] && aiStack_40[1] <= -aiStack_40[2]) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((((((aiStack_40[0] <= aiStack_40[2]) &&
           (-aiStack_40[0] == aiStack_40[2] || -aiStack_40[2] < aiStack_40[0])) &&
          (aiStack_40[1] <= aiStack_40[2])) &&
         ((-aiStack_40[1] == aiStack_40[2] || -aiStack_40[2] < aiStack_40[1] &&
          (aiStack_a0[0] <= aiStack_a0[2])))) &&
        ((-aiStack_a0[0] == aiStack_a0[2] || -aiStack_a0[2] < aiStack_a0[0] &&
         ((aiStack_a0[1] <= aiStack_a0[2] &&
          (-aiStack_a0[1] == aiStack_a0[2] || -aiStack_a0[2] < aiStack_a0[1])))))) &&
       ((0 < aiStack_40[2] && (0 < aiStack_a0[2])))) {
      piVar4 = aiStack_40;
      piVar5 = (int *)(*param_1 + 0xea5a0);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar4 = aiStack_a0;
      puVar3 = (uint *)(*param_1 + 0xea5d0);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(19999);
      engine_prim_c_replaceWWithDepth_FUN_004f99d0(*param_1 + 0xea5a0,2);
      iVar1 = *param_1;
      engine_2d_c_drawLine3D_FUN_00401710
                (*(int *)(iVar1 + 0xea5b0) >> 0x10,*(int *)(iVar1 + 0xea5b4) >> 0x10,
                 *(uint *)(iVar1 + 0xea5a8),*(int *)(iVar1 + 0xea5e0) >> 0x10,
                 *(int *)(iVar1 + 0xea5e4) >> 0x10,*(uint *)(iVar1 + 0xea5d8));
      return;
    }
  }
  return;
}
