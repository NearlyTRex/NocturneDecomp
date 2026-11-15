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
  byte bVar2;
  double dVar3;
  int aiStackY_1020 [983];
  CVector3i *rotation;
  int iStack_a8;
  CVector3i CStack_80;
  CVector3i CStack_74;
  CVector3i CStack_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  CVector3i CStack_50;
  CVector3i CStack_44;
  byte auStack_38 [12];
  int iStack_2c;
  int iStack_28;
  CVector3i CStack_20;
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
  CStack_68.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_68.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_68.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  engine_special_cpp_transformPoint_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&CStack_20);
  rotation = (CVector3i *)0x0;
  auStack_38._0_4_ = CStack_20.x;
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4);
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)auStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_50.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_50.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_50.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_80.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_80.y = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_80.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_74.x = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_74.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_74.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_44.x = (int)ROUND(_DAT_005f64e4 * -0.125);
  CStack_44.y = (int)ROUND(_DAT_005f64e4 * 0.125);
  CStack_44.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00615874);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
  iStack_14 = 0xffff - _DAT_01c38aec;
  _DAT_0062205c = 0xd00000;
  DAT_0062202c = 0x800000;
  _DAT_00622030 = 0xdc0000;
  _DAT_00622060 = 0xdc0000;
  _DAT_0062208c = 0x800000;
  _DAT_006220bc = 0x800000;
  DAT_00622090 = 0x900000;
  iStack_10 = iStack_14;
  dVar3 = round
                    ((double)((float)iStack_14 *
                             (this_ptr->base).lifetime_remaining * (float)_DAT_005d576a));
  DAT_00622040 = (int)ROUND(dVar3);
  _DAT_006220c0 = 0x900000;
  auStack_38._8_4_ = (uint)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  iStack_2c = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  iStack_28 = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220d0 = DAT_00622040;
  CStack_20.z = DAT_00622040;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,(CVector3i *)(auStack_38 + 8),(CVector3i *)&DAT_01c3dec4,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  iStack_a8 = 4;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
            (DAT_0060b280,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
