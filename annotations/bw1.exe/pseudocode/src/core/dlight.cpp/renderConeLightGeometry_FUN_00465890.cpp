// Name: core_dlight.cpp_renderConeLightGeometry_FUN_00465890
// Address: 00465890
// Address Range: [[00465890, 00465d93]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00465890(CVector3f *position,CVector3f *rotation,float fov,float falloff)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00465890(CVector3f *position,CVector3f *rotation,float fov,float falloff)

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
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,rotation,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_006122a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  local_30 = 1.0 / falloff;
  iVar1 = 1;
  do {
    fVar4 = (float10)iVar1 * ((float10)_DAT_005d9294 / (float10)fov) * (float10)_DAT_005d9274;
    Var9 = fpatan(fVar4,(float10)1);
    fVar5 = (float10)fcos(Var9);
    iVar2 = 0;
    local_1c = (float)(fVar5 * (float10)falloff);
    do {
      fVar5 = (float10)iVar2 * (float10)_DAT_005d927c * (float10)_DAT_005d9280 *
              (float10)_DAT_005d9284;
      iVar2 = iVar2 + 1;
      fVar6 = (float10)fsin(fVar5);
      fVar10 = (float10)iVar2 * (float10)_DAT_005d927c * (float10)_DAT_005d9280 *
               (float10)_DAT_005d9284;
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
      fVar5 = ((float10)falloff - (float10)local_1c) * (float10)local_30 * (float10)_DAT_005d928c;
      fVar6 = ((float10)falloff - (float10)local_88) * (float10)local_30 * (float10)_DAT_005d928c;
      local_40 = local_88;
      local_18 = iVar2;
      round();
      local_34 = (int)ROUND(fVar5);
      uVar11 = round();
      pfVar3 = (float *)uVar11;
      local_38 = (int)ROUND(fVar6);
      local_84.x = (int)ROUND(*pfVar3 * _DAT_005febd0);
      local_84.y = (int)ROUND(pfVar3[1] * _DAT_005febd0);
      local_84.z = (int)ROUND(pfVar3[2] * _DAT_005febd0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)*(uint *)((ulonglong)uVar11 >> 0x20),&local_84);
      local_90 = local_40 * local_24;
      local_8c = local_40 * local_20;
      local_88 = local_40;
      local_78.x = (int)ROUND(local_90 * _DAT_005febd0);
      local_78.y = (int)ROUND(local_8c * _DAT_005febd0);
      local_78.z = (int)ROUND(local_40 * _DAT_005febd0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_78);
      local_90 = local_1c * local_24;
      local_8c = local_1c * local_20;
      local_88 = local_1c;
      local_6c.x = (int)ROUND(local_90 * _DAT_005febd0);
      local_6c.y = (int)ROUND(local_8c * _DAT_005febd0);
      local_6c.z = (int)ROUND(local_1c * _DAT_005febd0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_6c);
      local_90 = local_1c * local_2c;
      local_8c = local_1c * local_28;
      local_88 = local_1c;
      local_60[0].x = (int)ROUND(local_90 * _DAT_005febd0);
      local_60[0].y = (int)ROUND(local_8c * _DAT_005febd0);
      local_60[0].z = (int)ROUND(local_1c * _DAT_005febd0);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),local_60);
      this_ptr = DAT_00612560;
      *(int *)(DAT_00612560->vertex_buffer_ptr + 0x2c) = local_38;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x28) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x24) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x20) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x18) = 0xf80000;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x1c) = 0xf80000;
      *(int *)(this_ptr->vertex_buffer_ptr + 0x5c) = local_38;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x58) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x54) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x50) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x48) = 0x80000;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x4c) = 0xf80000;
      *(int *)(this_ptr->vertex_buffer_ptr + 0x8c) = local_34;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x88) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x84) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x80) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x78) = 0x80000;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0x7c) = 0x80000;
      *(int *)(this_ptr->vertex_buffer_ptr + 0xbc) = local_34;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0xb8) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0xb4) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0xb0) = 0xffff;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0xa8) = 0xf80000;
      *(uint *)(this_ptr->vertex_buffer_ptr + 0xac) = 0x80000;
      local_b8.base.count = 4;
      local_b8.surface_normal.D.i = 0;
      local_b8.surface_normal.C.i = 0;
      local_b8.surface_normal.B.i = 0;
      local_b8.surface_normal.A.i = 0;
      local_94 = 3;
      local_a0 = 0;
      local_9c = 1;
      local_98 = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(this_ptr,&local_b8);
    } while (iVar2 < 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  engine_matrix_c_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
