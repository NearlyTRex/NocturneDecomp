// Name: core_dlight.cpp_FUN_0044b020
// Address: 0044b020
// Address Range: [[0044b020, 0044b04f] [0044b051, 0044b5a7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

{
  UVector3 *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  uint uVar4;
  byte bVar5;
  double dVar6;
  float afStackY_1094 [996];
  CVector3f *translation;
  int iStack_f8;
  CVector3i local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [6];
  float local_90;
  CVector3i local_8c;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  byte local_58 [12];
  int local_4c;
  int local_48;
  CVector3i local_44;
  int local_34;
  int local_30;
  float local_2c [5];
  float local_18;
  
  bVar5 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&world_position->f);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670(DAT_0060b280,&local_64);
  translation = (CVector3f *)0x0;
  local_70.x = local_64.x;
  *(uint *)((int)&local_70 + (uint)bVar5 * -8 + 4) =
       *(uint *)(local_58 + (uint)bVar5 * -8 + -8);
  *(uint *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)(local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_70,translation);
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
            (DAT_0060b280,(CVector3i *)local_58);
  local_34 = local_58._0_4_;
  (&local_30)[(uint)bVar5 * -2] = *(int *)(local_58 + (uint)bVar5 * -8 + 4);
  local_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       *(float *)(local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fVar2 = (float)_DAT_005cf467;
  local_18 = local_2c[0];
  local_7c = (float)local_34 * fVar2;
  local_ac = (world_position->f).x - (float)local_34 * fVar2;
  local_78 = (float)local_30 * fVar2;
  local_74 = (float)(int)local_2c[0] * fVar2;
  local_a8[0] = (this_ptr->base).base.position.f.y - (float)local_30 * fVar2;
  local_a8[1] = (this_ptr->base).base.position.f.z - (float)(int)local_2c[0] * fVar2;
  local_a8[5] = local_ac;
  (&local_90)[(uint)bVar5 * -2] = local_a8[(uint)bVar5 * -2];
  *(float *)((int)&local_8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       local_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (local_a8 + 2 != local_a8 + 5) {
    local_a8[2] = local_a8[5];
    local_a8[3] = local_90;
    local_a8[4] = (float)local_8c.x;
  }
  local_b8 = (this_ptr->base).base.rotation_matrix.m[0].z;
  local_b4 = (this_ptr->base).base.rotation_matrix.m[1].z;
  local_b0 = (this_ptr->base).base.rotation_matrix.m[2].z;
  local_2c[3] = SQRT(local_a8[4] * local_a8[4] +
                     local_a8[2] * local_a8[2] + local_a8[3] * local_a8[3]);
  if (local_2c[3] <= 0.0) {
    local_a8[3] = 0.0;
    local_a8[2] = 0.0;
    local_a8[4] = 0.0;
  }
  else {
    fVar2 = 1.0 / local_2c[3];
    local_a8[2] = local_a8[2] * fVar2;
    local_a8[3] = local_a8[3] * fVar2;
    local_a8[4] = local_a8[4] * fVar2;
  }
  local_2c[1] = -(local_a8[4] * local_b0 + local_a8[2] * local_b8 + local_a8[3] * local_b4) *
                this_ptr->bloom_intensity;
  iVar3 = _DAT_01c38aec / 2;
  dVar6 = round
                    ((double)(local_2c[1] * local_2c[1] * local_2c[1] * local_2c[1] *
                             (float)_DAT_005cf46f));
  local_2c[1] = (float)(int)ROUND(dVar6);
  lVar1 = (longlong)(0xffff - iVar3) * (longlong)(int)local_2c[1];
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_2c[0]) {
    local_44.x = (int)ROUND(_DAT_005f5050 * 1.0);
    local_44.y = (int)ROUND(_DAT_005f5050 * 1.0);
    local_44.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_44);
    local_c8.x = (int)ROUND(_DAT_005f5050 * -1.0);
    local_c8.y = (int)ROUND(_DAT_005f5050 * 1.0);
    local_c8.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_c8);
    local_8c.x = (int)ROUND(_DAT_005f5050 * -1.0);
    local_8c.y = (int)ROUND(_DAT_005f5050 * -1.0);
    local_8c.z = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_8c);
    local_58._8_4_ = (uint)ROUND(_DAT_005f5050 * 1.0);
    local_4c = (int)ROUND(_DAT_005f5050 * -1.0);
    local_48 = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)(local_58 + 8));
    this_ptr_00 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->a = uVar4;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[1].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].a = uVar4;
    this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].a = uVar4;
    this_ptr_00->vertex_buffer_ptr->r = 0xffff;
    this_ptr_00->vertex_buffer_ptr->g = 0xffff;
    this_ptr_00->vertex_buffer_ptr->b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_0060afe0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    iStack_f8 = 4;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
              (DAT_0060b280,(SMRGLHeaderPrimitive *)&stack0xffffff04);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(this_ptr);
  return;
}
