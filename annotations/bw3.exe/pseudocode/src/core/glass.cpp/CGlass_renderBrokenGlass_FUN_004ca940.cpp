// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940
// Address: 004ca940
// Address Range: [[004ca940, 004cab3a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  float *texture;
  uint *puVar3;
  int iVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  int *piVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffffbc;
  CBoundingBox3D CStack_40;
  uint auStack_28 [6];
  int iStack_10;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_40;
  puVar3 = auStack_28;
  puVar6 = (uint *)&stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_00,in_stack_ffffffbc);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(in_stack_0000000c);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  texture = &in_stack_0000000c[2].platform_orientation_delta.z;
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)texture);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)texture);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_0000000c[8].create_event + 0x2c)) {
    piVar7 = &in_stack_0000000c[2].scale.y;
    iVar4 = 0;
    do {
      iStack_10 = (int)ROUND((float)*piVar7 * _DAT_005e0bc0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                ((SProjectedVertex *)
                 ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar4),
                 (CVector3i *)&iStack_10);
      pCVar1 = DAT_005f2afc;
      *(uint *)((int)&DAT_005f2afc->vertex_buffer_ptr->r + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar4) = 0xffff;
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)(in_stack_0000000c[8].create_event + 0x2c));
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (DAT_005f2afc,(int)in_stack_0000000c[1].orient_matrix.m[2].x);
  iVar2 = 0;
  if (0 < *(int *)(in_stack_0000000c[8].create_event + 0x30)) {
    poly = (SMRGLPrimitivePoly *)&in_stack_0000000c[5].location.position.y;
    pCVar5 = in_stack_0000000c;
    do {
      pCVar5[5].location.area_id = 0;
      pCVar5[5].orient.vec.x = 0.0;
      pCVar1 = DAT_005f2afc;
      pCVar5[5].orient.vec.y = 0.0;
      pCVar5[5].orient.vec.z = 0.0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(pCVar1,poly);
      pCVar5 = (CDemonActor *)((pCVar5->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < *(int *)(in_stack_0000000c[8].create_event + 0x30));
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(in_stack_0000000c);
  return;
}
