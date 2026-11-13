// Name: core_fire.cpp_CFireball_render_FUN_00499690
// Address: 00499690
// Address Range: [[00499690, 00499ea3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_00499690(CFireball *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_render_FUN_00499690(CFireball *this_ptr)

{
  longlong lVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr_00;
  CBoundingBox3D *pCVar4;
  uint *puVar5;
  float *pfVar6;
  CVector3f *pCVar7;
  byte bVar8;
  float afStackY_10d0 [1004];
  SMRGLTextureBasic *texture;
  float fStack_108;
  float fStack_104;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [2];
  CVector3i CStack_dc;
  CVector3f CStack_d0;
  CVector3i CStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  CVector3i CStack_7c;
  CVector3i CStack_70;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar8 = 0;
  fStack_24 = 0.5;
  if (this_ptr->lighting_active == 0) {
    fStack_24 = 4.0;
  }
  if (this_ptr->lighting_active == 2) {
    fStack_24 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0);
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c73814;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c73990;
  }
  else {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c73b0c;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
  pCVar4 = pCVar2->frame_bounds;
  pCVar7 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->x = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar7 = (CVector3f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_FUN_0041daf0(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&DAT_02cfd900,&CStack_100,
               &CStack_f4,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046d080();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar3 == 0)
     ) {
    DAT_0060b02c = 0x80000;
    _DAT_0060b030 = 0xf80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b060 = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    _DAT_0060b0c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    CStack_c4.x = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
    CStack_c4.y = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
    CStack_c4.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    CStack_a0.x = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_a0.y = (int)ROUND(fStack_2c * _DAT_005df8e4);
    CStack_a0.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_a0)
    ;
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    CStack_7c.x = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_7c.y = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_7c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_7c)
    ;
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    CStack_88.x = (int)ROUND(fStack_2c * _DAT_005df8e4);
    CStack_88.y = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_88.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_88)
    ;
    if (this_ptr->lighting_active == 1) {
      texture = (SMRGLTextureBasic *)&DAT_005fca9c;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = (SMRGLTextureBasic *)&DAT_005fc9dc;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_005fc9ac;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c6e24c);
    DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_0060b034 = 0xffff;
    DAT_0060b038 = 0xffff;
    DAT_0060b03c = 0xffff;
    DAT_0060b064 = 0xffff;
    DAT_0060b068 = 0xffff;
    DAT_0060b06c = 0xffff;
    _DAT_0060b094 = 0xffff;
    _DAT_0060b098 = 0xffff;
    _DAT_0060b09c = 0xffff;
    _DAT_0060b0c4 = 0xffff;
    _DAT_0060b0c8 = 0xffff;
    _DAT_0060b0cc = 0xffff;
    DAT_0060b070 = DAT_0060b040;
    _DAT_0060b0a0 = DAT_0060b040;
    _DAT_0060b0d0 = DAT_0060b040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_pop_FUN_0046d080();
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      puVar5 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 4);
      CStack_d0.x = (this_ptr->base).position.x;
      *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + 4) = *puVar5;
      *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           puVar5[(uint)bVar8 * -2 + 1];
      pfVar6 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x10);
      fStack_e8 = (this_ptr->base).velocity.x;
      afStack_e4[(uint)bVar8 * -2] = *pfVar6;
      afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
      iStack_18 = 0;
      fStack_104 = 1.0;
      fStack_108 = 0.1;
      pCStack_1c = &(this_ptr->base).acceleration;
      do {
        fStack_108 = fStack_108 * (float)_DAT_005c0580;
        fStack_64 = pCStack_1c->x * fStack_108;
        afStack_60[0] = pCStack_1c->y * fStack_108;
        afStack_60[1] = pCStack_1c->z * fStack_108;
        afStack_60[2] = fStack_64;
        afStack_60[(uint)bVar8 * -2 + 3] = afStack_60[(uint)bVar8 * -2];
        afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_e8 = fStack_e8 - afStack_60[2];
        fStack_4c = fStack_e8 * fStack_108;
        afStack_e4[0] = afStack_e4[0] - afStack_60[3];
        afStack_e4[1] = afStack_e4[1] - fStack_50;
        fStack_104 = fStack_104 * (float)_DAT_005c0580;
        pCVar7 = &CStack_d0;
        fStack_48 = afStack_e4[0] * fStack_108;
        fStack_44 = afStack_e4[1] * fStack_108;
        fStack_b8 = fStack_4c;
        afStack_b4[(uint)bVar8 * -2] = afStack_60[(uint)bVar8 * -2 + 6];
        afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        CStack_d0.x = CStack_d0.x - fStack_b8;
        CStack_d0.y = CStack_d0.y - afStack_b4[0];
        CStack_d0.z = CStack_d0.z - afStack_b4[1];
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,pCVar7);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                  (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        CStack_dc.x = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        CStack_dc.y = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        CStack_dc.z = (int)ROUND(_DAT_005df8e4 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        CStack_40.x = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        CStack_40.y = (int)ROUND(fStack_20 * _DAT_005df8e4);
        CStack_40.z = (int)ROUND(_DAT_005df8e4 * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        CStack_94.x = (int)ROUND(fStack_2c * _DAT_005df8e4);
        CStack_94.y = (int)ROUND(fStack_2c * _DAT_005df8e4);
        CStack_94.z = (int)ROUND(_DAT_005df8e4 * 0.0);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        CStack_70.x = (int)ROUND(fStack_20 * _DAT_005df8e4);
        CStack_70.y = (int)ROUND(fStack_2c * _DAT_005df8e4);
        CStack_70.z = (int)ROUND(_DAT_005df8e4 * 0.0);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_70);
        (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,this_ptr,0);
        lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c6e24c);
        DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        DAT_0060b034 = 0xffff;
        DAT_0060b038 = 0xffff;
        DAT_0060b03c = 0xffff;
        DAT_0060b064 = 0xffff;
        DAT_0060b068 = 0xffff;
        DAT_0060b06c = 0xffff;
        _DAT_0060b094 = 0xffff;
        _DAT_0060b098 = 0xffff;
        _DAT_0060b09c = 0xffff;
        _DAT_0060b0c4 = 0xffff;
        _DAT_0060b0c8 = 0xffff;
        _DAT_0060b0cc = 0xffff;
        DAT_0060b070 = DAT_0060b040;
        _DAT_0060b0a0 = DAT_0060b040;
        _DAT_0060b0d0 = DAT_0060b040;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
                  (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
        engine_drender_cpp_pop_FUN_0046d080();
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
    }
  }
  return;
}
