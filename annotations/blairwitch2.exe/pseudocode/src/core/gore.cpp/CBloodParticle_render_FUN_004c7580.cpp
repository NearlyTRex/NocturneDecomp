// Name: core_gore.cpp_CBloodParticle_render_FUN_004c7580
// Address: 004c7580
// Address Range: [[004c7580, 004c7d91]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004c7580(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004c7580(CBloodParticle *this_ptr)

{
  SRenderVertex *output;
  EBloodType EVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10d4 [1000];
  CVector3f *world_position;
  float fStack_118;
  float fStack_114;
  CVector3i CStack_110;
  CVector3i CStack_104;
  CVector3i CStack_f8;
  float fStack_ec;
  float afStack_e8 [5];
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3i CStack_bc;
  CVector3i CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3i CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3i CStack_80;
  float fStack_74;
  float afStack_70 [2];
  CVector3i CStack_68;
  CVector3i CStack_5c;
  CVector3i aCStack_50 [2];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int *piStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  output = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
  CStack_110.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_110.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_110.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_0055d9ec(&output->projected_vertex,&CStack_110);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (g_CDemonRenderer_PTR_0060b280,&g_CVector3i_01cb82b0,(CVector3i *)0x0);
  afStack_e8[2] = -0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = -0.1;
  CStack_80.x = (int)ROUND(256.0f * -0.1);
  CStack_80.y = (int)ROUND(256.0f * -0.1);
  CStack_80.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_80);
  afStack_e8[2] = 0.1;
  afStack_e8[3] = -0.1;
  afStack_e8[4] = 0.0;
  CStack_98.x = (int)ROUND(256.0f * 0.1);
  CStack_98.y = (int)ROUND(256.0f * -0.1);
  CStack_98.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_98);
  afStack_e8[2] = 0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = 0.1;
  CStack_5c.x = (int)ROUND(256.0f * 0.1);
  CStack_5c.y = (int)ROUND(256.0f * 0.1);
  CStack_5c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_5c);
  afStack_e8[2] = -0.1;
  afStack_e8[3] = 0.1;
  afStack_e8[4] = 0.0;
  CStack_f8.x = (int)ROUND(256.0f * -0.1);
  CStack_f8.y = (int)ROUND(256.0f * 0.1);
  CStack_f8.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_f8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_006167f0);
  iVar3 = (this_ptr->texture_index & 3U) * 0x400000;
  iVar4 = (this_ptr->texture_index >> 2 & 3U) * 0x400000;
  g_SRenderVertex_ARRAY_00622014[0].u = iVar3 + 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].v = iVar4 + 0x80000;
  g_SRenderVertex_ARRAY_00622014[1].u = iVar3 + 0x380000;
  g_SRenderVertex_ARRAY_00622014[2].v = iVar4 + 0x380000;
  CStack_b0.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  CStack_b0.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  CStack_b0.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  g_SRenderVertex_ARRAY_00622014[1].v = g_SRenderVertex_ARRAY_00622014[0].v;
  g_SRenderVertex_ARRAY_00622014[2].u = g_SRenderVertex_ARRAY_00622014[1].u;
  g_SRenderVertex_ARRAY_00622014[3].u = g_SRenderVertex_ARRAY_00622014[0].u;
  g_SRenderVertex_ARRAY_00622014[3].v = g_SRenderVertex_ARRAY_00622014[2].v;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_b0,&g_CVector3i_01cb82bc,0,4);
  piStack_24 = &iStack_30;
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      iStack_30 = 0x9a80;
      iStack_34 = 0xb100;
      iStack_2c = 0x9000;
      goto LAB_004c787c;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      iStack_30 = 0;
      iStack_34 = 0;
      iStack_2c = 0;
      goto LAB_004c787c;
    }
  }
  iStack_2c = 0x2000;
  *piStack_24 = 0;
  iStack_34 = 0;
LAB_004c787c:
  iVar3 = 0;
  do {
    lVar2 = (longlong)iStack_2c *
            (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].r + iVar3);
    *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].r + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_30 *
            (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].g + iVar3);
    *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].g + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3 + 0x30;
    lVar2 = (longlong)iStack_34 *
            (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].b + iVar3);
    *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].b + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4;
  } while (iVar4 != 0xc0);
  (*((g_CDemonCamera_PTR_007bda74->base).vtable)->setupPerspectiveAndFog)
            (g_CDemonCamera_PTR_007bda74,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,0xffff - g_INT_01c38aec);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLPrimitiveQuadIndex_01cb8288.base);
  engine_drender_cpp_pop_FUN_0046b4a0();
  fStack_114 = 1.0;
  puVar5 = (uint *)((int)this_ptr + (uint)bVar7 * -8 + 4);
  CStack_d4.x = (this_ptr->base).position.x;
  *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4) = *puVar5;
  *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       puVar5[(uint)bVar7 * -2 + 1];
  fStack_118 = 0.025;
  iStack_18 = 0;
  pCStack_1c = &(this_ptr->base).acceleration;
  pfVar6 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x10);
  fStack_ec = (this_ptr->base).velocity.x;
  afStack_e8[(uint)bVar7 * -2] = *pfVar6;
  afStack_e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  do {
    fStack_118 = fStack_118 * (float)0.69999999999999996;
    fStack_8c = pCStack_1c->x * fStack_118;
    afStack_88[0] = pCStack_1c->y * fStack_118;
    afStack_88[1] = pCStack_1c->z * fStack_118;
    fStack_a4 = fStack_8c;
    afStack_a0[(uint)bVar7 * -2] = afStack_88[(uint)bVar7 * -2];
    afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_ec = fStack_ec - fStack_a4;
    fStack_114 = fStack_114 * (float)0.69999999999999996;
    fStack_c8 = fStack_ec * fStack_118;
    afStack_e8[0] = afStack_e8[0] - afStack_a0[0];
    afStack_e8[1] = afStack_e8[1] - afStack_a0[1];
    world_position = &CStack_d4;
    afStack_c4[0] = afStack_e8[0] * fStack_118;
    afStack_c4[1] = afStack_e8[1] * fStack_118;
    fStack_74 = fStack_c8;
    afStack_70[(uint)bVar7 * -2] = afStack_c4[(uint)bVar7 * -2];
    afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    CStack_d4.x = CStack_d4.x - fStack_74;
    CStack_d4.y = CStack_d4.y - afStack_70[0];
    CStack_d4.z = CStack_d4.z - afStack_70[1];
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (g_CDemonRenderer_PTR_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (g_CDemonRenderer_PTR_0060b280,&g_CVector3i_01cb82b0,(CVector3i *)0x0);
    afStack_e8[2] = fStack_114 * (float)-0.10000000000000001;
    afStack_e8[4] = 0.0;
    aCStack_50[0].x = (int)ROUND(afStack_e8[2] * 256.0f);
    aCStack_50[0].y = (int)ROUND(afStack_e8[2] * 256.0f);
    aCStack_50[0].z = (int)ROUND(256.0f * 0.0);
    afStack_e8[3] = afStack_e8[2];
    fStack_20 = afStack_e8[2];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,aCStack_50);
    afStack_e8[2] = fStack_114 * (float)0.10000000000000001;
    afStack_e8[4] = 0.0;
    afStack_e8[3] = fStack_20;
    CStack_68.x = (int)ROUND(afStack_e8[2] * 256.0f);
    CStack_68.y = (int)ROUND(fStack_20 * 256.0f);
    CStack_68.z = (int)ROUND(256.0f * 0.0);
    fStack_28 = afStack_e8[2];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_68);
    afStack_e8[2] = fStack_28;
    afStack_e8[3] = fStack_28;
    afStack_e8[4] = 0.0;
    CStack_104.x = (int)ROUND(fStack_28 * 256.0f);
    CStack_104.y = (int)ROUND(fStack_28 * 256.0f);
    CStack_104.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_104);
    afStack_e8[4] = 0.0;
    afStack_e8[2] = fStack_20;
    afStack_e8[3] = fStack_28;
    CStack_bc.x = (int)ROUND(fStack_20 * 256.0f);
    CStack_bc.y = (int)ROUND(fStack_28 * 256.0f);
    CStack_bc.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_bc);
    CStack_b0.x = (int)ROUND(CStack_d4.x * 256.0f);
    CStack_b0.y = (int)ROUND(CStack_d4.y * 256.0f);
    CStack_b0.z = (int)ROUND(CStack_d4.z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
              (g_CDemonSetPtr,&CStack_b0,&g_CVector3i_01cb82bc,0,4);
    iVar3 = 0;
    do {
      lVar2 = (longlong)iStack_2c *
              (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].r + iVar3);
      *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].r + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_30 *
              (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].g + iVar3);
      *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].g + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3 + 0x30;
      lVar2 = (longlong)iStack_34 *
              (longlong)*(int *)((int)&g_SRenderVertex_ARRAY_00622014[0].b + iVar3);
      *(uint *)((int)&g_SRenderVertex_ARRAY_00622014[0].b + iVar3) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4;
    } while (iVar4 != 0xc0);
    (*((g_CDemonCamera_PTR_007bda74->base).vtable)->setupPerspectiveAndFog)
              (g_CDemonCamera_PTR_007bda74,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (g_CDemonRenderer_PTR_0060b280,0xffff - g_INT_01c38aec);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (g_CDemonRenderer_PTR_0060b280,&g_SMRGLPrimitiveQuadIndex_01cb8288.base);
    engine_drender_cpp_pop_FUN_0046b4a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
