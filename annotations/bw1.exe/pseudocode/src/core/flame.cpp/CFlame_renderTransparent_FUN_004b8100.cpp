// Name: core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
// Address: 004b8100
// Address Range: [[004b8100, 004b8aa3]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(CFlame *this_ptr)

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
  float10 fVar9;
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
  CVector3i CStack_cc;
  CVector3i CStack_c0;
  CVector3i CStack_b4;
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  CVector3i CStack_90;
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
  
  bVar8 = 0;
  if (((this_ptr->flame_state != 0) || (*(int *)(0x01D2C900 + 0x1008) != 0)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar4 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar5 = local_120;
      puVar7 = local_108;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = core_box_cpp_FUN_004207b0(local_108);
      this_ptr->is_visible = iVar4;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
       fVar3 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00551a00(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != FLAME_TYPE_NONE)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(DAT_00612560,&CStack_90)
      ;
      rotation = (CVector3i *)0x0;
      CStack_60.x = CStack_90.x;
      *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      CStack_60.x = 0;
      CStack_60.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
                (DAT_00612560,&CStack_60,rotation);
      iStack_20 = 1;
      CStack_9c.x = 0;
      CStack_9c.y = 0;
      CStack_9c.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(DAT_00612560,&CStack_cc)
      ;
      CStack_60.x = CStack_cc.x;
      *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if ((0x2000 < CStack_60.x) || (CStack_60.x < -0x2000)) {
        iStack_20 = 3;
      }
      iVar4 = 0;
      if (0 < iStack_20) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
                    (DAT_00612560,&CStack_9c,(CVector3i *)0x0);
          fStack_48 = (this_ptr->flame_size).x * _DAT_005df6c7;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          CStack_e4.x = (int)ROUND(fStack_48 * _DAT_00600380);
          CStack_e4.y = (int)ROUND(_DAT_00600380 * 0.0);
          CStack_e4.z = (int)ROUND(_DAT_00600380 * 0.0);
          engine_special_cpp_FUN_00580173
                    (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_e4);
          fStack_44 = (this_ptr->flame_size).y;
          CStack_c0.x = (int)ROUND(fStack_48 * _DAT_00600380);
          CStack_c0.y = (int)ROUND(fStack_44 * _DAT_00600380);
          CStack_c0.z = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_c0);
          fStack_48 = -fStack_48;
          CStack_a8.x = (int)ROUND(fStack_48 * _DAT_00600380);
          CStack_a8.y = (int)ROUND(fStack_44 * _DAT_00600380);
          CStack_a8.z = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_a8);
          fStack_44 = 0.0;
          CStack_78.x = (int)ROUND(fStack_48 * _DAT_00600380);
          CStack_78.y = (int)ROUND(_DAT_00600380 * 0.0);
          CStack_78.z = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_78);
          (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))
                    (DAT_007c6120,&(this_ptr->base).location,0);
          DAT_00629040 = 0xffff - _DAT_01c51cac;
          if (iStack_20 == 3) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          if (this_ptr->which_flame == FLAME_TYPE_BODY) {
            DAT_00629040 = DAT_00629040 / 4;
          }
          if (this_ptr->which_flame == FLAME_TYPE_CANDLE) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          DAT_00629034 = 0xffff;
          DAT_00629038 = 0xffff;
          DAT_0062903c = 0xffff;
          DAT_00629064 = 0xffff;
          DAT_00629068 = 0xffff;
          DAT_0062906c = 0xffff;
          DAT_00629094 = 0xffff;
          DAT_00629098 = 0xffff;
          DAT_0062909c = 0xffff;
          DAT_006290c4 = 0xffff;
          DAT_006290c8 = 0xffff;
          DAT_006290cc = 0xffff;
          if (this_ptr->texture_flip == 0) {
            DAT_0062902c = 0x80000;
            _DAT_0062905c = 0x80000;
            _DAT_0062908c = 0xf80000;
            _DAT_006290bc = 0xf80000;
          }
          else {
            DAT_0062902c = 0xf80000;
            _DAT_0062905c = 0xf80000;
            _DAT_0062908c = 0x80000;
            _DAT_006290bc = 0x80000;
          }
          _DAT_006290c0 = 0xf80000;
          DAT_00629090 = 0x80000;
          _DAT_00629060 = 0x80000;
          _DAT_00629030 = 0xf80000;
          fVar9 = (float10)this_ptr->animation_time;
          DAT_00629070 = DAT_00629040;
          _DAT_006290a0 = DAT_00629040;
          _DAT_006290d0 = DAT_00629040;
          round();
          fStack_18 = (float)(int)ROUND(fVar9);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                    (DAT_00612560,
                     (SMRGLTextureBasic *)
                     (&DAT_0061cdc0 + ((int)fStack_18 % 8) * 0x18 + this_ptr->which_flame * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
          SStack_148.base.count = 4;
          SStack_148.surface_normal.D.i = 0;
          SStack_148.surface_normal.C.i = 0;
          SStack_148.surface_normal.B.i = 0;
          SStack_148.surface_normal.A.i = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
                    (DAT_00612560,&SStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
          engine_drender_cpp_pop_FUN_004839a0();
          iVar4 = iVar4 + 1;
          CStack_9c.z = CStack_9c.z + 0x2aaa;
        } while (iVar4 < iStack_20);
      }
      engine_drender_cpp_pop_FUN_004839a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    if ((this_ptr->which_flame == FLAME_TYPE_CANDLE) &&
       (fStack_24 = (this_ptr->flame_size).y * (float)_DAT_005df6cf, this_ptr->is_visible != 0)) {
      engine_drender_cpp_FUN_00483b70(DAT_00612560);
      CStack_30.x = fStack_6c;
      *(int *)((int)&CStack_30 + (uint)bVar8 * -8 + 4) = aiStack_68[(uint)bVar8 * -2];
      *(int *)((int)&CStack_30 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           aiStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      CStack_d8.y = (this_ptr->flame_size).y * (float)_DAT_005df6d7;
      CStack_d8.x = 0.0;
      CStack_d8.z = 0.0;
      fStack_18 = CStack_d8.y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&CStack_30,&CStack_d8);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.98,1.02);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      CStack_54.x = (int)ROUND(fStack_f0 * _DAT_00600380);
      CStack_54.y = (int)ROUND(fStack_f0 * _DAT_00600380);
      CStack_54.z = (int)ROUND(_DAT_00600380 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_54)
      ;
      fStack_f0 = -fStack_f0;
      CStack_3c.x = (int)ROUND(fStack_f0 * _DAT_00600380);
      CStack_3c.y = (int)ROUND(fStack_ec * _DAT_00600380);
      CStack_3c.z = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
      fStack_ec = -fStack_ec;
      CStack_b4.x = (int)ROUND(fStack_f0 * _DAT_00600380);
      CStack_b4.y = (int)ROUND(fStack_ec * _DAT_00600380);
      CStack_b4.z = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_b4);
      fStack_f0 = -fStack_f0;
      CStack_84.x = (int)ROUND(fStack_f0 * _DAT_00600380);
      CStack_84.y = (int)ROUND(fStack_ec * _DAT_00600380);
      CStack_84.z = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_84);
      iStack_1c = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c
                );
        iVar4 = point->transformed_z;
        if (0x200 < iVar4) {
          iVar6 = iVar4 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_z = iVar6;
          engine_matrix_c_projectTransformedPoint_FUN_00507b50(point);
        }
        this_ptr_00 = DAT_00612560;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      DAT_00612560->vertex_buffer_ptr->a = 0x4000;
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
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_0061cda8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
                (DAT_00612560,&SStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_drender_cpp_pop_FUN_004839a0();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
