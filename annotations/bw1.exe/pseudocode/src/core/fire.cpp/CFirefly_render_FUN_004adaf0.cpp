// Name: core_fire.cpp_CFirefly_render_FUN_004adaf0
// Address: 004adaf0
// Address Range: [[004adaf0, 004ae29e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFirefly_render_FUN_004adaf0(CFirefly *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFirefly_render_FUN_004adaf0(CFirefly *this_ptr)

{
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10d8 [1013];
  CVector3f *world_position;
  SMRGLTextureBasic *texture;
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
  fStack_20 = this_ptr->size;
  vertex_ptr = DAT_00612560->vertex_buffer_ptr;
  aCStack_3c[0].x = (int)ROUND((this_ptr->base).position.x * _DAT_005fff94);
  aCStack_3c[0].y = (int)ROUND((this_ptr->base).position.y * _DAT_005fff94);
  aCStack_3c[0].z = (int)ROUND((this_ptr->base).position.z * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c(&vertex_ptr->projected_vertex,aCStack_3c);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0(DAT_00612560,vertex_ptr);
  if (iVar2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
  fStack_78 = -fStack_20;
  uStack_70 = 0;
  CStack_a8.x = (int)ROUND(fStack_78 * _DAT_005fff94);
  CStack_a8.y = (int)ROUND(fStack_78 * _DAT_005fff94);
  CStack_a8.z = (int)ROUND(_DAT_005fff94 * 0.0);
  fStack_74 = fStack_78;
  fStack_24 = fStack_78;
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_a8);
  fStack_78 = fStack_20;
  fStack_74 = fStack_24;
  uStack_70 = 0;
  CStack_b4.x = (int)ROUND(fStack_20 * _DAT_005fff94);
  CStack_b4.y = (int)ROUND(fStack_24 * _DAT_005fff94);
  CStack_b4.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_b4);
  fStack_78 = fStack_20;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  CStack_90.x = (int)ROUND(fStack_20 * _DAT_005fff94);
  CStack_90.y = (int)ROUND(fStack_20 * _DAT_005fff94);
  CStack_90.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_90);
  fStack_78 = fStack_24;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  CStack_60.x = (int)ROUND(fStack_24 * _DAT_005fff94);
  CStack_60.y = (int)ROUND(fStack_20 * _DAT_005fff94);
  CStack_60.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_60);
  switch(this_ptr->texture_index) {
  case 0:
    texture = (SMRGLTextureBasic *)&DAT_0061c44c;
    break;
  case 1:
    texture = (SMRGLTextureBasic *)&DAT_0061c464;
    break;
  case 2:
    texture = (SMRGLTextureBasic *)&DAT_0061c47c;
    break;
  case 3:
    texture = (SMRGLTextureBasic *)&DAT_0061c494;
    break;
  default:
    goto switchD_004ae298_default;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
switchD_004ae298_default:
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,this_ptr,0);
  lVar1 = (longlong)this_ptr->intensity * (longlong)(0xffff - _DAT_01c51cac);
  DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  DAT_00629034 = 0xffff;
  DAT_00629038 = 0xffff;
  DAT_0062903c = 0xffff;
  DAT_00629064 = 0xffff;
  DAT_00629068 = 0xffff;
  DAT_0062906c = 0xffff;
  DAT_00629094 = 0xffff;
  DAT_00629098 = 0xffff;
  DAT_0062909c = 0xffff;
  DAT_006290c4 = 0xffff;
  DAT_006290c8 = 0xffff;
  DAT_006290cc = 0xffff;
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290d0 = DAT_00629040;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_pop_FUN_004839a0();
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 4);
  CStack_54.x = (this_ptr->base).position.x;
  *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + 4) = *puVar3;
  *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar3[(uint)bVar5 * -2 + 1];
  fStack_f8 = 1.0;
  fStack_f4 = 0.025;
  pfVar4 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  fStack_d8 = (this_ptr->base).velocity.x;
  afStack_d4[(uint)bVar5 * -2] = *pfVar4;
  afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar4[(uint)bVar5 * -2 + 1];
  pCStack_14 = &(this_ptr->base).acceleration;
  iStack_18 = 0;
  do {
    fStack_f4 = fStack_f4 * (float)_DAT_005df20c;
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
    fStack_f8 = fStack_f8 * (float)_DAT_005df20c;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
              (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
    fStack_78 = -fStack_20 * fStack_f8;
    uStack_70 = 0;
    CStack_c0.x = (int)ROUND(fStack_78 * _DAT_005fff94);
    CStack_c0.y = (int)ROUND(fStack_78 * _DAT_005fff94);
    CStack_c0.z = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_74 = fStack_78;
    fStack_1c = fStack_78;
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_c0);
    fStack_78 = fStack_20 * fStack_f8;
    fStack_74 = fStack_1c;
    uStack_70 = 0;
    CStack_9c.x = (int)ROUND(fStack_78 * _DAT_005fff94);
    CStack_9c.y = (int)ROUND(fStack_1c * _DAT_005fff94);
    CStack_9c.z = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_24 = fStack_78;
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_9c)
    ;
    uStack_70 = 0;
    fStack_78 = fStack_24;
    fStack_74 = fStack_24;
    CStack_e4.x = (int)ROUND(fStack_24 * _DAT_005fff94);
    CStack_e4.y = (int)ROUND(fStack_24 * _DAT_005fff94);
    CStack_e4.z = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_e4)
    ;
    fStack_78 = fStack_1c;
    uStack_70 = 0;
    fStack_74 = fStack_24;
    CStack_84.x = (int)ROUND(fStack_1c * _DAT_005fff94);
    CStack_84.y = (int)ROUND(fStack_24 * _DAT_005fff94);
    CStack_84.z = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_84)
    ;
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,this_ptr,0);
    lVar1 = (longlong)this_ptr->intensity * (longlong)(0xffff - _DAT_01c51cac);
    DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_00629034 = 0xffff;
    DAT_00629038 = 0xffff;
    DAT_0062903c = 0xffff;
    DAT_00629064 = 0xffff;
    DAT_00629068 = 0xffff;
    DAT_0062906c = 0xffff;
    DAT_00629094 = 0xffff;
    DAT_00629098 = 0xffff;
    DAT_0062909c = 0xffff;
    DAT_006290c4 = 0xffff;
    DAT_006290c8 = 0xffff;
    DAT_006290cc = 0xffff;
    DAT_00629070 = DAT_00629040;
    _DAT_006290a0 = DAT_00629040;
    _DAT_006290d0 = DAT_00629040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
              (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
    engine_drender_cpp_pop_FUN_004839a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
