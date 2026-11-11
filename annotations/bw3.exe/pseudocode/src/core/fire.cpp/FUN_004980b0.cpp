// Name: core_fire.cpp_FUN_004980b0
// Address: 004980b0
// Address Range: [[004980b0, 00498895]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004980b0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004980b0(CVector3f *param_1)

{
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10d8 [1013];
  SMRGLTextureBasic *texture;
  CVector3f *world_position;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3i CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3i CStack_c0;
  CVector3i CStack_b4;
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  CVector3i CStack_90;
  CVector3i CStack_84;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  float afStack_68 [2];
  CVector3i CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3i aCStack_3c [2];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar5 = 0;
  fStack_20 = 0.4;
  if (param_1[6].y == 8.40779e-45) {
    fStack_20 = 0.1;
  }
  vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
  aCStack_3c[0].x = (int)ROUND(param_1->x * _DAT_005df8e4);
  aCStack_3c[0].y = (int)ROUND(param_1->y * _DAT_005df8e4);
  aCStack_3c[0].z = (int)ROUND(param_1->z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c(&vertex_ptr->projected_vertex,aCStack_3c);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
  if (iVar2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
  fStack_78 = -fStack_20;
  uStack_70 = 0;
  CStack_a8.x = (int)ROUND(fStack_78 * _DAT_005df8e4);
  CStack_a8.y = (int)ROUND(fStack_78 * _DAT_005df8e4);
  CStack_a8.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  fStack_74 = fStack_78;
  fStack_24 = fStack_78;
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_a8);
  uStack_70 = 0;
  fStack_78 = fStack_20;
  fStack_74 = fStack_24;
  CStack_b4.x = (int)ROUND(fStack_20 * _DAT_005df8e4);
  CStack_b4.y = (int)ROUND(fStack_24 * _DAT_005df8e4);
  CStack_b4.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_b4);
  fStack_78 = fStack_20;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  CStack_90.x = (int)ROUND(fStack_20 * _DAT_005df8e4);
  CStack_90.y = (int)ROUND(fStack_20 * _DAT_005df8e4);
  CStack_90.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_90);
  fStack_78 = fStack_24;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  CStack_60.x = (int)ROUND(fStack_24 * _DAT_005df8e4);
  CStack_60.y = (int)ROUND(fStack_20 * _DAT_005df8e4);
  CStack_60.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_60);
  switch(param_1[6].y) {
  case 0.0:
  case 8.40779e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fc9ac;
    break;
  case 1.4013e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fc9c4;
    break;
  case 2.8026e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fc9dc;
    break;
  case 4.2039e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fc9f4;
    break;
  case 5.60519e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fca0c;
    break;
  case 7.00649e-45:
    texture = (SMRGLTextureBasic *)&DAT_005fca24;
    break;
  default:
    goto switchD_0049888f_default;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
switchD_0049888f_default:
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
  lVar1 = (longlong)(int)param_1[5].y * (longlong)(0xffff - _DAT_01c6e24c);
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
  engine_matrix_c_pop_FUN_0046d080();
  puVar3 = (uint *)((int)param_1 + (uint)bVar5 * -8 + 4);
  CStack_54.x = param_1->x;
  *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + 4) = *puVar3;
  *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar3[(uint)bVar5 * -2 + 1];
  fStack_f8 = 1.0;
  fStack_f4 = 0.025;
  pfVar4 = (float *)((int)param_1 + (uint)bVar5 * -8 + 0x10);
  fStack_d8 = param_1[1].x;
  afStack_d4[(uint)bVar5 * -2] = *pfVar4;
  afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar4[(uint)bVar5 * -2 + 1];
  pCStack_14 = param_1 + 2;
  iStack_18 = 0;
  do {
    fStack_f4 = fStack_f4 * (float)_DAT_005c0528;
    fStack_48 = pCStack_14->x * fStack_f4;
    afStack_44[0] = pCStack_14->y * fStack_f4;
    afStack_44[1] = pCStack_14->z * fStack_f4;
    fStack_f0 = fStack_48;
    *(float *)((int)&stack0xffffff14 + (uint)bVar5 * -8) = afStack_44[(uint)bVar5 * -2];
    *(float *)((int)&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_d8 = fStack_d8 - fStack_f0;
    fStack_6c = fStack_d8 * fStack_f4;
    afStack_d4[0] = afStack_d4[0] - fStack_ec;
    afStack_d4[1] = afStack_d4[1] - fStack_e8;
    world_position = &CStack_54;
    afStack_68[0] = afStack_d4[0] * fStack_f4;
    afStack_68[1] = afStack_d4[1] * fStack_f4;
    afStack_d4[2] = fStack_6c;
    afStack_d4[(uint)bVar5 * -2 + 3] = afStack_68[(uint)bVar5 * -2];
    afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    CStack_54.x = CStack_54.x - afStack_d4[2];
    CStack_54.y = CStack_54.y - afStack_d4[3];
    CStack_54.z = CStack_54.z - fStack_c4;
    fStack_f8 = fStack_f8 * (float)_DAT_005c0528;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
    fStack_78 = -fStack_20 * fStack_f8;
    uStack_70 = 0;
    CStack_c0.x = (int)ROUND(fStack_78 * _DAT_005df8e4);
    CStack_c0.y = (int)ROUND(fStack_78 * _DAT_005df8e4);
    CStack_c0.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    fStack_74 = fStack_78;
    fStack_1c = fStack_78;
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_c0);
    fStack_78 = fStack_20 * fStack_f8;
    fStack_74 = fStack_1c;
    uStack_70 = 0;
    CStack_9c.x = (int)ROUND(fStack_78 * _DAT_005df8e4);
    CStack_9c.y = (int)ROUND(fStack_1c * _DAT_005df8e4);
    CStack_9c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    fStack_24 = fStack_78;
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_9c)
    ;
    uStack_70 = 0;
    fStack_78 = fStack_24;
    fStack_74 = fStack_24;
    CStack_e4.x = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_e4.y = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_e4.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_e4)
    ;
    fStack_78 = fStack_1c;
    uStack_70 = 0;
    fStack_74 = fStack_24;
    CStack_84.x = (int)ROUND(fStack_1c * _DAT_005df8e4);
    CStack_84.y = (int)ROUND(fStack_24 * _DAT_005df8e4);
    CStack_84.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_84)
    ;
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
    lVar1 = (longlong)(int)param_1[5].y * (longlong)(0xffff - _DAT_01c6e24c);
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
    engine_matrix_c_pop_FUN_0046d080();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
