// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
// Address: 0046d550
// Address Range: [[0046d550, 0046d84f]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

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
  _DAT_01c6b5c0 = DAT_007303dc;
  piVar4 = (int *)(*(int *)this_ptr + vertex_index1 * 0x30);
  piVar5 = aiStack_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  puVar3 = (uint *)(*(int *)this_ptr + vertex_index2 * 0x30);
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
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_a0[0] != aiStack_a0[2] && aiStack_a0[0] <= -aiStack_a0[2]) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_a0[2] < aiStack_a0[1]) {
        engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_a0[1] != aiStack_a0[2] && aiStack_a0[1] <= -aiStack_a0[2]) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(aiStack_40,aiStack_a0,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_40[2] < aiStack_40[0]) {
        engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_40[0] != aiStack_40[2] && aiStack_40[0] <= -aiStack_40[2]) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (aiStack_40[2] < aiStack_40[1]) {
        engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(aiStack_a0,aiStack_40,aiStack_70);
        piVar4 = aiStack_70;
        piVar5 = aiStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-aiStack_40[1] != aiStack_40[2] && aiStack_40[1] <= -aiStack_40[2]) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(aiStack_a0,aiStack_40,aiStack_70);
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
      piVar5 = (int *)(*(int *)this_ptr + 0x124f20);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar4 = aiStack_a0;
      puVar3 = (uint *)(*(int *)this_ptr + 0x124f50);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(0x61a6);
      engine_matrix_c_projectCachedPointUnchecked_FUN_004e5630(24999);
      engine_prim_c_replaceWWithDepth_FUN_00515a80(*(int *)this_ptr + 0x124f20,2);
      iVar1 = *(int *)this_ptr;
      engine_2d_c_drawLine3D_FUN_00401310
                (*(int *)(iVar1 + 0x124f30) >> 0x10,*(int *)(iVar1 + 0x124f34) >> 0x10,
                 *(uint *)(iVar1 + 0x124f28),*(int *)(iVar1 + 0x124f60) >> 0x10,
                 *(int *)(iVar1 + 0x124f64) >> 0x10,*(uint *)(iVar1 + 0x124f58));
      return;
    }
  }
  return;
}
