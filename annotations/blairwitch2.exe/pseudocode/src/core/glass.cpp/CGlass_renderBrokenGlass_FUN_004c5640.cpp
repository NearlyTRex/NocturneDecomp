// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c583a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  void **texture;
  uint *puVar3;
  int iVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  CDemonActor **ppCVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffffbc;
  CBoundingBox3D CStack_40;
  uint auStack_28 [6];
  int iStack_10;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_40;
  puVar3 = auStack_28;
  puVar6 = (uint *)&stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(this_ptr_00,in_stack_ffffffbc);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(in_stack_0000000c);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  texture = &in_stack_0000000c[1].particle_systems[2].vtable;
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)texture);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)texture);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,1);
  }
  iVar2 = 0;
  if (0 < (int)in_stack_0000000c[4].particle_systems[1].fade_end) {
    ppCVar7 = &in_stack_0000000c[1].particle_systems[3].owner;
    iVar4 = 0;
    do {
      iStack_10 = (int)ROUND((float)*ppCVar7 * _DAT_005f7a60);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                ((SProjectedVertex *)
                 ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iVar4),
                 (CVector3i *)&iStack_10);
      pCVar1 = DAT_0060b280;
      *(uint *)((int)&DAT_0060b280->vertex_buffer_ptr->r + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar4) = 0xffff;
      iVar2 = iVar2 + 1;
      ppCVar7 = ppCVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < (int)in_stack_0000000c[4].particle_systems[1].fade_end);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,(int)in_stack_0000000c[1].location.position.y);
  iVar2 = 0;
  if (0 < (int)in_stack_0000000c[4].particle_systems[1].fade_duration) {
    poly = (SMRGLPrimitivePoly *)&in_stack_0000000c[2].particle_systems[4].particles;
    pCVar5 = in_stack_0000000c;
    do {
      *(uint *)&pCVar5[2].field_0x2a8 = 0;
      pCVar5[2].footstep_effects_enabled = 0;
      pCVar1 = DAT_0060b280;
      pCVar5[2].vtable._ub = (CDemonActor_vtable *)0x0;
      pCVar5[3].actor_name[0] = '\0';
      pCVar5[3].actor_name[1] = '\0';
      pCVar5[3].actor_name[2] = '\0';
      pCVar5[3].actor_name[3] = '\0';
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0(pCVar1,poly);
      pCVar5 = (CDemonActor *)((pCVar5->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < (int)in_stack_0000000c[4].particle_systems[1].fade_duration);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(in_stack_0000000c);
  return;
}
