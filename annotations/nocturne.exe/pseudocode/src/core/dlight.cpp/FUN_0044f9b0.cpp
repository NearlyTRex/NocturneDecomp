// Name: core_dlight.cpp_FUN_0044f9b0
// Address: 0044f9b0
// Address Range: [[0044f9b0, 00450161]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044f9b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0044f9b0(int param_1)

{
  float fVar1;
  CVector3f *pCVar2;
  SMRGLTextureBasic *texture;
  byte bVar3;
  double dVar4;
  float afStackY_10d4 [991];
  CDemonRenderer *this_ptr;
  CDemonRenderer *pCVar5;
  float local_148;
  float local_140;
  SMRGLHeaderPrimitive local_13c;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3i local_d8;
  byte local_c8 [12];
  int local_bc;
  int local_b8;
  CVector3f local_b0;
  int local_a4;
  float local_a0 [5];
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  byte local_74 [12];
  float local_68;
  float local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3f local_48 [2];
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
              (DAT_005ae704,(CVector3f *)local_74);
    local_74._0_4_ = (float)local_74._0_4_ - *(float *)(param_1 + 0x104);
    local_74._4_4_ = (float)local_74._4_4_ - *(float *)(param_1 + 0x108);
    local_74._8_4_ = (float)local_74._8_4_ - *(float *)(param_1 + 0x10c);
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       ((CMatrix3x3f *)(param_1 + 0x110),&local_b0,(CVector3f *)local_74);
    if ((CVector3f *)local_74 != pCVar2) {
      local_74._0_4_ = pCVar2->x;
      local_74._4_4_ = pCVar2->y;
      local_74._8_4_ = pCVar2->z;
    }
    if ((float)local_74._8_4_ <= *(float *)(param_1 + 0x100)) {
      local_30 = (float)local_74._4_4_ * (float)local_74._4_4_;
      local_24 = (float *)((((float)local_74._8_4_ * (float)18) /
                           *(float *)(param_1 + 0x138)) * (float)2);
      local_28 = (float)local_74._0_4_ * (float)local_74._0_4_ + local_30;
      local_2c = (float)local_24 * (float)local_24;
      if (local_28 <= local_2c) {
        local_148 = 1.0 - local_28 / local_2c;
        engine_drender_cpp_FUN_00460d10(DAT_005ae704);
        local_a4 = local_ec;
        local_a0[(uint)bVar3 * -2] = (&fStack_e8)[(uint)bVar3 * -2];
        local_a0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             *(float *)((int)&CStack_e4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_f8 = (float)local_a4 * _DAT_0059c038;
        local_f4 = (float)(int)local_a0[0] * _DAT_0059c038;
        local_f0 = (float)(int)local_a0[1] * _DAT_0059c038;
        local_80 = local_f8 - *(float *)(param_1 + 0x104);
        local_7c = local_f4 - *(float *)(param_1 + 0x108);
        local_78 = local_f0 - *(float *)(param_1 + 0x10c);
        local_140 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
        if (0.0 < local_140) {
          fVar1 = 1.0 / local_140;
          local_80 = local_80 * fVar1;
          local_7c = local_7c * fVar1;
          local_78 = local_78 * fVar1;
          local_8c.x = 0.0;
          local_8c.y = 0.0;
          local_8c.z = 1.0;
          local_14 = (float)(0xffff - _DAT_01c038f4);
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                             ((CMatrix3x3f *)(param_1 + 0x110),(CVector3f *)local_c8,&local_8c);
          if (0.0 < (local_78 * pCVar2->z + local_80 * pCVar2->x + local_7c * pCVar2->y) * local_14
                    * 4.6004211948482694e-315._0_4_) {
            this_ptr = (CDemonRenderer *)0x44fcc3;
            pCVar5 = DAT_005ae704;
            dVar4 = round((double)(local_148 * (float)65535));
            local_20 = (int)ROUND(dVar4);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr,(int)pCVar5);
            local_1c = 0;
            texture = (SMRGLTextureBasic *)&DAT_005ae488;
            local_24 = (float *)(param_1 + 0x104);
            do {
              local_18 = local_1c;
              fVar1 = (float)local_1c * 5.1299985056169162e-315._0_4_ * *(float *)(param_1 + 0x100);
              local_114 = *(float *)(param_1 + 0x118);
              local_148 = fVar1 * (float)0.25;
              local_110 = *(float *)(param_1 + 0x124);
              local_108 = local_114 * local_148;
              local_104 = local_110 * local_148;
              local_10c = *(float *)(param_1 + 0x130);
              local_100 = local_10c * local_148;
              local_140 = (float)texture[1].base.count * (float)0.5 *
                          ((fVar1 * (float)18) / *(float *)(param_1 + 0x138)) *
                          (float)2;
              local_74._8_4_ = *local_24 + local_108;
              local_68 = local_24[1] + local_104;
              local_64 = local_24[2] + local_100;
              if (&CStack_e4 != (CVector3f *)(local_74 + 8)) {
                CStack_e4.x = (float)local_74._8_4_;
                CStack_e4.y = local_68;
                CStack_e4.z = local_64;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                        (DAT_005ae704,&CStack_e4);
              engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                        (DAT_005ae704,local_48);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                        (DAT_005ae704,local_48,(CVector3f *)0x0);
              local_a0[3] = 0.0;
              local_a0[1] = local_140;
              local_a0[2] = local_140;
              local_d8.x = (int)ROUND(local_140 * _DAT_0059c030);
              local_d8.y = (int)ROUND(local_140 * _DAT_0059c030);
              local_d8.z = (int)ROUND(_DAT_0059c030 * 0.0);
              engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                        (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_d8);
              local_a0[1] = -local_a0[1];
              local_60.x = (int)ROUND(local_a0[1] * _DAT_0059c030);
              local_60.y = (int)ROUND(local_a0[2] * _DAT_0059c030);
              local_60.z = (int)ROUND(local_a0[3] * _DAT_0059c030);
              engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                        (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_60);
              local_a0[2] = -local_a0[2];
              local_54.x = (int)ROUND(local_a0[1] * _DAT_0059c030);
              local_54.y = (int)ROUND(local_a0[2] * _DAT_0059c030);
              local_54.z = (int)ROUND(local_a0[3] * _DAT_0059c030);
              engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                        (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_54);
              local_a0[1] = -local_a0[1];
              local_c8._8_4_ = (uint)ROUND(local_a0[1] * _DAT_0059c030);
              local_bc = (int)ROUND(local_a0[2] * _DAT_0059c030);
              local_b8 = (int)ROUND(local_a0[3] * _DAT_0059c030);
              engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                        (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,
                         (CVector3i *)(local_c8 + 8));
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
              pCVar5 = DAT_005ae704;
              local_13c.base.count = 4;
              local_13c.surface_normal.D.i = 0;
              local_13c.surface_normal.C.i = 0;
              local_13c.surface_normal.B.i = 0;
              local_13c.surface_normal.A.i = 0;
              local_124 = 0;
              DAT_005ae704->vertex_buffer_ptr->u = *(int *)texture[1].texture_name << 0x10;
              pCVar5->vertex_buffer_ptr->v = *(int *)(texture[1].texture_name + 4) << 0x10;
              pCVar5->vertex_buffer_ptr->a = local_20;
              pCVar5->vertex_buffer_ptr->r = 0xffff;
              pCVar5->vertex_buffer_ptr->g = 0xffff;
              pCVar5->vertex_buffer_ptr->b = 0xffff;
              local_120 = 1;
              pCVar5->vertex_buffer_ptr[1].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              pCVar5->vertex_buffer_ptr[1].v = *(int *)(texture[1].texture_name + 4) << 0x10;
              pCVar5->vertex_buffer_ptr[1].a = local_20;
              pCVar5->vertex_buffer_ptr[1].r = 0xffff;
              pCVar5->vertex_buffer_ptr[1].g = 0xffff;
              pCVar5->vertex_buffer_ptr[1].b = 0xffff;
              local_11c = 2;
              pCVar5->vertex_buffer_ptr[2].u = *(int *)(texture[1].texture_name + 8) << 0x10;
              pCVar5->vertex_buffer_ptr[2].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              pCVar5->vertex_buffer_ptr[2].a = local_20;
              pCVar5->vertex_buffer_ptr[2].r = 0xffff;
              pCVar5->vertex_buffer_ptr[2].g = 0xffff;
              pCVar5->vertex_buffer_ptr[2].b = 0xffff;
              local_118 = 3;
              pCVar5->vertex_buffer_ptr[3].u = *(int *)texture[1].texture_name << 0x10;
              pCVar5->vertex_buffer_ptr[3].v = *(int *)(texture[1].texture_name + 0xc) << 0x10;
              pCVar5->vertex_buffer_ptr[3].a = local_20;
              pCVar5->vertex_buffer_ptr[3].r = 0xffff;
              pCVar5->vertex_buffer_ptr[3].g = 0xffff;
              pCVar5->vertex_buffer_ptr[3].b = 0xffff;
              engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0(pCVar5,&local_13c);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
              local_1c = local_1c + 1;
              texture = texture + 2;
            } while (local_1c < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
            return;
          }
        }
      }
    }
  }
  return;
}
