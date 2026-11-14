// Name: core_fire.cpp_CFireball_render_FUN_00495ca0
// Address: 00495ca0
// Address Range: [[00495ca0, 004964b3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_00495ca0(CFireball *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_render_FUN_00495ca0(CFireball *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0);
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c3e074;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c3e1f0;
  }
  else {
    this_ptr_00 = (CKeyFramedModelInstance *)0x1c3e36c;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_00);
  pCVar4 = pCVar2->frame_bounds;
  pCVar7 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->x = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar7 = (CVector3f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_FUN_0041a840(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&DAT_0265370c,&CStack_100,
               &CStack_f4,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0)
     ) {
    DAT_0062202c = 0x80000;
    _DAT_00622030 = 0xf80000;
    _DAT_0062205c = 0xf80000;
    _DAT_00622060 = 0xf80000;
    _DAT_0062208c = 0xf80000;
    DAT_00622090 = 0x80000;
    _DAT_006220bc = 0x80000;
    _DAT_006220c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    CStack_c4.x = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    CStack_c4.y = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    CStack_c4.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    CStack_a0.x = (int)ROUND(fStack_24 * _DAT_005f64e4);
    CStack_a0.y = (int)ROUND(fStack_2c * _DAT_005f64e4);
    CStack_a0.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_a0)
    ;
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    CStack_7c.x = (int)ROUND(fStack_24 * _DAT_005f64e4);
    CStack_7c.y = (int)ROUND(fStack_24 * _DAT_005f64e4);
    CStack_7c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_7c)
    ;
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    CStack_88.x = (int)ROUND(fStack_2c * _DAT_005f64e4);
    CStack_88.y = (int)ROUND(fStack_24 * _DAT_005f64e4);
    CStack_88.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_88)
    ;
    if (this_ptr->lighting_active == 1) {
      texture = (SMRGLTextureBasic *)&DAT_006151cc;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = (SMRGLTextureBasic *)&DAT_0061513c;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_0061510c;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c38aec);
    DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_00622034 = 0xffff;
    DAT_00622038 = 0xffff;
    DAT_0062203c = 0xffff;
    DAT_00622064 = 0xffff;
    DAT_00622068 = 0xffff;
    DAT_0062206c = 0xffff;
    DAT_00622094 = 0xffff;
    DAT_00622098 = 0xffff;
    DAT_0062209c = 0xffff;
    DAT_006220c4 = 0xffff;
    DAT_006220c8 = 0xffff;
    DAT_006220cc = 0xffff;
    DAT_00622070 = DAT_00622040;
    _DAT_006220a0 = DAT_00622040;
    _DAT_006220d0 = DAT_00622040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
              (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
    engine_drender_cpp_pop_FUN_0046b4a0();
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
        fStack_108 = fStack_108 * (float)_DAT_005d5402;
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
        fStack_104 = fStack_104 * (float)_DAT_005d5402;
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
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,pCVar7);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                  (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        CStack_dc.x = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        CStack_dc.y = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        CStack_dc.z = (int)ROUND(_DAT_005f64e4 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        CStack_40.x = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        CStack_40.y = (int)ROUND(fStack_20 * _DAT_005f64e4);
        CStack_40.z = (int)ROUND(_DAT_005f64e4 * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        CStack_94.x = (int)ROUND(fStack_2c * _DAT_005f64e4);
        CStack_94.y = (int)ROUND(fStack_2c * _DAT_005f64e4);
        CStack_94.z = (int)ROUND(_DAT_005f64e4 * 0.0);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        CStack_70.x = (int)ROUND(fStack_20 * _DAT_005f64e4);
        CStack_70.y = (int)ROUND(fStack_2c * _DAT_005f64e4);
        CStack_70.z = (int)ROUND(_DAT_005f64e4 * 0.0);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_70);
        (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
        lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - _DAT_01c38aec);
        DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        DAT_00622034 = 0xffff;
        DAT_00622038 = 0xffff;
        DAT_0062203c = 0xffff;
        DAT_00622064 = 0xffff;
        DAT_00622068 = 0xffff;
        DAT_0062206c = 0xffff;
        DAT_00622094 = 0xffff;
        DAT_00622098 = 0xffff;
        DAT_0062209c = 0xffff;
        DAT_006220c4 = 0xffff;
        DAT_006220c8 = 0xffff;
        DAT_006220cc = 0xffff;
        DAT_00622070 = DAT_00622040;
        _DAT_006220a0 = DAT_00622040;
        _DAT_006220d0 = DAT_00622040;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                  (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
        engine_drender_cpp_pop_FUN_0046b4a0();
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
    }
  }
  return;
}
