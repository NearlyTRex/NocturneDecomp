// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 00475878] [00475894, 004758c3]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047586d) */

void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  float local_e4;
  CVector3i local_c8;
  CVector3i local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_98 [8];
  int iStack_90;
  CVector3i aCStack_8c [3];
  int iStack_64;
  int local_60;
  int iStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  if (this_ptr->unk2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)(local_98 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(local_98 + 4),(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_LightTextures);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  do {
    fVar5 = (float10)1 *
            ((float10)18 / (float10)(this_ptr->base).base.projection_scale) *
            (float10)0.0625;
    local_e4 = (float)fVar5;
    Var9 = fpatan(fVar5,(float10)1);
    fVar5 = (float10)fcos(Var9);
    local_4c = 0.0;
    local_48 = (float)fVar5;
    do {
      fVar5 = (float10)(int)local_4c * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar6 = (float10)fsin(fVar5);
      fVar10 = (float10)((int)local_4c + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
               (float10)2;
      fVar7 = (float10)fsin(fVar10);
      fVar5 = (float10)fcos(fVar5);
      fVar10 = (float10)fcos(fVar10);
      local_1c = this_ptr->shadow_map_width / 2;
      local_18 = this_ptr->shadow_map_height / 2;
      fVar8 = (float10)local_e4;
      local_38 = (float)(fVar5 * fVar8);
      iVar4 = this_ptr->shadow_map_width;
      dVar11 = round((double)((float)local_18 - (float)local_18 * local_38))
      ;
      iStack_64 = (int)ROUND(dVar11);
      iVar4 = iStack_64 * iVar4;
      local_40 = (float)(fVar6 * fVar8);
      fVar10 = fVar10 * fVar8;
      dVar11 = round((double)((float)local_20 * local_40 + (float)local_20))
      ;
      local_60 = (int)ROUND(dVar11);
      local_34 = (float)this_ptr->shadow_depth_buffer[iVar4 + local_60] * (float)0.00390625;
      local_4c = (float)(fVar7 * fVar8);
      local_48 = (float)fVar10;
      iVar4 = 0;
      local_30 = local_34;
      do {
        local_58 = (this_ptr->base).max_distance;
        local_28 = (float)iVar4 * local_50 * local_58 * 0.25f;
        fVar3 = 1.0 / local_58;
        local_20 = iVar4 + 1;
        local_2c = (float)local_20 * local_50 * local_58 * 0.25f;
        fVar2 = local_58 - local_2c;
        fVar1 = (float)1024;
        fVar5 = (float10)local_28;
        dVar11 = round((double)((local_58 - local_28) * fVar3 * fVar1));
        dVar12 = round((double)(fVar2 * fVar3 * fVar1));
        local_44 = (float)(int)ROUND(dVar11);
        local_40 = (float)(int)ROUND(dVar12);
        local_a8 = local_38;
        if (fVar5 < (float10)local_38) {
          local_a8 = local_30;
        }
        local_b0 = local_a8 * local_4c;
        local_ac = local_a8 * local_48;
        local_c8.x = (int)ROUND(local_b0 * 256.0f);
        local_c8.y = (int)ROUND(local_ac * 256.0f);
        local_c8.z = (int)ROUND(local_a8 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_c8);
        local_a8 = local_3c;
        if (local_30 < local_3c) {
          local_a8 = local_30;
        }
        local_b0 = local_a8 * fStack_54;
        local_ac = local_a8 * local_50;
        local_bc.x = (int)ROUND(local_b0 * 256.0f);
        local_bc.y = (int)ROUND(local_ac * 256.0f);
        local_bc.z = (int)ROUND(local_a8 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_bc);
        local_a8 = local_3c;
        if (local_34 < local_3c) {
          local_a8 = local_34;
        }
        local_b0 = local_a8 * fStack_54;
        local_ac = local_a8 * local_50;
        aCStack_8c[0].x = (int)ROUND(local_b0 * 256.0f);
        aCStack_8c[0].y = (int)ROUND(local_ac * 256.0f);
        aCStack_8c[0].z = (int)ROUND(local_a8 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,aCStack_8c);
        local_a8 = local_38;
        if (local_34 < local_38) {
          local_a8 = local_34;
        }
        local_b0 = local_a8 * local_4c;
        local_ac = local_a8 * local_48;
        local_98._0_4_ = (uint)ROUND(local_b0 * 256.0f);
        local_98._4_4_ = (uint)ROUND(local_ac * 256.0f);
        iStack_90 = (int)ROUND(local_a8 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)local_98);
        this_ptr_00 = g_CDemonRendererPtr2;
        g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = local_44;
        this_ptr_00->vertex_buffer_ptr->fog = 0xffff;
        this_ptr_00->vertex_buffer_ptr->color = 0xffff;
        this_ptr_00->vertex_buffer_ptr->light = 0xffff;
        this_ptr_00->vertex_buffer_ptr->u = 0xf80000;
        this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
        this_ptr_00->vertex_buffer_ptr[1].w_recip = local_44;
        this_ptr_00->vertex_buffer_ptr[1].fog = 0xffff;
        this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
        this_ptr_00->vertex_buffer_ptr[1].light = 0xffff;
        this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
        this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
        this_ptr_00->vertex_buffer_ptr[2].w_recip = local_40;
        this_ptr_00->vertex_buffer_ptr[2].fog = 0xffff;
        this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
        this_ptr_00->vertex_buffer_ptr[2].light = 0xffff;
        this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
        this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
        this_ptr_00->vertex_buffer_ptr[3].w_recip = local_40;
        this_ptr_00->vertex_buffer_ptr[3].fog = 0xffff;
        this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
        this_ptr_00->vertex_buffer_ptr[3].light = 0xffff;
        this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
        iVar4 = iVar4 + 1;
        this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
        local_e4 = 0.0;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (this_ptr_00,(SMRGLHeaderPrimitive *)&stack0xffffff10);
      } while (iVar4 < 4);
      iStack_5c = iStack_5c + 1;
    } while (iStack_5c < 0x10);
  } while( true );
}
