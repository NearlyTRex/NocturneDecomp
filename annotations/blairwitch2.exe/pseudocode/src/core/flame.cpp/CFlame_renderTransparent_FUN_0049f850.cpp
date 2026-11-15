// Name: core_flame.cpp_CFlame_renderTransparent_FUN_0049f850
// Address: 0049f850
// Address Range: [[0049f850, 004a01f3]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(CFlame *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  SProjectedVertex *point;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  double dVar9;
  int aiStackY_10ac [973];
  int in_stack_fffffe94;
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_168;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  SMRGLHeaderPrimitive SStack_140;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint auStack_118 [4];
  uint local_108 [2];
  CBoundingBox3D CStack_100;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3i CStack_dc;
  CVector3f CStack_d0;
  CVector3i CStack_c4;
  CVector3i CStack_b8;
  CVector3i CStack_ac;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  CVector3i CStack_7c;
  CVector3i CStack_70;
  CVector3f CStack_64;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3i CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  if (((this_ptr->flame_state != 0) || (*(int *)(0x01D182F0 + 0x1008) != 0)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar4 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar5 = auStack_118;
      puVar7 = local_108;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_100,in_stack_fffffe94);
      this_ptr->is_visible = iVar4;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
       fVar3 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != FLAME_TYPE_NONE)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&CStack_88)
      ;
      rotation = (CVector3i *)0x0;
      CStack_58.x = CStack_88.x;
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      CStack_58.x = 0;
      CStack_58.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,&CStack_58,rotation);
      iStack_18 = 1;
      CStack_94.x = 0;
      CStack_94.y = 0;
      CStack_94.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&CStack_c4)
      ;
      CStack_58.x = CStack_c4.x;
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if ((0x2000 < CStack_58.x) || (CStack_58.x < -0x2000)) {
        iStack_18 = 3;
      }
      iVar4 = 0;
      if (0 < iStack_18) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                    (DAT_0060b280,&CStack_94,(CVector3i *)0x0);
          fStack_40 = (this_ptr->flame_size).x * _DAT_005d5885;
          fStack_3c = 0.0;
          fStack_38 = 0.0;
          CStack_dc.x = (int)ROUND(fStack_40 * _DAT_005f68f0);
          CStack_dc.y = (int)ROUND(_DAT_005f68f0 * 0.0);
          CStack_dc.z = (int)ROUND(_DAT_005f68f0 * 0.0);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_dc);
          fStack_3c = (this_ptr->flame_size).y;
          CStack_b8.x = (int)ROUND(fStack_40 * _DAT_005f68f0);
          CStack_b8.y = (int)ROUND(fStack_3c * _DAT_005f68f0);
          CStack_b8.z = (int)ROUND(fStack_38 * _DAT_005f68f0);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_b8);
          fStack_40 = -fStack_40;
          CStack_a0.x = (int)ROUND(fStack_40 * _DAT_005f68f0);
          CStack_a0.y = (int)ROUND(fStack_3c * _DAT_005f68f0);
          CStack_a0.z = (int)ROUND(fStack_38 * _DAT_005f68f0);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_a0);
          fStack_3c = 0.0;
          CStack_70.x = (int)ROUND(fStack_40 * _DAT_005f68f0);
          CStack_70.y = (int)ROUND(_DAT_005f68f0 * 0.0);
          CStack_70.z = (int)ROUND(fStack_38 * _DAT_005f68f0);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_70);
          (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))
                    (DAT_007bda74,&(this_ptr->base).location,0);
          DAT_00622040 = 0xffff - _DAT_01c38aec;
          if (iStack_14 == 3) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          if (this_ptr->which_flame == FLAME_TYPE_BODY) {
            DAT_00622040 = DAT_00622040 / 4;
          }
          if (this_ptr->which_flame == FLAME_TYPE_CANDLE) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          DAT_00622034 = 0xffff;
          DAT_00622038 = 0xffff;
          DAT_0062203c = 0xffff;
          DAT_00622064 = 0xffff;
          DAT_00622068 = 0xffff;
          DAT_0062206c = 0xffff;
          DAT_00622094 = 0xffff;
          DAT_00622098 = 0xffff;
          DAT_0062209c = 0xffff;
          DAT_006220c4 = 0xffff;
          DAT_006220c8 = 0xffff;
          DAT_006220cc = 0xffff;
          if (this_ptr->texture_flip == 0) {
            DAT_0062202c = 0x80000;
            _DAT_0062205c = 0x80000;
            _DAT_0062208c = 0xf80000;
            _DAT_006220bc = 0xf80000;
          }
          else {
            DAT_0062202c = 0xf80000;
            _DAT_0062205c = 0xf80000;
            _DAT_0062208c = 0x80000;
            _DAT_006220bc = 0x80000;
          }
          _DAT_006220c0 = 0xf80000;
          DAT_00622090 = 0x80000;
          _DAT_00622060 = 0x80000;
          _DAT_00622030 = 0xf80000;
          SStack_168.base.type = 0x49fcd5;
          DAT_00622070 = DAT_00622040;
          _DAT_006220a0 = DAT_00622040;
          _DAT_006220d0 = DAT_00622040;
          dVar9 = round((double)this_ptr->animation_time);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (DAT_0060b280,
                     (SMRGLTextureBasic *)
                     (&DAT_00615b00 + ((int)ROUND(dVar9) % 8) * 0x18 + this_ptr->which_flame * 0xc0)
                    );
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
          SStack_140.base.count = 4;
          SStack_140.surface_normal.D.i = 0;
          SStack_140.surface_normal.C.i = 0;
          SStack_140.surface_normal.B.i = 0;
          SStack_140.surface_normal.A.i = 0;
          local_120 = 2;
          uStack_128 = 0;
          uStack_124 = 1;
          uStack_11c = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                    (DAT_0060b280,&SStack_140);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
          engine_drender_cpp_pop_FUN_0046b4a0();
          iVar4 = iVar4 + 1;
          CStack_94.z = CStack_94.z + 0x2aaa;
        } while (iVar4 < iStack_18);
      }
      engine_drender_cpp_pop_FUN_0046b4a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    if ((this_ptr->which_flame == FLAME_TYPE_CANDLE) &&
       (fStack_1c = (this_ptr->flame_size).y * (float)_DAT_005d588d, this_ptr->is_visible != 0)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670
                (DAT_0060b280,&CStack_64);
      CStack_28.x = CStack_64.x;
      *(uint *)((int)&CStack_28 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      CStack_d0.y = (this_ptr->flame_size).y * (float)_DAT_005d5895;
      CStack_d0.x = 0.0;
      CStack_d0.z = 0.0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&CStack_28,&CStack_d0);
      fStack_e8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.98,1.02);
      fStack_e8 = fStack_e8 * fStack_1c;
      fStack_e0 = 0.0;
      CStack_4c.x = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      CStack_4c.y = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      CStack_4c.z = (int)ROUND(_DAT_005f68f0 * 0.0);
      fStack_e4 = fStack_e8;
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_4c);
      fStack_e8 = -fStack_e8;
      CStack_34.x = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      CStack_34.y = (int)ROUND(fStack_e4 * _DAT_005f68f0);
      CStack_34.z = (int)ROUND(fStack_e0 * _DAT_005f68f0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
      fStack_e4 = -fStack_e4;
      CStack_ac.x = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      CStack_ac.y = (int)ROUND(fStack_e4 * _DAT_005f68f0);
      CStack_ac.z = (int)ROUND(fStack_e0 * _DAT_005f68f0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_ac);
      fStack_e8 = -fStack_e8;
      CStack_7c.x = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      CStack_7c.y = (int)ROUND(fStack_e4 * _DAT_005f68f0);
      CStack_7c.z = (int)ROUND(fStack_e0 * _DAT_005f68f0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_7c);
      iStack_14 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_14
                );
        iVar4 = point->transformed_z;
        if (0x200 < iVar4) {
          iVar6 = iVar4 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_z = iVar6;
          engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(point);
        }
        this_ptr_00 = DAT_0060b280;
        iStack_14 = iStack_14 + 0x30;
      } while (iStack_14 != 0xc0);
      DAT_0060b280->vertex_buffer_ptr->a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[1].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[2].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[3].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr->u = 0x80000;
      this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[1].u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[2].u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
      this_ptr_00->vertex_buffer_ptr[3].u = 0x80000;
      this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
      SStack_168.surface_normal.D.i = 0;
      SStack_168.surface_normal.C.i = 0;
      SStack_168.surface_normal.B.i = 0;
      SStack_168.surface_normal.A.i = 0;
      uStack_150 = 0;
      uStack_148 = 2;
      uStack_144 = 3;
      SStack_168.base.count = 4;
      uStack_14c = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_00615ae8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
                (DAT_0060b280,&SStack_168,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_drender_cpp_pop_FUN_0046b4a0();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
