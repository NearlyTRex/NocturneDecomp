// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 00475878] [00475894, 004758c3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  float fVar4;
  ushort *puVar5;
  ushort *extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  unkbyte10 Var11;
  float10 fVar12;
  double dVar13;
  float unaff_retaddr;
  float in_stack_00000008;
  float in_stack_0000000c;
  float local_d0;
  SMRGLHeaderPrimitive local_ac;
  byte local_94 [8];
  byte auStack_8c [12];
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  byte local_58 [12];
  int local_4c;
  int local_48;
  int local_3c;
  int local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)(local_94 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)auStack_8c,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,g_LightTextures)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  fVar7 = (float10)1 * ((float10)18 / (float10)(this_ptr->base).base.projection_scale)
          * (float10)0.0625;
  local_d0 = (float)fVar7;
  Var11 = fpatan(fVar7,(float10)1);
  fVar7 = (float10)fcos(Var11);
  local_38 = 0;
  local_34 = (float)fVar7;
  do {
    fVar7 = (float10)local_38 * (float10)0.0625f * (float10)3.1415926535000001 *
            (float10)2;
    fVar8 = (float10)fsin(fVar7);
    fVar12 = (float10)(local_38 + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
             (float10)2;
    fVar9 = (float10)fsin(fVar12);
    fVar7 = (float10)fcos(fVar7);
    fVar12 = (float10)fcos(fVar12);
    iVar3 = this_ptr->shadow_map_height / 2;
    fVar10 = (float10)local_d0;
    local_24 = (float)(fVar7 * fVar10);
    fVar7 = (float10)iVar3 - (float10)iVar3 * (float10)local_24;
    iVar6 = this_ptr->shadow_map_width;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */(this_ptr->shadow_map_height >> 0x1f,iVar3));
    local_48 = (int)ROUND(fVar7);
    local_24 = (float)(fVar8 * fVar10);
    fVar9 = fVar9 * fVar10;
    fVar7 = (float10)iVar3 * (float10)local_24 + (float10)iVar3;
    fVar12 = fVar12 * fVar10;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),local_48 * iVar6));
    local_3c = (int)ROUND(fVar7);
    puVar5 = this_ptr->shadow_depth_buffer + SUB84 /* extract 2-byte value */(dVar13,0) + local_3c;
    local_28 = (float)fVar9;
    local_24 = (float)fVar12;
    iVar6 = 0;
    do {
      local_34 = (this_ptr->base).max_distance;
      fVar4 = (float)iVar6 * local_2c * local_34 * 0.25f;
      fVar1 = (float)(iVar6 + 1);
      fVar2 = (float)(int)fVar1 * local_2c * local_34 * 0.25f;
      fVar8 = ((float10)local_34 - (float10)fVar2) * ((float10)1 / (float10)local_34) *
              (float10)1024;
      fVar7 = (float10)fVar4;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(puVar5,fVar1));
      crt_math_c_round_FUN_005fe6b0(dVar13);
      local_74 = fVar4;
      if (fVar7 < (float10)fVar4) {
        local_74 = fVar1;
      }
      local_7c = local_74 * local_18;
      local_78 = local_74 * fStack_14;
      local_94._0_4_ = (uint)ROUND(local_7c * 256f);
      local_94._4_4_ = (uint)ROUND(local_78 * 256f);
      auStack_8c._0_4_ = (uint)ROUND(local_74 * 256f);
      local_d0 = 6.550934e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_94);
      if (in_stack_00000008 < fVar4) {
        fVar4 = in_stack_00000008;
      }
      local_78 = fVar4 * local_1c;
      local_74 = fVar4 * local_18;
      auStack_8c._8_4_ = (uint)ROUND(local_78 * 256f);
      local_80 = (int)ROUND(local_74 * 256f);
      local_7c = (float)(int)ROUND(fVar4 * 256f);
      fStack_70 = fVar4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(auStack_8c + 8));
      fVar4 = unaff_retaddr;
      if (in_stack_00000008 < unaff_retaddr) {
        fVar4 = in_stack_00000008;
      }
      local_74 = fVar4 * local_18;
      fStack_70 = fVar4 * fStack_14;
      local_58._8_4_ = (uint)ROUND(local_74 * 256f);
      local_4c = (int)ROUND(fStack_70 * 256f);
      local_48 = (int)ROUND(fVar4 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(local_58 + 8));
      fVar4 = in_stack_00000008;
      if (in_stack_0000000c < in_stack_00000008) {
        fVar4 = in_stack_0000000c;
      }
      fStack_70 = fVar4 * (float)(int)ROUND(fVar8);
      fStack_6c = fVar4 * fVar2;
      local_58._0_4_ = (uint)ROUND(fStack_70 * 256f);
      local_58._4_4_ = (uint)ROUND(fStack_6c * 256f);
      local_58._8_4_ = (uint)ROUND(fVar4 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_58);
      this_ptr_00 = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = unaff_retaddr;
      this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr->color = 0xffff;
      this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].w_recip = unaff_retaddr;
      this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar1;
      this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar1;
      this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
      iVar6 = iVar6 + 1;
      this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_ac.surface_normal.D = 0;
      local_ac.surface_normal.C = 0;
      local_ac.base.count = 4;
      local_ac.surface_normal.B = 0;
      local_94._4_4_ = 1;
      local_ac.surface_normal.A = 0;
      local_94._0_4_ = 0;
      auStack_8c._4_4_ = 3;
      auStack_8c._0_4_ = 2;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,&local_ac);
      puVar5 = extraout_EDX;
    } while (iVar6 < 4);
    fStack_14 = (float)((int)fStack_14 + 1);
  } while ((int)fStack_14 < 0x10);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
