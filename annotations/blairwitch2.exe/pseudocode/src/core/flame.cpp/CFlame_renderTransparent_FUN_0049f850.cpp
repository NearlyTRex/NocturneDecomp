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
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  int aiStackY_10b4 [974];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_170;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  SMRGLHeaderPrimitive SStack_148;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120 [6];
  uint local_108 [6];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3i CStack_e4;
  CVector3f CStack_d8;
  int iStack_cc;
  int aiStack_c8 [2];
  CVector3i CStack_c0;
  CVector3i CStack_b4;
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  int iStack_90;
  int aiStack_8c [2];
  CVector3i CStack_84;
  CVector3i CStack_78;
  float fStack_6c;
  int aiStack_68 [2];
  CVector3i CStack_60;
  CVector3i CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3i CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  if (((this_ptr->flame_state != 0) || (*(int *)(0x01D182F0 + 0x1008) != 0)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar4 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar6 = local_120;
      puVar8 = local_108;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      iVar4 = core_box_cpp_FUN_0041a840(local_108);
      this_ptr->is_visible = iVar4;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
       fVar3 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != FLAME_TYPE_NONE)) {
      engine_matrix_c_FUN_0046b650(DAT_0060b280);
      rotation = (CVector3i *)0x0;
      CStack_60.x = iStack_90;
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = aiStack_8c[(uint)bVar9 * -2];
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      CStack_60.x = 0;
      CStack_60.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,&CStack_60,rotation);
      iStack_20 = 1;
      CStack_9c.x = 0;
      CStack_9c.y = 0;
      CStack_9c.z = 0;
      engine_matrix_c_FUN_0046b650(DAT_0060b280);
      CStack_60.x = iStack_cc;
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = aiStack_c8[(uint)bVar9 * -2];
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           aiStack_c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      if ((0x2000 < CStack_60.x) || (CStack_60.x < -0x2000)) {
        iStack_20 = 3;
      }
      iVar4 = 0;
      if (0 < iStack_20) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                    (DAT_0060b280,&CStack_9c,(CVector3i *)0x0);
          fStack_48 = (this_ptr->flame_size).x * _DAT_005d5885;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          CStack_e4.x = (int)ROUND(fStack_48 * _DAT_005f68f0);
          CStack_e4.y = (int)ROUND(_DAT_005f68f0 * 0.0);
          CStack_e4.z = (int)ROUND(_DAT_005f68f0 * 0.0);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_e4);
          fStack_44 = (this_ptr->flame_size).y;
          CStack_c0.x = (int)ROUND(fStack_48 * _DAT_005f68f0);
          CStack_c0.y = (int)ROUND(fStack_44 * _DAT_005f68f0);
          CStack_c0.z = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_c0);
          fStack_48 = -fStack_48;
          CStack_a8.x = (int)ROUND(fStack_48 * _DAT_005f68f0);
          CStack_a8.y = (int)ROUND(fStack_44 * _DAT_005f68f0);
          CStack_a8.z = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_a8);
          fStack_44 = 0.0;
          CStack_78.x = (int)ROUND(fStack_48 * _DAT_005f68f0);
          CStack_78.y = (int)ROUND(_DAT_005f68f0 * 0.0);
          CStack_78.z = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_78);
          (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))
                    (DAT_007bda74,&(this_ptr->base).location,0);
          DAT_00622040 = 0xffff - _DAT_01c38aec;
          if (iStack_20 == 3) {
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
          fVar10 = (float10)this_ptr->animation_time;
          DAT_00622070 = DAT_00622040;
          _DAT_006220a0 = DAT_00622040;
          _DAT_006220d0 = DAT_00622040;
          round();
          fStack_18 = (float)(int)ROUND(fVar10);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (DAT_0060b280,
                     (SMRGLTextureBasic *)
                     (&DAT_00615b00 + ((int)fStack_18 % 8) * 0x18 + this_ptr->which_flame * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
          SStack_148.base.count = 4;
          SStack_148.surface_normal.D.i = 0;
          SStack_148.surface_normal.C.i = 0;
          SStack_148.surface_normal.B.i = 0;
          SStack_148.surface_normal.A.i = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                    (DAT_0060b280,&SStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
          engine_matrix_c_pop_FUN_0046b4a0();
          iVar4 = iVar4 + 1;
          CStack_9c.z = CStack_9c.z + 0x2aaa;
        } while (iVar4 < iStack_20);
      }
      engine_matrix_c_pop_FUN_0046b4a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    if ((this_ptr->which_flame == FLAME_TYPE_CANDLE) &&
       (fStack_24 = (this_ptr->flame_size).y * (float)_DAT_005d588d, this_ptr->is_visible != 0)) {
      engine_matrix_c_FUN_0046b670(DAT_0060b280);
      CStack_30.x = fStack_6c;
      *(int *)((int)&CStack_30 + (uint)bVar9 * -8 + 4) = aiStack_68[(uint)bVar9 * -2];
      *(int *)((int)&CStack_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           aiStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      CStack_d8.y = (this_ptr->flame_size).y * (float)_DAT_005d5895;
      CStack_d8.x = 0.0;
      CStack_d8.z = 0.0;
      fStack_18 = CStack_d8.y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&CStack_30,&CStack_d8);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.98,1.02);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      CStack_54.x = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      CStack_54.y = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      CStack_54.z = (int)ROUND(_DAT_005f68f0 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_54)
      ;
      fStack_f0 = -fStack_f0;
      CStack_3c.x = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      CStack_3c.y = (int)ROUND(fStack_ec * _DAT_005f68f0);
      CStack_3c.z = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
      fStack_ec = -fStack_ec;
      CStack_b4.x = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      CStack_b4.y = (int)ROUND(fStack_ec * _DAT_005f68f0);
      CStack_b4.z = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_b4);
      fStack_f0 = -fStack_f0;
      CStack_84.x = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      CStack_84.y = (int)ROUND(fStack_ec * _DAT_005f68f0);
      CStack_84.z = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_84);
      iStack_1c = 0;
      do {
        piVar5 = (int *)((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x +
                        iStack_1c);
        iVar4 = piVar5[2];
        if (0x200 < iVar4) {
          iVar7 = iVar4 + -0x100;
          *piVar5 = (int)(((longlong)*piVar5 * (longlong)iVar7) / (longlong)iVar4);
          piVar5[1] = (int)(((longlong)piVar5[1] * (longlong)iVar7) / (longlong)iVar4);
          piVar5[2] = iVar7;
          engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(piVar5);
        }
        this_ptr_00 = DAT_0060b280;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
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
      SStack_170.surface_normal.D.i = 0;
      SStack_170.surface_normal.C.i = 0;
      SStack_170.surface_normal.B.i = 0;
      SStack_170.surface_normal.A.i = 0;
      uStack_158 = 0;
      uStack_150 = 2;
      uStack_14c = 3;
      SStack_170.base.count = 4;
      uStack_154 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_00615ae8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
                (DAT_0060b280,&SStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_matrix_c_pop_FUN_0046b4a0();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
