// Name: engine_3d.c_clipAndDrawLine3D_FUN_00408070
// Address: 00408070
// Address Range: [[00408070, 0040831a]]
// Convention: __cdecl
// Signature: void engine_3d.c_clipAndDrawLine3D_FUN_00408070(SRenderVertex * vertex1, SRenderVertex * vertex2)

#include "nocturne.h"

void __cdecl
engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex **ppSVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  int in_stack_0000000c;
  uint in_stack_00000014;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  SRenderVertex local_40;
  
  bVar7 = 0;
  if (((in_stack_00000014 & in_stack_00000044 & 0x80000000) == 0) ||
     ((char)(in_stack_00000014 & in_stack_00000044) == '\0')) {
    iVar2 = 0;
    do {
      if (in_stack_0000003c < in_stack_00000034) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,&local_40);
        pSVar3 = &local_40;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *(uint *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && in_stack_00000034 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,&local_40);
        pSVar3 = &local_40;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *(uint *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
      if (in_stack_0000003c < in_stack_00000038) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,&local_40);
        pSVar3 = &local_40;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *(uint *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && in_stack_00000038 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,&local_40);
        pSVar3 = &local_40;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *(uint *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex1) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,&local_40);
        pSVar3 = &local_40;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = *(SRenderVertex **)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          ppSVar4 = ppSVar4 + (uint)bVar7 * -2 + 1;
        }
      }
      if (-(int)vertex1 != in_stack_0000000c && (int)vertex1 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,&local_40);
        pSVar3 = &local_40;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = *(SRenderVertex **)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          ppSVar4 = ppSVar4 + (uint)bVar7 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex2) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,&local_40);
        pSVar3 = &local_40;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = *(SRenderVertex **)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          ppSVar4 = ppSVar4 + (uint)bVar7 * -2 + 1;
        }
      }
      if (-(int)vertex2 != in_stack_0000000c && (int)vertex2 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,&local_40);
        pSVar3 = &local_40;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = *(SRenderVertex **)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
          ppSVar4 = ppSVar4 + (uint)bVar7 * -2 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if (((((((int)vertex1 <= in_stack_0000000c) &&
           (-(int)vertex1 == in_stack_0000000c || -in_stack_0000000c < (int)vertex1)) &&
          ((int)vertex2 <= in_stack_0000000c)) &&
         ((-(int)vertex2 == in_stack_0000000c || -in_stack_0000000c < (int)vertex2 &&
          (in_stack_00000034 <= in_stack_0000003c)))) &&
        ((-in_stack_00000034 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000034 &&
         ((in_stack_00000038 <= in_stack_0000003c &&
          (-in_stack_00000038 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000038))))))
       && ((0 < in_stack_0000000c && (0 < in_stack_0000003c)))) {
      ppSVar4 = &vertex1;
      pSVar3 = &g_QuadVertex2;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar3->projected_vertex).transformed_x = (int)*ppSVar4;
        ppSVar4 = ppSVar4 + (uint)bVar7 * -2 + 1;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
      }
      piVar5 = &stack0x00000034;
      pSVar3 = &g_QuadVertex3;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar3->projected_vertex).transformed_x = *piVar5;
        piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar7 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0(&g_QuadVertex2,2);
      engine_2d_c_drawLine3D_FUN_00401320
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex2.projected_vertex.transformed_z,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.transformed_z);
      return;
    }
  }
  return;
}
