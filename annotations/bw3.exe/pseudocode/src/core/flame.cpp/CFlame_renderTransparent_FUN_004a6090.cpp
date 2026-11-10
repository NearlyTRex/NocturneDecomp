// Name: core_flame.cpp_CFlame_renderTransparent_FUN_004a6090
// Address: 004a6090
// Address Range: [[004a6090, 004a6a33]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004a6090(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004a6090(CFlame *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  SRenderVertex *pSVar5;
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
  if (((this_ptr->flame_state != 0) || (*(int *)(0x01D81080 + 0x1008) != 0)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar4 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar6 = local_120;
      puVar8 = local_108;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      iVar4 = core_box_cpp_FUN_0041daf0(local_108);
      this_ptr->is_visible = iVar4;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
       fVar3 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != FLAME_TYPE_NONE)) {
      engine_matrix_c_FUN_0046d230(DAT_005f2afc);
      rotation = (CVector3i *)0x0;
      CStack_60.x = iStack_90;
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = aiStack_8c[(uint)bVar9 * -2];
      *(int *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           aiStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      CStack_60.x = 0;
      CStack_60.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                (DAT_005f2afc,&CStack_60,rotation);
      iStack_20 = 1;
      CStack_9c.x = 0;
      CStack_9c.y = 0;
      CStack_9c.z = 0;
      engine_matrix_c_FUN_0046d230(DAT_005f2afc);
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
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                    (DAT_005f2afc,&CStack_9c,(CVector3i *)0x0);
          fStack_48 = (this_ptr->flame_size).x * _DAT_005c0bdc;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          CStack_e4.x = (int)ROUND(fStack_48 * _DAT_005dfe50);
          CStack_e4.y = (int)ROUND(_DAT_005dfe50 * 0.0);
          CStack_e4.z = (int)ROUND(_DAT_005dfe50 * 0.0);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&CStack_e4);
          fStack_44 = (this_ptr->flame_size).y;
          CStack_c0.x = (int)ROUND(fStack_48 * _DAT_005dfe50);
          CStack_c0.y = (int)ROUND(fStack_44 * _DAT_005dfe50);
          CStack_c0.z = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&CStack_c0);
          fStack_48 = -fStack_48;
          CStack_a8.x = (int)ROUND(fStack_48 * _DAT_005dfe50);
          CStack_a8.y = (int)ROUND(fStack_44 * _DAT_005dfe50);
          CStack_a8.z = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&CStack_a8);
          fStack_44 = 0.0;
          CStack_78.x = (int)ROUND(fStack_48 * _DAT_005dfe50);
          CStack_78.y = (int)ROUND(_DAT_005dfe50 * 0.0);
          CStack_78.z = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&CStack_78);
          (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))
                    (DAT_007e2a54,&(this_ptr->base).location,0);
          DAT_0060b040 = 0xffff - _DAT_01c6e24c;
          if (iStack_20 == 3) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          if (this_ptr->which_flame == FLAME_TYPE_BODY) {
            DAT_0060b040 = DAT_0060b040 / 4;
          }
          if (this_ptr->which_flame == FLAME_TYPE_CANDLE) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          DAT_0060b034 = 0xffff;
          DAT_0060b038 = 0xffff;
          DAT_0060b03c = 0xffff;
          DAT_0060b064 = 0xffff;
          DAT_0060b068 = 0xffff;
          DAT_0060b06c = 0xffff;
          _DAT_0060b094 = 0xffff;
          _DAT_0060b098 = 0xffff;
          _DAT_0060b09c = 0xffff;
          _DAT_0060b0c4 = 0xffff;
          _DAT_0060b0c8 = 0xffff;
          _DAT_0060b0cc = 0xffff;
          if (this_ptr->texture_flip == 0) {
            DAT_0060b02c = 0x80000;
            _DAT_0060b05c = 0x80000;
            _DAT_0060b08c = 0xf80000;
            _DAT_0060b0bc = 0xf80000;
          }
          else {
            DAT_0060b02c = 0xf80000;
            _DAT_0060b05c = 0xf80000;
            _DAT_0060b08c = 0x80000;
            _DAT_0060b0bc = 0x80000;
          }
          _DAT_0060b0c0 = 0xf80000;
          DAT_0060b090 = 0x80000;
          _DAT_0060b060 = 0x80000;
          _DAT_0060b030 = 0xf80000;
          fVar10 = (float10)this_ptr->animation_time;
          DAT_0060b070 = DAT_0060b040;
          _DAT_0060b0a0 = DAT_0060b040;
          _DAT_0060b0d0 = DAT_0060b040;
          round();
          fStack_18 = (float)(int)ROUND(fVar10);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                    (DAT_005f2afc,
                     (SMRGLTextureBasic *)
                     (&DAT_005fde88 + ((int)fStack_18 % 8) * 0x18 + this_ptr->which_flame * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
          SStack_148.base.count = 4;
          SStack_148.surface_normal.D.i = 0;
          SStack_148.surface_normal.C.i = 0;
          SStack_148.surface_normal.B.i = 0;
          SStack_148.surface_normal.A.i = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
                    (DAT_005f2afc,&SStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
          engine_matrix_c_pop_FUN_0046d080();
          iVar4 = iVar4 + 1;
          CStack_9c.z = CStack_9c.z + 0x2aaa;
        } while (iVar4 < iStack_20);
      }
      engine_matrix_c_pop_FUN_0046d080();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    if ((this_ptr->which_flame == FLAME_TYPE_CANDLE) &&
       (fStack_24 = (this_ptr->flame_size).y * (float)_DAT_005c0be4, this_ptr->is_visible != 0)) {
      engine_matrix_c_FUN_0046d250(DAT_005f2afc);
      CStack_30.x = fStack_6c;
      *(int *)((int)&CStack_30 + (uint)bVar9 * -8 + 4) = aiStack_68[(uint)bVar9 * -2];
      *(int *)((int)&CStack_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           aiStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      CStack_d8.y = (this_ptr->flame_size).y * (float)_DAT_005c0bec;
      CStack_d8.x = 0.0;
      CStack_d8.z = 0.0;
      fStack_18 = CStack_d8.y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&CStack_30,&CStack_d8);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.98,1.02);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      CStack_54.x = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      CStack_54.y = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      CStack_54.z = (int)ROUND(_DAT_005dfe50 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&CStack_54);
      fStack_f0 = -fStack_f0;
      CStack_3c.x = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      CStack_3c.y = (int)ROUND(fStack_ec * _DAT_005dfe50);
      CStack_3c.z = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&CStack_3c);
      fStack_ec = -fStack_ec;
      CStack_b4.x = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      CStack_b4.y = (int)ROUND(fStack_ec * _DAT_005dfe50);
      CStack_b4.z = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&CStack_b4);
      fStack_f0 = -fStack_f0;
      CStack_84.x = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      CStack_84.y = (int)ROUND(fStack_ec * _DAT_005dfe50);
      CStack_84.z = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&CStack_84);
      iStack_1c = 0;
      do {
        pSVar5 = DAT_005f2afc->vertex_buffer_ptr + iStack_1c;
        iVar4 = *(int *)(pSVar5 + 8);
        if (0x200 < iVar4) {
          iVar7 = iVar4 + -0x100;
          *(int *)pSVar5 = (int)(((longlong)*(int *)pSVar5 * (longlong)iVar7) / (longlong)iVar4);
          *(int *)(pSVar5 + 4) =
               (int)(((longlong)*(int *)(pSVar5 + 4) * (longlong)iVar7) / (longlong)iVar4);
          *(int *)(pSVar5 + 8) = iVar7;
          engine_matrix_c_projectTransformedPoint_FUN_004e5590(pSVar5);
        }
        this_ptr_00 = DAT_005f2afc;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(DAT_005f2afc->vertex_buffer_ptr + 0x2c) = 0x4000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = 0x4000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = 0x4000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = 0x4000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x18) = 0x80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x1c) = 0xf80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x48) = 0xf80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x4c) = 0xf80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x78) = 0xf80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x7c) = 0x80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa8) = 0x80000;
      *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xac) = 0x80000;
      SStack_170.surface_normal.D.i = 0;
      SStack_170.surface_normal.C.i = 0;
      SStack_170.surface_normal.B.i = 0;
      SStack_170.surface_normal.A.i = 0;
      uStack_158 = 0;
      uStack_150 = 2;
      uStack_14c = 3;
      SStack_170.base.count = 4;
      uStack_154 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_005fde70);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
                (DAT_005f2afc,&SStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
      engine_matrix_c_pop_FUN_0046d080();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
