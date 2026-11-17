// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00464990
// Address: 00464990
// Address Range: [[00464990, 00465053]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00464990(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00464990(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  unkbyte10 Var12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  UIntegerFloat aUStackY_109c [997];
  uint uStack_100;
  CDemonRenderer *pCVar16;
  int iVar17;
  CVector3f *euler_angles;
  CVector3f *translation;
  UIntegerFloat UStack_f0;
  UIntegerFloat UStack_ec;
  UIntegerFloat UStack_e8;
  UIntegerFloat UStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  CVector3i aCStack_d0 [2];
  CVector3f CStack_b4;
  byte auStack_a8 [12];
  int iStack_9c;
  int iStack_98;
  CVector3i CStack_94;
  CVector3i aCStack_88 [4];
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  if (this_ptr->volumetric_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (g_CDemonRenderer_PTR_00612560,&(this_ptr->base).base.position.f);
    core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840
              (&(this_ptr->base).base.rotation_matrix,&CStack_b4);
    translation = (CVector3f *)0x0;
    euler_angles = (CVector3f *)auStack_a8;
    auStack_a8._0_4_ = CStack_b4.x;
    *(uint *)(auStack_a8 + (uint)bVar7 * -8 + 4) =
         *(uint *)(auStack_a8 + (uint)bVar7 * -8 + -8);
    pCVar16 = g_CDemonRenderer_PTR_00612560;
    *(uint *)(auStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)(auStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
    uStack_100 = 0x4649f6;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (pCVar16,euler_angles,translation);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,&g_SLightGlowTable_006122a8.fuzz);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,1);
    UStack_ec.i = 1;
    do {
      fVar8 = (float10)UStack_ec.i *
              ((float10)18 / (float10)(this_ptr->base).base.focal_length) *
              (float10)0.0625;
      UStack_f0.f = (float)fVar8;
      Var12 = fpatan(fVar8,(float10)1);
      fVar8 = (float10)fcos(Var12);
      iVar6 = 0;
      fStack_48 = (float)fVar8;
      do {
        fVar8 = (float10)iVar6 * (float10)0.0625f * (float10)3.141593f *
                (float10)2;
        fVar9 = (float10)fsin(fVar8);
        fVar13 = (float10)(iVar6 + 1) * (float10)0.0625f * (float10)3.141593f *
                 (float10)2;
        fVar10 = (float10)fsin(fVar13);
        fVar8 = (float10)fcos(fVar8);
        fVar13 = (float10)fcos(fVar13);
        iStack_1c = this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1;
        iStack_18 = this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1;
        fVar11 = (float10)UStack_f0.f;
        fStack_38 = (float)(fVar8 * fVar11);
        iVar5 = this_ptr->shadow_map_width;
        dVar14 = round
                           ((double)((float)iStack_18 - (float)iStack_18 * fStack_38));
        iStack_58 = (int)ROUND(dVar14);
        iVar5 = iStack_58 * iVar5;
        fStack_40 = (float)(fVar9 * fVar11);
        dVar14 = round
                           ((double)((float)iStack_20 * fStack_40 + (float)iStack_20));
        iStack_58 = (int)ROUND(dVar14);
        fStack_34 = (float)this_ptr->shadow_depth_buffer[iVar5 + iStack_58] *
                    (float)0.00390625;
        iVar5 = 0;
        fStack_4c = (float)(fVar10 * fVar11);
        fStack_48 = (float)(fVar13 * fVar11);
        fStack_30 = fStack_34;
        do {
          fStack_54 = (this_ptr->base).max_distance;
          fVar1 = (float)iVar5 * fStack_50 * fStack_54 * 0.25f;
          fVar4 = 1.0 / fStack_54;
          iStack_20 = iVar5 + 1;
          fStack_2c = (float)iStack_20 * fStack_50 * fStack_54 * 0.25f;
          fVar3 = fStack_54 - fStack_2c;
          fVar2 = (float)1024;
          iVar17 = 0x464c65;
          fStack_28 = fVar1;
          dVar14 = round((double)((fStack_54 - fVar1) * fVar4 * fVar2));
          uStack_100 = 0x464c6c;
          dVar15 = round((double)(fVar3 * fVar4 * fVar2));
          fStack_40 = (float)(int)ROUND(dVar14);
          iStack_44 = (int)ROUND(dVar15);
          auStack_a8._4_4_ = fStack_38;
          if (fVar1 < fStack_38) {
            auStack_a8._4_4_ = fStack_30;
          }
          CStack_b4.z = (float)auStack_a8._4_4_ * fStack_4c;
          auStack_a8._0_4_ = (float)auStack_a8._4_4_ * fStack_48;
          aCStack_d0[0].x = (int)ROUND(CStack_b4.z * 256.0f);
          aCStack_d0[0].y = (int)ROUND((float)auStack_a8._0_4_ * 256.0f);
          aCStack_d0[0].z = (int)ROUND((float)auStack_a8._4_4_ * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_00580173
                    (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,aCStack_d0)
          ;
          auStack_a8._4_4_ = fStack_3c;
          if (fStack_30 < fStack_3c) {
            auStack_a8._4_4_ = fStack_30;
          }
          CStack_b4.z = (float)auStack_a8._4_4_ * fStack_54;
          auStack_a8._0_4_ = (float)auStack_a8._4_4_ * fStack_50;
          auStack_a8._8_4_ = (uint)ROUND(CStack_b4.z * 256.0f);
          iStack_9c = (int)ROUND((float)auStack_a8._0_4_ * 256.0f);
          iStack_98 = (int)ROUND((float)auStack_a8._4_4_ * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_00580173
                    (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,
                     (CVector3i *)(auStack_a8 + 8));
          auStack_a8._4_4_ = fStack_3c;
          if (fStack_34 < fStack_3c) {
            auStack_a8._4_4_ = fStack_34;
          }
          CStack_b4.z = (float)auStack_a8._4_4_ * fStack_54;
          auStack_a8._0_4_ = (float)auStack_a8._4_4_ * fStack_50;
          CStack_94.x = (int)ROUND(CStack_b4.z * 256.0f);
          CStack_94.y = (int)ROUND((float)auStack_a8._0_4_ * 256.0f);
          CStack_94.z = (int)ROUND((float)auStack_a8._4_4_ * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_00580173
                    (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,
                     &CStack_94);
          auStack_a8._4_4_ = fStack_38;
          if (fStack_34 < fStack_38) {
            auStack_a8._4_4_ = fStack_34;
          }
          CStack_b4.z = (float)auStack_a8._4_4_ * fStack_4c;
          auStack_a8._0_4_ = (float)auStack_a8._4_4_ * fStack_48;
          aCStack_88[0].x = (int)ROUND(CStack_b4.z * 256.0f);
          aCStack_88[0].y = (int)ROUND((float)auStack_a8._0_4_ * 256.0f);
          aCStack_88[0].z = (int)ROUND((float)auStack_a8._4_4_ * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_00580173
                    (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,
                     aCStack_88);
          pCVar16 = g_CDemonRenderer_PTR_00612560;
          g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->a = (int)fStack_40;
          pCVar16->vertex_buffer_ptr->b = 0xffff;
          pCVar16->vertex_buffer_ptr->g = 0xffff;
          pCVar16->vertex_buffer_ptr->r = 0xffff;
          pCVar16->vertex_buffer_ptr->u = 0xf80000;
          pCVar16->vertex_buffer_ptr->v = 0xf80000;
          pCVar16->vertex_buffer_ptr[1].a = (int)fStack_40;
          pCVar16->vertex_buffer_ptr[1].b = 0xffff;
          pCVar16->vertex_buffer_ptr[1].g = 0xffff;
          pCVar16->vertex_buffer_ptr[1].r = 0xffff;
          pCVar16->vertex_buffer_ptr[1].u = 0x80000;
          pCVar16->vertex_buffer_ptr[1].v = 0xf80000;
          pCVar16->vertex_buffer_ptr[2].a = iStack_44;
          pCVar16->vertex_buffer_ptr[2].b = 0xffff;
          pCVar16->vertex_buffer_ptr[2].g = 0xffff;
          pCVar16->vertex_buffer_ptr[2].r = 0xffff;
          pCVar16->vertex_buffer_ptr[2].u = 0x80000;
          pCVar16->vertex_buffer_ptr[2].v = 0x80000;
          pCVar16->vertex_buffer_ptr[3].a = iStack_44;
          pCVar16->vertex_buffer_ptr[3].b = 0xffff;
          pCVar16->vertex_buffer_ptr[3].g = 0xffff;
          pCVar16->vertex_buffer_ptr[3].r = 0xffff;
          pCVar16->vertex_buffer_ptr[3].u = 0xf80000;
          iVar5 = iVar5 + 1;
          pCVar16->vertex_buffer_ptr[3].v = 0x80000;
          UStack_e4.i = 0;
          UStack_e8.i = 0;
          UStack_ec.i = 0;
          uStack_dc = 1;
          UStack_f0.i = 0;
          uStack_e0 = 0;
          uStack_d4 = 3;
          uStack_d8 = 2;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
                    (pCVar16,(SMRGLHeaderPrimitive *)&stack0xffffff08);
        } while (iVar5 < 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
    } while (iVar17 + 1 < 0x10);
    engine_drender_cpp_pop_FUN_004839a0();
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,0);
    return;
  }
  return;
}
