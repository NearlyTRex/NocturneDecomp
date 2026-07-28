// Name: core_dlight.cpp_FUN_00450c90
// Address: 00450c90
// Address Range: [[00450c90, 0045134c]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_00450c90(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004512f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_00450c90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *this_ptr;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  UIntegerFloat local_e4;
  CVector3i local_c8;
  CVector3i local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_98 [8];
  int local_90;
  CVector3i local_8c [3];
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
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
  
  if (*(int *)(param_1 + 0x1cbc) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 0x104));
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
            ((CMatrix3x3f *)(param_1 + 0x110),(CVector3f *)(local_98 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(local_98 + 4),(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005ae458);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  do {
    fVar6 = (float10)1 * ((float10)_DAT_0057c8be / (float10)*(float *)(param_1 + 0x138)) *
            (float10)_DAT_0057c886;
    local_e4.f = (float)fVar6;
    Var10 = fpatan(fVar6,(float10)1);
    fVar6 = (float10)fcos(Var10);
    local_4c = 0.0;
    local_48 = (float)fVar6;
    do {
      fVar6 = (float10)(int)local_4c * (float10)_DAT_0057c88e * (float10)_DAT_0057c896 *
              (float10)_DAT_0057c89e;
      fVar7 = (float10)fsin(fVar6);
      fVar11 = (float10)((int)local_4c + 1) * (float10)_DAT_0057c88e * (float10)_DAT_0057c896 *
               (float10)_DAT_0057c89e;
      fVar8 = (float10)fsin(fVar11);
      fVar6 = (float10)fcos(fVar6);
      fVar11 = (float10)fcos(fVar11);
      local_1c = *(int *)(param_1 + 0x1cc0) / 2;
      local_18 = *(int *)(param_1 + 0x1cc4) / 2;
      fVar9 = (float10)local_e4.f;
      local_38 = (float)(fVar6 * fVar9);
      iVar5 = *(int *)(param_1 + 0x1cc0);
      dVar12 = round((double)((float)local_18 - (float)local_18 * local_38))
      ;
      local_64 = (int)ROUND(dVar12);
      iVar5 = local_64 * iVar5;
      local_40 = (float)(fVar7 * fVar9);
      dVar12 = round((double)((float)local_20 * local_40 + (float)local_20))
      ;
      local_60 = (int)ROUND(dVar12);
      local_34 = (float)*(ushort *)(*(int *)(param_1 + 0x2f94) + (iVar5 + local_60) * 2) *
                 (float)_DAT_0057c8a6;
      local_4c = (float)(fVar8 * fVar9);
      local_48 = (float)(fVar11 * fVar9);
      iVar5 = 0;
      local_30 = local_34;
      do {
        local_58 = *(float *)(param_1 + 0x100);
        fVar1 = (float)iVar5 * local_50 * local_58 * _DAT_0057c8ae;
        fVar4 = 1.0 / local_58;
        local_20 = iVar5 + 1;
        local_2c = (float)local_20 * local_50 * local_58 * _DAT_0057c8ae;
        fVar3 = local_58 - local_2c;
        fVar2 = (float)_DAT_0057c8b6;
        local_28 = fVar1;
        dVar12 = round((double)((local_58 - fVar1) * fVar4 * fVar2));
        dVar13 = round((double)(fVar3 * fVar4 * fVar2));
        local_44 = (int)ROUND(dVar12);
        local_40 = (float)(int)ROUND(dVar13);
        local_a8 = local_38;
        if (fVar1 < local_38) {
          local_a8 = local_30;
        }
        local_b0 = local_a8 * local_4c;
        local_ac = local_a8 * local_48;
        local_c8.x = (int)ROUND(local_b0 * _DAT_0059c030);
        local_c8.y = (int)ROUND(local_ac * _DAT_0059c030);
        local_c8.z = (int)ROUND(local_a8 * _DAT_0059c030);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_c8);
        local_a8 = local_3c;
        if (local_30 < local_3c) {
          local_a8 = local_30;
        }
        local_b0 = local_a8 * local_54;
        local_ac = local_a8 * local_50;
        local_bc.x = (int)ROUND(local_b0 * _DAT_0059c030);
        local_bc.y = (int)ROUND(local_ac * _DAT_0059c030);
        local_bc.z = (int)ROUND(local_a8 * _DAT_0059c030);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_bc);
        local_a8 = local_3c;
        if (local_34 < local_3c) {
          local_a8 = local_34;
        }
        local_b0 = local_a8 * local_54;
        local_ac = local_a8 * local_50;
        local_8c[0].x = (int)ROUND(local_b0 * _DAT_0059c030);
        local_8c[0].y = (int)ROUND(local_ac * _DAT_0059c030);
        local_8c[0].z = (int)ROUND(local_a8 * _DAT_0059c030);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,local_8c);
        local_a8 = local_38;
        if (local_34 < local_38) {
          local_a8 = local_34;
        }
        local_b0 = local_a8 * local_4c;
        local_ac = local_a8 * local_48;
        local_98._0_4_ = (uint)ROUND(local_b0 * _DAT_0059c030);
        local_98._4_4_ = (uint)ROUND(local_ac * _DAT_0059c030);
        local_90 = (int)ROUND(local_a8 * _DAT_0059c030);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_98);
        this_ptr = DAT_005ae704;
        DAT_005ae704->vertex_buffer_ptr->a = local_44;
        this_ptr->vertex_buffer_ptr->b = 0xffff;
        this_ptr->vertex_buffer_ptr->g = 0xffff;
        this_ptr->vertex_buffer_ptr->r = 0xffff;
        this_ptr->vertex_buffer_ptr->u = 0xf80000;
        this_ptr->vertex_buffer_ptr->v = 0xf80000;
        this_ptr->vertex_buffer_ptr[1].a = local_44;
        this_ptr->vertex_buffer_ptr[1].b = 0xffff;
        this_ptr->vertex_buffer_ptr[1].g = 0xffff;
        this_ptr->vertex_buffer_ptr[1].r = 0xffff;
        this_ptr->vertex_buffer_ptr[1].u = 0x80000;
        this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
        this_ptr->vertex_buffer_ptr[2].a = (int)local_40;
        this_ptr->vertex_buffer_ptr[2].b = 0xffff;
        this_ptr->vertex_buffer_ptr[2].g = 0xffff;
        this_ptr->vertex_buffer_ptr[2].r = 0xffff;
        this_ptr->vertex_buffer_ptr[2].u = 0x80000;
        this_ptr->vertex_buffer_ptr[2].v = 0x80000;
        this_ptr->vertex_buffer_ptr[3].a = (int)local_40;
        this_ptr->vertex_buffer_ptr[3].b = 0xffff;
        this_ptr->vertex_buffer_ptr[3].g = 0xffff;
        this_ptr->vertex_buffer_ptr[3].r = 0xffff;
        this_ptr->vertex_buffer_ptr[3].u = 0xf80000;
        iVar5 = iVar5 + 1;
        this_ptr->vertex_buffer_ptr[3].v = 0x80000;
        local_e4.i = 0;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                  (this_ptr,(SMRGLHeaderPrimitive *)&stack0xffffff10);
      } while (iVar5 < 4);
      local_5c = local_5c + 1;
    } while (local_5c < 0x10);
  } while( true );
}
