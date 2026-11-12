// Name: core_fire.cpp_CPopcorn_render_FUN_0049b9d0
// Address: 0049b9d0
// Address Range: [[0049b9d0, 0049bd37]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  uint auStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  bVar2 = 0;
  vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
  CStack_48.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_48.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_48.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&CStack_78);
  rotation = (CVector3i *)0x0;
  CStack_60.x = CStack_78.x;
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_78 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,&CStack_60,rotation);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_18.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_18.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_18.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_3c.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_3c.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_3c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_6c.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_6c.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_6c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_6c);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_54.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_54.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_54.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061585c);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  DAT_00622040 = 0xffff - _DAT_01c38aec;
  _DAT_006220c0 = 0x80000;
  CStack_24.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_24.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_24.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220d0 = DAT_00622040;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_24,(CVector3i *)&DAT_01c3dec4,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  SStack_a0.surface_normal.D.i = 0;
  SStack_a0.surface_normal.C.i = 0;
  SStack_a0.surface_normal.B.i = 0;
  SStack_a0.surface_normal.A.i = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  SStack_a0.base.count = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,&SStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
