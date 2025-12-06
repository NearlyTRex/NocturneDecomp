// Name: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
// Address: 00407d70
// Address Range: [[00407d70, 00407fed]]
// Convention: __cdecl
// Signature: void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)

#include "nocturne.h"

void __cdecl
engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  SRenderVertex **ppSVar4;
  int *piVar5;
  uint *puVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  int in_stack_0000000c;
  uint in_stack_00000014;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  
  bVar8 = 0;
  if (((in_stack_00000014 & in_stack_00000044 & 0x80000000) == 0) ||
     ((char)(in_stack_00000014 & in_stack_00000044) == '\0')) {
    iVar2 = 0;
    do {
      if (in_stack_0000003c < in_stack_00000034) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && in_stack_00000034 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000003c < in_stack_00000038) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && in_stack_00000038 <= -in_stack_0000003c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&vertex1,(SRenderVertex *)&stack0x00000034,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        puVar6 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex1) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-(int)vertex1 != in_stack_0000000c && (int)vertex1 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (in_stack_0000000c < (int)vertex2) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        }
      }
      if (-(int)vertex2 != in_stack_0000000c && (int)vertex2 <= -in_stack_0000000c) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&stack0x00000034,(SRenderVertex *)&vertex1,
                   (SRenderVertex *)&stack0xffffffc0);
        puVar3 = (uint *)&stack0xffffffc0;
        ppSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppSVar4 = (SRenderVertex *)*puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
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
      pSVar7 = &g_QuadVertex2;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar7->projected_vertex).transformed_x = (int)*ppSVar4;
        ppSVar4 = ppSVar4 + (uint)bVar8 * -2 + 1;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      piVar5 = &stack0x00000034;
      pSVar7 = &g_QuadVertex3;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar7->projected_vertex).transformed_x = *piVar5;
        piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_2d_c_drawLine_FUN_004011b0
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10);
      return;
    }
  }
  return;
}
