// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
// Address: 004e9ca0
// Address Range: [[004e9ca0, 004e9e88]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  float *pfVar5;
  SMRGLHeaderPrimitive *polygon_info;
  CDemonActor *in_stack_0000000c;
  int iStack_8;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd8);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_0000000c[2].create_event + 0x4c))
    ;
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_0000000c[2].create_event + 0x4c))
    ;
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,1);
  }
  iVar2 = 0;
  if (0 < (int)in_stack_0000000c[8].create_prob) {
    pfVar5 = (float *)&in_stack_0000000c[2].unk2;
    iVar3 = 0;
    do {
      iStack_8 = (int)ROUND(*pfVar5 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),(CVector3i *)&iStack_8);
      pCVar1 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 3;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < (int)in_stack_0000000c[8].create_prob);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,(int)in_stack_0000000c[1].location.position.y);
  iVar2 = 0;
  if (0 < *(int *)in_stack_0000000c[8].create_event) {
    polygon_info = (SMRGLHeaderPrimitive *)&in_stack_0000000c[4].next_actor;
    pCVar4 = in_stack_0000000c;
    do {
      pCVar4[4].vtable._ub = (CDemonActor_vtable *)0x0;
      pCVar4[5].actor_name[0] = '\0';
      pCVar1 = g_CDemonRendererPtr2;
      pCVar4[5].actor_name[1] = '\0';
      pCVar4[5].actor_name[2] = '\0';
      pCVar4[5].actor_name[3] = '\0';
      pCVar4[5].actor_name[4] = '\0';
      pCVar4[5].actor_name[5] = '\0';
      pCVar4[5].actor_name[6] = '\0';
      pCVar4[5].actor_name[7] = '\0';
      pCVar4[5].actor_name[8] = '\0';
      pCVar4[5].actor_name[9] = '\0';
      pCVar4[5].actor_name[10] = '\0';
      pCVar4[5].actor_name[0xb] = '\0';
      engine_drender_cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(pCVar1,polygon_info);
      pCVar4 = (CDemonActor *)((pCVar4->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      polygon_info = polygon_info + 3;
    } while (iVar2 < *(int *)in_stack_0000000c[8].create_event);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
  return;
}
