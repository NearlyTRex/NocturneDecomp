// Name: core_fire.cpp_CSpark_render_FUN_004947a0
// Address: 004947a0
// Address Range: [[004947a0, 00494eab]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_render_FUN_004947a0(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_render_FUN_004947a0(CSpark *this_ptr)

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
  CVector3f CStack_e4;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3i CStack_c0;
  CVector3i CStack_b4;
  CVector3i CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  CVector3i CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
  CStack_b4.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_b4.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_b4.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  fStack_24 = 0.4;
  engine_special_cpp_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_b4);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
  if (iVar2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
  fStack_d8 = -0.4;
  fStack_d4 = -0.4;
  uStack_d0 = 0;
  CStack_a8.x = (int)ROUND(_DAT_005f64e4 * -0.4);
  CStack_a8.y = (int)ROUND(_DAT_005f64e4 * -0.4);
  CStack_a8.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_a8);
  fStack_d8 = 0.4;
  fStack_d4 = -0.4;
  uStack_d0 = 0;
  CStack_48.x = (int)ROUND(_DAT_005f64e4 * 0.4);
  CStack_48.y = (int)ROUND(_DAT_005f64e4 * -0.4);
  CStack_48.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_48);
  fStack_d8 = 0.4;
  fStack_d4 = 0.4;
  uStack_d0 = 0;
  CStack_3c.x = (int)ROUND(_DAT_005f64e4 * 0.4);
  CStack_3c.y = (int)ROUND(_DAT_005f64e4 * 0.4);
  CStack_3c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_3c);
  fStack_d8 = -0.4;
  uStack_d0 = 0;
  fStack_d4 = 0.4;
  CStack_6c.x = (int)ROUND(_DAT_005f64e4 * -0.4);
  CStack_6c.y = (int)ROUND(_DAT_005f64e4 * 0.4);
  CStack_6c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_6c);
  switch(this_ptr->spark_type) {
  case 0:
    texture = (SMRGLTextureBasic *)&DAT_0061510c;
    break;
  case 1:
    texture = (SMRGLTextureBasic *)&DAT_00615124;
    break;
  case 2:
    texture = (SMRGLTextureBasic *)&DAT_0061513c;
    break;
  case 3:
    texture = (SMRGLTextureBasic *)&DAT_00615154;
    break;
  default:
    goto switchD_00494ea5_default;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
switchD_00494ea5_default:
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
  lVar1 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - _DAT_01c38aec);
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
  puVar3 = (uint *)((int)this_ptr + (uint)bVar5 * -8 + 4);
  CStack_e4.x = (this_ptr->base).position.x;
  *(uint *)((int)&CStack_e4 + (uint)bVar5 * -8 + 4) = *puVar3;
  *(uint *)((int)&CStack_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       puVar3[(uint)bVar5 * -2 + 1];
  iStack_18 = 0;
  pfVar4 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  fStack_78 = (this_ptr->base).velocity.x;
  afStack_74[(uint)bVar5 * -2] = *pfVar4;
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar4[(uint)bVar5 * -2 + 1];
  pCStack_1c = &(this_ptr->base).acceleration;
  fStack_f4 = 1.0;
  fStack_f8 = 0.025;
  do {
    fStack_f8 = fStack_f8 * (float)_DAT_005d53aa;
    fStack_cc = pCStack_1c->x * fStack_f8;
    afStack_c8[0] = pCStack_1c->y * fStack_f8;
    afStack_c8[1] = pCStack_1c->z * fStack_f8;
    fStack_9c = fStack_cc;
    afStack_98[(uint)bVar5 * -2] = afStack_c8[(uint)bVar5 * -2];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_78 = fStack_78 - fStack_9c;
    fStack_f0 = fStack_78 * fStack_f8;
    afStack_74[0] = afStack_74[0] - afStack_98[0];
    afStack_74[1] = afStack_74[1] - afStack_98[1];
    fStack_f4 = fStack_f4 * (float)_DAT_005d53aa;
    world_position = &CStack_e4;
    fStack_ec = afStack_74[0] * fStack_f8;
    fStack_e8 = afStack_74[1] * fStack_f8;
    afStack_98[2] = fStack_f0;
    afStack_98[(uint)bVar5 * -2 + 3] = *(float *)((int)&stack0xffffff14 + (uint)bVar5 * -8);
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         *(float *)((int)&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    CStack_e4.x = CStack_e4.x - afStack_98[2];
    CStack_e4.y = CStack_e4.y - afStack_98[3];
    CStack_e4.z = CStack_e4.z - fStack_88;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
    fStack_d8 = -fStack_24 * fStack_f4;
    uStack_d0 = 0;
    CStack_c0.x = (int)ROUND(fStack_d8 * _DAT_005f64e4);
    CStack_c0.y = (int)ROUND(fStack_d8 * _DAT_005f64e4);
    CStack_c0.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    fStack_d4 = fStack_d8;
    fStack_20 = fStack_d8;
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_c0);
    fStack_d8 = fStack_24 * fStack_f4;
    fStack_d4 = fStack_20;
    uStack_d0 = 0;
    CStack_84.x = (int)ROUND(fStack_d8 * _DAT_005f64e4);
    CStack_84.y = (int)ROUND(fStack_20 * _DAT_005f64e4);
    CStack_84.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    fStack_28 = fStack_d8;
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_84)
    ;
    fStack_d8 = fStack_28;
    fStack_d4 = fStack_28;
    uStack_d0 = 0;
    CStack_54.x = (int)ROUND(fStack_28 * _DAT_005f64e4);
    CStack_54.y = (int)ROUND(fStack_28 * _DAT_005f64e4);
    CStack_54.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_54)
    ;
    fStack_d8 = fStack_20;
    uStack_d0 = 0;
    fStack_d4 = fStack_28;
    CStack_60.x = (int)ROUND(fStack_20 * _DAT_005f64e4);
    CStack_60.y = (int)ROUND(fStack_28 * _DAT_005f64e4);
    CStack_60.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_60)
    ;
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
    lVar1 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - _DAT_01c38aec);
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
  return;
}
