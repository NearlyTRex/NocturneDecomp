// Name: core_dlight.cpp_renderConeLightGeometry_FUN_00465890
// Address: 00465890
// Address Range: [[00465890, 00465d93]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00465890(CVector3f *position,CVector3f *rotation,float fov,float falloff)

#include "nocturne.h"

void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00465890(CVector3f *position,CVector3f *rotation,float fov,float falloff)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *pCVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  double dVar12;
  SMRGLHeaderPrimitive local_c0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68 [2];
  float fStack_48;
  float local_40;
  int iStack_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  local_c0.base.count = (int)fov;
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  if (iVar4 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_00612560,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (g_CDemonRenderer_PTR_00612560,rotation,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (g_CDemonRenderer_PTR_00612560,&g_SMRGLTextureBasic_006122a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,1);
  local_30 = 1.0 / falloff;
  iVar4 = 1;
  do {
    fVar6 = (float10)iVar4 * ((float10)18 / (float10)(float)local_c0.base.count) *
            (float10)0.125;
    local_c0.base.type = (int)(float)fVar6;
    Var10 = fpatan(fVar6,(float10)1);
    fVar6 = (float10)fcos(Var10);
    iVar5 = 0;
    local_1c = (float)(fVar6 * (float10)falloff);
    do {
      pCVar3 = g_CDemonRenderer_PTR_00612560;
      fVar6 = (float10)iVar5 * (float10)0.125f * (float10)3.141593f *
              (float10)2;
      iVar5 = iVar5 + 1;
      fVar7 = (float10)fsin(fVar6);
      fVar11 = (float10)iVar5 * (float10)0.125f * (float10)3.141593f *
               (float10)2;
      fVar8 = (float10)fsin(fVar11);
      fVar6 = (float10)fcos(fVar6);
      fVar11 = (float10)fcos(fVar11);
      fVar9 = (float10)(float)local_c0.base.type;
      local_2c = (float)(fVar7 * fVar9);
      local_28 = (float)(fVar6 * fVar9);
      local_24 = (float)(fVar8 * fVar9);
      local_20 = (float)(fVar11 * fVar9);
      local_8c.y = (int)(local_1c * 0.0);
      local_90 = (float)local_8c.y * local_2c;
      local_8c.x = (int)((float)local_8c.y * local_28);
      fVar1 = (falloff - (float)local_8c.y) * local_30;
      fVar2 = (float)1024;
      local_40 = (float)local_8c.y;
      local_18 = iVar5;
      dVar12 = round((double)((falloff - local_1c) * local_30 * fVar2));
      local_38 = (int)ROUND(dVar12);
      dVar12 = round((double)(fVar1 * fVar2));
      local_40 = (float)(int)ROUND(dVar12);
      local_8c.z = (int)ROUND(local_90 * 256.0f);
      local_80.x = (int)ROUND((float)local_8c.x * 256.0f);
      local_80.y = (int)ROUND((float)local_8c.y * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&pCVar3->vertex_buffer_ptr->projected_vertex,&local_8c);
      local_98 = fStack_48 * local_2c;
      local_94 = fStack_48 * local_28;
      local_90 = fStack_48;
      local_80.x = (int)ROUND(local_98 * 256.0f);
      local_80.y = (int)ROUND(local_94 * 256.0f);
      local_80.z = (int)ROUND(fStack_48 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&local_80);
      local_98 = local_24 * local_2c;
      local_94 = local_24 * local_28;
      local_90 = local_24;
      local_74.x = (int)ROUND(local_98 * 256.0f);
      local_74.y = (int)ROUND(local_94 * 256.0f);
      local_74.z = (int)ROUND(local_24 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_74);
      local_98 = local_24 * local_34;
      local_94 = local_24 * local_30;
      local_90 = local_24;
      local_68[0].x = (int)ROUND(local_98 * 256.0f);
      local_68[0].y = (int)ROUND(local_94 * 256.0f);
      local_68[0].z = (int)ROUND(local_24 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,local_68);
      pCVar3 = g_CDemonRenderer_PTR_00612560;
      g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->a = (int)local_40;
      pCVar3->vertex_buffer_ptr->b = 0xffff;
      pCVar3->vertex_buffer_ptr->g = 0xffff;
      pCVar3->vertex_buffer_ptr->r = 0xffff;
      pCVar3->vertex_buffer_ptr->u = 0xf80000;
      pCVar3->vertex_buffer_ptr->v = 0xf80000;
      pCVar3->vertex_buffer_ptr[1].a = (int)local_40;
      pCVar3->vertex_buffer_ptr[1].b = 0xffff;
      pCVar3->vertex_buffer_ptr[1].g = 0xffff;
      pCVar3->vertex_buffer_ptr[1].r = 0xffff;
      pCVar3->vertex_buffer_ptr[1].u = 0x80000;
      pCVar3->vertex_buffer_ptr[1].v = 0xf80000;
      pCVar3->vertex_buffer_ptr[2].a = iStack_3c;
      pCVar3->vertex_buffer_ptr[2].b = 0xffff;
      pCVar3->vertex_buffer_ptr[2].g = 0xffff;
      pCVar3->vertex_buffer_ptr[2].r = 0xffff;
      pCVar3->vertex_buffer_ptr[2].u = 0x80000;
      pCVar3->vertex_buffer_ptr[2].v = 0x80000;
      pCVar3->vertex_buffer_ptr[3].a = iStack_3c;
      pCVar3->vertex_buffer_ptr[3].b = 0xffff;
      pCVar3->vertex_buffer_ptr[3].g = 0xffff;
      pCVar3->vertex_buffer_ptr[3].r = 0xffff;
      pCVar3->vertex_buffer_ptr[3].u = 0xf80000;
      pCVar3->vertex_buffer_ptr[3].v = 0x80000;
      local_c0.base.count = 4;
      local_c0.surface_normal.D.i = 0;
      local_c0.surface_normal.C.i = 0;
      local_c0.surface_normal.B.i = 0;
      local_c0.surface_normal.A.i = 0;
      local_9c = 3;
      local_a8 = 0;
      local_a4 = 1;
      local_a0 = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(pCVar3,&local_c0);
    } while (iVar5 < 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  engine_drender_cpp_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(g_CDemonRenderer_PTR_00612560,0);
  return;
}
