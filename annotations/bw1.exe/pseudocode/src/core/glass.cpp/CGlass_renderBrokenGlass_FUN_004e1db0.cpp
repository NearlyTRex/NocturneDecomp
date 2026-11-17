// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e1db0
// Address: 004e1db0
// Address Range: [[004e1db0, 004e1faa]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e1db0(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e1db0(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  CPlatform **ppCVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffffbc;
  CBoundingBox3D CStack_40;
  uint auStack_28 [6];
  int iStack_10;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_40;
  puVar3 = auStack_28;
  puVar6 = (uint *)&stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(this_ptr_00,in_stack_ffffffbc);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(in_stack_0000000c);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,
               (SMRGLTextureBasic *)(in_stack_0000000c[2].create_event + 0x4c));
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,
               (SMRGLTextureBasic *)(in_stack_0000000c[2].create_event + 0x4c));
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,1);
  }
  iVar2 = 0;
  if (0 < (int)in_stack_0000000c[8].create_prob) {
    ppCVar7 = &in_stack_0000000c[2].standing_platform;
    iVar4 = 0;
    do {
      iStack_10 = (int)ROUND((float)*ppCVar7 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex).
                        transformed_x + iVar4),(CVector3i *)&iStack_10);
      pCVar1 = g_CDemonRenderer_PTR_00612560;
      *(uint *)((int)&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->r + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar4) = 0xffff;
      iVar2 = iVar2 + 1;
      ppCVar7 = ppCVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < (int)in_stack_0000000c[8].create_prob);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (g_CDemonRenderer_PTR_00612560,(int)in_stack_0000000c[1].location.position.y);
  iVar2 = 0;
  if (0 < *(int *)in_stack_0000000c[8].create_event) {
    poly = (SMRGLPrimitivePoly *)&in_stack_0000000c[4].next_actor;
    pCVar5 = in_stack_0000000c;
    do {
      pCVar5[4].vtable._ub = (CDemonActor_vtable *)0x0;
      pCVar5[5].actor_name[0] = '\0';
      pCVar1 = g_CDemonRenderer_PTR_00612560;
      pCVar5[5].actor_name[1] = '\0';
      pCVar5[5].actor_name[2] = '\0';
      pCVar5[5].actor_name[3] = '\0';
      pCVar5[5].actor_name[4] = '\0';
      pCVar5[5].actor_name[5] = '\0';
      pCVar5[5].actor_name[6] = '\0';
      pCVar5[5].actor_name[7] = '\0';
      pCVar5[5].actor_name[8] = '\0';
      pCVar5[5].actor_name[9] = '\0';
      pCVar5[5].actor_name[10] = '\0';
      pCVar5[5].actor_name[0xb] = '\0';
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0(pCVar1,poly);
      pCVar5 = (CDemonActor *)((pCVar5->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < *(int *)in_stack_0000000c[8].create_event);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(in_stack_0000000c);
  return;
}
