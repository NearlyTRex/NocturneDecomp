// Name: core_fire.cpp_CExplosion_render_FUN_0049c8e0
// Address: 0049c8e0
// Address Range: [[0049c8e0, 0049cc9a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_0049c8e0(CExplosion *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CExplosion_render_FUN_0049c8e0(CExplosion *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte *puVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  float afStackY_1058 [1000];
  CDemonRenderer *pCVar8;
  CVector3f *euler_angles;
  CVector3f *translation;
  uint uStack_a4;
  byte local_70 [8];
  float fStack_68;
  int iStack_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3f local_34;
  float fStack_28;
  float local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (ABS(this_ptr->lifetime) != 0.0) {
    uStack_a4 = 0x49c910;
    dVar6 = round
                      ((double)((1.0 - this_ptr->lifetime) * (float)_DAT_005c0690));
    local_18 = (int)ROUND(dVar6);
    if (this_ptr->explosion_type == 3) {
      puVar4 = &DAT_005fd084;
    }
    else {
      puVar4 = &DAT_005fcb14;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(puVar4 + local_18 * 0x30));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250(DAT_005f2afc,&local_34);
    translation = (CVector3f *)0x0;
    euler_angles = (CVector3f *)local_70;
    local_70._0_4_ = local_34.x;
    *(uint *)(local_70 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4);
    pCVar8 = DAT_005f2afc;
    (&fStack_68)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
         *(float *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (pCVar8,euler_angles,translation);
    fVar3 = -this_ptr->scale * _DAT_005c0698;
    fVar2 = (float)_DAT_005c06a0;
    iVar1 = this_ptr->flip_flag;
    dVar6 = round((double)(this_ptr->scale * (float)_DAT_005c06a8 * fVar2));
    dVar7 = round((double)(fVar3 * fVar2));
    local_1c = (int)ROUND(dVar6);
    local_18 = (int)ROUND(dVar7);
    if (iVar1 != 0) {
      local_1c = -local_1c;
      local_18 = -local_18;
    }
    local_14 = local_18;
    local_34.y = (float)local_18;
    local_34.z = this_ptr->scale * _DAT_005c06b0 * (float)_DAT_005c06a0;
    fStack_28 = 0.0;
    local_70._4_4_ = (uint)ROUND(local_34.y * _DAT_005df8e4);
    fStack_68 = (float)(int)ROUND(local_34.z * _DAT_005df8e4);
    iStack_64 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_24 = local_34.y;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_70 + 4));
    local_14 = local_1c;
    local_34.y = (float)local_1c;
    local_48.x = (int)ROUND(local_34.y * _DAT_005df8e4);
    local_48.y = (int)ROUND(local_34.z * _DAT_005df8e4);
    local_48.z = (int)ROUND(fStack_28 * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_34.z = -this_ptr->scale * (float)_DAT_005c06b8 * (float)_DAT_005c06a0;
    local_54.x = (int)ROUND(local_34.y * _DAT_005df8e4);
    local_54.y = (int)ROUND(local_34.z * _DAT_005df8e4);
    local_54.z = (int)ROUND(fStack_28 * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_54);
    local_34.y = local_24;
    local_60.x = (int)ROUND(local_24 * _DAT_005df8e4);
    local_60.y = (int)ROUND(local_34.z * _DAT_005df8e4);
    local_60.z = (int)ROUND(fStack_28 * _DAT_005df8e4);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_60);
    pCVar8 = DAT_005f2afc;
    DAT_005f2afc->vertex_buffer_ptr->u = 0x20000;
    pCVar8->vertex_buffer_ptr->v = 0x20000;
    pCVar8->vertex_buffer_ptr[1].u = 0xfe0000;
    pCVar8->vertex_buffer_ptr[1].v = 0x20000;
    pCVar8->vertex_buffer_ptr[2].u = 0xfe0000;
    pCVar8->vertex_buffer_ptr[2].v = 0xfe0000;
    pCVar8->vertex_buffer_ptr[3].u = 0x20000;
    pCVar8->vertex_buffer_ptr[3].v = 0xfe0000;
    pCVar8->vertex_buffer_ptr->a = 0x8000;
    pCVar8->vertex_buffer_ptr[1].a = 0x8000;
    pCVar8->vertex_buffer_ptr[2].a = 0x8000;
    pCVar8->vertex_buffer_ptr[3].a = 0x8000;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar8,1);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff60,0x123);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_pop_FUN_0046d080();
  }
  return;
}
