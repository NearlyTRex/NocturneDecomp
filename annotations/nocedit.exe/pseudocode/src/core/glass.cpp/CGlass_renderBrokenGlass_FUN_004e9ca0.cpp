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
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *pCVar4;
  float *pfVar5;
  SMRGLHeaderPrimitive *polygon_info;
  CDemonActor *in_stack_00000008;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  CDemonActor *in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  CDemonActor *in_stack_0000002c;
  float fStack_24;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*in_stack_00000008->vtable->getBoundingBox)
                          (in_stack_00000008,(CBoundingBox3D *)&fStack_24);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000020);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000024 + 0x374));
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
    fStack_24 = 7.219529e-39;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000024 + 0x374));
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0xb34)) {
    pfVar5 = (float *)(in_stack_00000028 + 0x38c);
    iVar3 = 0;
    do {
      in_stack_00000014 = (int)ROUND(*pfVar5 * 256f);
      in_stack_00000018 = (int)ROUND(pfVar5[1] * 256f);
      in_stack_0000001c = (int)ROUND(pfVar5[2] * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar3),(CVector3i *)&stack0x00000014);
      pCVar1 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 3;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(in_stack_00000028 + 0xb34));
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,*(int *)(in_stack_00000028 + 0x17c));
  iVar2 = 0;
  if (0 < *(int *)in_stack_0000002c[8].create_event) {
    polygon_info = (SMRGLHeaderPrimitive *)&in_stack_0000002c[4].next_actor;
    pCVar4 = in_stack_0000002c;
    do {
      pCVar4[4].vtable = (CDemonActor_vtable *)0x0;
      pCVar4[5].actor_name[0] = '\0';
      pCVar1 = g_CDemonRendererPtr;
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
    } while (iVar2 < *(int *)in_stack_0000002c[8].create_event);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000002c);
  return;
}
