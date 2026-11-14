// Name: core_fire.cpp_CRainDrop_render_FUN_0049bd40
// Address: 0049bd40
// Address Range: [[0049bd40, 0049c0e1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_0049bd40(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_0049bd40(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  uint extraout_EDX;
  byte bVar2;
  float10 fVar3;
  uint auStackY_1020 [984];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a8;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  CVector3i CStack_80;
  CVector3i CStack_74;
  CVector3i CStack_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  CVector3i CStack_50;
  CVector3i CStack_44;
  CVector3i CStack_38;
  CVector3i CStack_2c;
  CVector3i CStack_20;
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
  CStack_68.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_68.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_68.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&CStack_20);
  rotation = (CVector3i *)0x0;
  CStack_38.x = CStack_20.x;
  *(uint *)((int)&CStack_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,&CStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_50.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_50.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_50.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_80.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_80.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_80.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_74.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_74.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_74.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_44.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_44.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_44.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00615874);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
  iStack_14 = 0xffff - _DAT_01c38aec;
  fVar3 = (float10)iStack_14 * (float10)(this_ptr->base).lifetime_remaining * (float10)_DAT_005d576a
  ;
  _DAT_0062205c = 0xd00000;
  DAT_0062202c = 0x800000;
  _DAT_00622030 = 0xdc0000;
  _DAT_00622060 = 0xdc0000;
  _DAT_0062208c = 0x800000;
  _DAT_006220bc = 0x800000;
  DAT_00622090 = 0x900000;
  iStack_10 = iStack_14;
  round();
  DAT_00622040 = (int)ROUND(fVar3);
  CStack_2c.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_2c.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_2c.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220c0 = extraout_EDX;
  _DAT_006220d0 = DAT_00622040;
  iStack_14 = DAT_00622040;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_2c,(CVector3i *)&DAT_01c3dec4,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  SStack_a8.surface_normal.D.i = 0;
  SStack_a8.surface_normal.C.i = 0;
  SStack_a8.surface_normal.B.i = 0;
  SStack_a8.surface_normal.A.i = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  SStack_a8.base.count = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,&SStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
