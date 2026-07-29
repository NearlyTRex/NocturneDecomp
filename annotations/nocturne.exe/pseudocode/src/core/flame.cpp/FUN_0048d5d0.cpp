// Name: core_flame.cpp_FUN_0048d5d0
// Address: 0048d5d0
// Address Range: [[0048d5d0, 0048df0e]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_FUN_0048d5d0(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_FUN_0048d5d0(CFlame *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *this_ptr_00;
  int iVar5;
  CBoundingBox3D *this_ptr_01;
  SProjectedVertex *point;
  byte bVar6;
  double dVar7;
  int aiStackY_1090 [975];
  int iStack_140;
  SMRGLHeaderPrimitive SStack_118;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  CBoundingBox3D local_f0;
  CVector3i CStack_d8;
  CVector3i CStack_cc;
  CVector3i CStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int aiStack_2c [5];
  float fStack_18;
  int iStack_14;
  int iStack_10;
  float fStack_c;
  
  bVar6 = 0;
  if (((this_ptr->flame_state != 0) || (*(int *)(0x01CC9450 + 4) != 0)) &&
     (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar5 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_f0);
      iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
      this_ptr->is_visible = iVar5;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar2 = (this_ptr->flame_size).y, fVar3 = (this_ptr->flame_size).x,
       fVar4 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(0x01E57284,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != 3)) {
      engine_drender_cpp_FUN_00460d90(DAT_005ae704);
      CStack_a8.x = iStack_30;
      *(int *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) = aiStack_2c[(uint)bVar6 * -2];
      *(int *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      CStack_a8.x = 0;
      CStack_a8.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                (DAT_005ae704,&CStack_a8,(CVector3i *)0x0);
      iStack_14 = 1;
      CStack_c0.x = 0;
      CStack_c0.y = 0;
      CStack_c0.z = 0;
      engine_drender_cpp_FUN_00460d90(DAT_005ae704);
      CStack_a8.x = aiStack_2c[2];
      *(int *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) = aiStack_2c[(uint)bVar6 * -2 + 3];
      *(int *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      if ((0x2000 < CStack_a8.x) || (CStack_a8.x < -0x2000)) {
        iStack_14 = 3;
      }
      iVar5 = 0;
      if (0 < iStack_14) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                    (DAT_005ae704,&CStack_c0,(CVector3i *)0x0);
          fStack_3c = (this_ptr->flame_size).x * 5.2220990168285998e-315._0_4_;
          fStack_38 = 0.0;
          fStack_34 = 0.0;
          CStack_6c.x = (int)ROUND(fStack_3c * _DAT_0059d560);
          CStack_6c.y = (int)ROUND(_DAT_0059d560 * 0.0);
          CStack_6c.z = (int)ROUND(_DAT_0059d560 * 0.0);
          engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                    (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_6c);
          fStack_38 = (this_ptr->flame_size).y;
          CStack_54.x = (int)ROUND(fStack_3c * _DAT_0059d560);
          CStack_54.y = (int)ROUND(fStack_38 * _DAT_0059d560);
          CStack_54.z = (int)ROUND(fStack_34 * _DAT_0059d560);
          engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                    (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
          fStack_3c = -fStack_3c;
          CStack_cc.x = (int)ROUND(fStack_3c * _DAT_0059d560);
          CStack_cc.y = (int)ROUND(fStack_38 * _DAT_0059d560);
          CStack_cc.z = (int)ROUND(fStack_34 * _DAT_0059d560);
          engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                    (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_cc);
          fStack_38 = 0.0;
          CStack_48.x = (int)ROUND(fStack_3c * _DAT_0059d560);
          CStack_48.y = (int)ROUND(_DAT_0059d560 * 0.0);
          CStack_48.z = (int)ROUND(fStack_34 * _DAT_0059d560);
          engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                    (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_48);
          core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                    (_DAT_007f7370,&(this_ptr->base).location,0);
          DAT_005c5040 = 0xffff - _DAT_01c038f4;
          if (iStack_14 == 3) {
            DAT_005c5040 = DAT_005c5040 / 2;
          }
          if (this_ptr->which_flame == 4) {
            DAT_005c5040 = (int)((DAT_005c5040 + (DAT_005c5040 >> 0x1f) * -4) -
                                (uint)((DAT_005c5040 >> 0x1f) << 1 < 0)) >> 2;
          }
          if (this_ptr->which_flame == 1) {
            DAT_005c5040 = DAT_005c5040 / 2;
          }
          DAT_005c5034 = 0xffff;
          DAT_005c5038 = 0xffff;
          DAT_005c503c = 0xffff;
          DAT_005c5064 = 0xffff;
          DAT_005c5068 = 0xffff;
          DAT_005c506c = 0xffff;
          DAT_005c5094 = 0xffff;
          DAT_005c5098 = 0xffff;
          DAT_005c509c = 0xffff;
          DAT_005c50c4 = 0xffff;
          DAT_005c50c8 = 0xffff;
          DAT_005c50cc = 0xffff;
          if (this_ptr->texture_flip == 0) {
            DAT_005c502c = 0x80000;
            _DAT_005c505c = 0x80000;
            _DAT_005c508c = 0xf80000;
            _DAT_005c50bc = 0xf80000;
          }
          else {
            DAT_005c502c = 0xf80000;
            _DAT_005c505c = 0xf80000;
            _DAT_005c508c = 0x80000;
            _DAT_005c50bc = 0x80000;
          }
          _DAT_005c50c0 = 0xf80000;
          _DAT_005c5090 = 0x80000;
          _DAT_005c5060 = 0x80000;
          _DAT_005c5030 = 0xf80000;
          DAT_005c5070 = DAT_005c5040;
          _DAT_005c50a0 = DAT_005c5040;
          _DAT_005c50d0 = DAT_005c5040;
          dVar7 = round((double)this_ptr->animation_time);
          iStack_10 = (int)ROUND(dVar7);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                    (DAT_005ae704,
                     (SMRGLTextureBasic *)
                     (&DAT_005b8e00 + (iStack_10 % 8) * 0x18 + this_ptr->which_flame * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
          iStack_140 = 4;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                    (DAT_005ae704,(SMRGLHeaderPrimitive *)&stack0xfffffebc);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          iVar5 = iVar5 + 1;
          CStack_c0.y = CStack_c0.y + 0x2aaa;
        } while (iVar5 < (int)fStack_18);
      }
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    if ((this_ptr->which_flame == 1) &&
       (fStack_18 = (this_ptr->flame_size).y * (float)2, this_ptr->is_visible != 0)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                (DAT_005ae704,&CStack_90);
      CStack_84.y = (this_ptr->flame_size).y * (float)0.5;
      CStack_84.x = 0.0;
      CStack_84.z = 0.0;
      fStack_c = CStack_84.y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&CStack_90,&CStack_84);
      fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.98,1.02);
      fStack_b4 = fStack_c * fStack_18;
      fStack_ac = 0.0;
      CStack_d8.x = (int)ROUND(fStack_b4 * _DAT_0059d560);
      CStack_d8.y = (int)ROUND(fStack_b4 * _DAT_0059d560);
      CStack_d8.z = (int)ROUND(_DAT_0059d560 * 0.0);
      fStack_b0 = fStack_b4;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_d8);
      fStack_b4 = -fStack_b4;
      CStack_78.x = (int)ROUND(fStack_b4 * _DAT_0059d560);
      CStack_78.y = (int)ROUND(fStack_b0 * _DAT_0059d560);
      CStack_78.z = (int)ROUND(fStack_ac * _DAT_0059d560);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
      fStack_b0 = -fStack_b0;
      CStack_9c.x = (int)ROUND(fStack_b4 * _DAT_0059d560);
      CStack_9c.y = (int)ROUND(fStack_b0 * _DAT_0059d560);
      CStack_9c.z = (int)ROUND(fStack_ac * _DAT_0059d560);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_9c);
      fStack_b4 = -fStack_b4;
      CStack_60.x = (int)ROUND(fStack_b4 * _DAT_0059d560);
      CStack_60.y = (int)ROUND(fStack_b0 * _DAT_0059d560);
      CStack_60.z = (int)ROUND(fStack_ac * _DAT_0059d560);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_60);
      iStack_10 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_10
                );
        iVar5 = point->transformed_z;
        if (0x200 < iVar5) {
          iVar1 = iVar5 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar1) / (longlong)iVar5);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar1) / (longlong)iVar5);
          point->transformed_z = iVar1;
          engine_matrix_c_projectTransformedPoint_FUN_004cd260(point);
        }
        this_ptr_00 = DAT_005ae704;
        iStack_10 = iStack_10 + 0x30;
      } while (iStack_10 != 0xc0);
      DAT_005ae704->vertex_buffer_ptr->a = 0x4000;
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
      SStack_118.base.count = 4;
      SStack_118.surface_normal.D.i = 0;
      SStack_118.surface_normal.C.i = 0;
      SStack_118.surface_normal.B.i = 0;
      SStack_118.surface_normal.A.i = 0;
      uStack_100 = 0;
      uStack_f4 = 3;
      uStack_f8 = 2;
      uStack_fc = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_005b8de8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
                (DAT_005ae704,&SStack_118,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
