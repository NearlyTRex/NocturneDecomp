// Name: core_dlight.cpp_renderConeLightGeometry_FUN_0044d060
// Address: 0044d060
// Address Range: [[0044d060, 0044d563]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_0044d060(CVector3f *position,CVector3f *rotation,float fov,float falloff)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_0044d060(CVector3f *position,CVector3f *rotation,float fov,float falloff)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float10 fVar10;
  ulonglong uVar11;
  SMRGLHeaderPrimitive local_b8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60 [2];
  float local_40;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,rotation,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0060afc8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  local_30 = 1.0 / falloff;
  iVar1 = 1;
  do {
    fVar4 = (float10)iVar1 * ((float10)_DAT_005cf577 / (float10)fov) * (float10)_DAT_005cf557;
    Var9 = fpatan(fVar4,(float10)1);
    fVar5 = (float10)fcos(Var9);
    iVar2 = 0;
    local_1c = (float)(fVar5 * (float10)falloff);
    do {
      fVar5 = (float10)iVar2 * (float10)_DAT_005cf55f * (float10)_DAT_005cf563 *
              (float10)_DAT_005cf567;
      iVar2 = iVar2 + 1;
      fVar6 = (float10)fsin(fVar5);
      fVar10 = (float10)iVar2 * (float10)_DAT_005cf55f * (float10)_DAT_005cf563 *
               (float10)_DAT_005cf567;
      fVar7 = (float10)fsin(fVar10);
      fVar5 = (float10)fcos(fVar5);
      fVar10 = (float10)fcos(fVar10);
      fVar8 = (float10)(float)fVar4;
      local_2c = (float)(fVar6 * fVar8);
      local_28 = (float)(fVar5 * fVar8);
      local_24 = (float)(fVar7 * fVar8);
      local_20 = (float)(fVar10 * fVar8);
      local_88 = local_1c * 0.0;
      local_90 = local_88 * local_2c;
      local_8c = local_88 * local_28;
      fVar5 = ((float10)falloff - (float10)local_1c) * (float10)local_30 * (float10)_DAT_005cf56f;
      fVar6 = ((float10)falloff - (float10)local_88) * (float10)local_30 * (float10)_DAT_005cf56f;
      local_40 = local_88;
      local_18 = iVar2;
      round();
      local_34 = (int)ROUND(fVar5);
      uVar11 = round();
      pfVar3 = (float *)uVar11;
      local_38 = (int)ROUND(fVar6);
      local_84.x = (int)ROUND(*pfVar3 * _DAT_005f5050);
      local_84.y = (int)ROUND(pfVar3[1] * _DAT_005f5050);
      local_84.z = (int)ROUND(pfVar3[2] * _DAT_005f5050);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)*(uint *)((ulonglong)uVar11 >> 0x20),&local_84);
      local_90 = local_40 * local_24;
      local_8c = local_40 * local_20;
      local_88 = local_40;
      local_78.x = (int)ROUND(local_90 * _DAT_005f5050);
      local_78.y = (int)ROUND(local_8c * _DAT_005f5050);
      local_78.z = (int)ROUND(local_40 * _DAT_005f5050);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_78);
      local_90 = local_1c * local_24;
      local_8c = local_1c * local_20;
      local_88 = local_1c;
      local_6c.x = (int)ROUND(local_90 * _DAT_005f5050);
      local_6c.y = (int)ROUND(local_8c * _DAT_005f5050);
      local_6c.z = (int)ROUND(local_1c * _DAT_005f5050);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_6c);
      local_90 = local_1c * local_2c;
      local_8c = local_1c * local_28;
      local_88 = local_1c;
      local_60[0].x = (int)ROUND(local_90 * _DAT_005f5050);
      local_60[0].y = (int)ROUND(local_8c * _DAT_005f5050);
      local_60[0].z = (int)ROUND(local_1c * _DAT_005f5050);
      engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,local_60)
      ;
      this_ptr = DAT_0060b280;
      DAT_0060b280->vertex_buffer_ptr->a = local_38;
      this_ptr->vertex_buffer_ptr->b = 0xffff;
      this_ptr->vertex_buffer_ptr->g = 0xffff;
      this_ptr->vertex_buffer_ptr->r = 0xffff;
      this_ptr->vertex_buffer_ptr->u = 0xf80000;
      this_ptr->vertex_buffer_ptr->v = 0xf80000;
      this_ptr->vertex_buffer_ptr[1].a = local_38;
      this_ptr->vertex_buffer_ptr[1].b = 0xffff;
      this_ptr->vertex_buffer_ptr[1].g = 0xffff;
      this_ptr->vertex_buffer_ptr[1].r = 0xffff;
      this_ptr->vertex_buffer_ptr[1].u = 0x80000;
      this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
      this_ptr->vertex_buffer_ptr[2].a = local_34;
      this_ptr->vertex_buffer_ptr[2].b = 0xffff;
      this_ptr->vertex_buffer_ptr[2].g = 0xffff;
      this_ptr->vertex_buffer_ptr[2].r = 0xffff;
      this_ptr->vertex_buffer_ptr[2].u = 0x80000;
      this_ptr->vertex_buffer_ptr[2].v = 0x80000;
      this_ptr->vertex_buffer_ptr[3].a = local_34;
      this_ptr->vertex_buffer_ptr[3].b = 0xffff;
      this_ptr->vertex_buffer_ptr[3].g = 0xffff;
      this_ptr->vertex_buffer_ptr[3].r = 0xffff;
      this_ptr->vertex_buffer_ptr[3].u = 0xf80000;
      this_ptr->vertex_buffer_ptr[3].v = 0x80000;
      local_b8.base.count = 4;
      local_b8.surface_normal.D.i = 0;
      local_b8.surface_normal.C.i = 0;
      local_b8.surface_normal.B.i = 0;
      local_b8.surface_normal.A.i = 0;
      local_94 = 3;
      local_a0 = 0;
      local_9c = 1;
      local_98 = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(this_ptr,&local_b8);
    } while (iVar2 < 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
