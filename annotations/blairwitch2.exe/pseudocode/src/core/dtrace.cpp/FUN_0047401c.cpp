// Name: core_dtrace.cpp_FUN_0047401c
// Address: 0047401c
// Address Range: [[0047401c, 0047401f]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0047401c(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_0047401c(int param_1,float *param_2)

{
  uint uVar1;
  SMRGLPrimitivePoly aSStack_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  uint uStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3i CStack_94;
  CVector3i CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i CStack_70;
  CVector3i CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  fStack_58 = *(float *)(param_1 + 0x28) * _DAT_005d1b6b;
  fStack_54 = *(float *)(param_1 + 0x2c) * _DAT_005d1b6b;
  fStack_50 = *(float *)(param_1 + 0x30) * _DAT_005d1b6b;
  if (&fStack_a0 != &fStack_4c) {
    fStack_a0 = fStack_58;
    fStack_9c = fStack_54;
    fStack_98 = fStack_50;
  }
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_50;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
            (0x01BA5C50,(CVector3i *)0x1c21e68);
  CStack_94.x = (int)ROUND(*param_2 * _DAT_005f5b10);
  CStack_94.y = (int)ROUND(param_2[1] * _DAT_005f5b10);
  CStack_94.z = (int)ROUND(param_2[2] * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_94);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2];
  CStack_70.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_70.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_70.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&CStack_70);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2] + fStack_98;
  CStack_40.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_40.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_40.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&CStack_40);
  fStack_7c = *param_2;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2] + fStack_98;
  CStack_64.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_64.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_64.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&CStack_64);
  fStack_7c = *param_2;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2];
  CStack_34.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_34.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_34.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0xc0),&CStack_34);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2];
  CStack_88.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_88.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_88.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0xf0),&CStack_88);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2] + fStack_98;
  CStack_1c.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_1c.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_1c.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x120),&CStack_1c);
  fStack_7c = *param_2;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2] + fStack_98;
  CStack_28.x = (int)ROUND(fStack_7c * _DAT_005f5b10);
  CStack_28.y = (int)ROUND(fStack_78 * _DAT_005f5b10);
  CStack_28.z = (int)ROUND(fStack_74 * _DAT_005f5b10);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x150),&CStack_28);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,uVar1 & 0xff);
  uStack_e4 = 4;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  uStack_ac = 0;
  uStack_b8 = 1;
  uStack_d0 = 4;
  uStack_c4 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  uStack_ac = 2;
  uStack_b8 = 3;
  uStack_c4 = 7;
  uStack_d0 = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  uStack_c4 = 7;
  uStack_ac = 0;
  uStack_b8 = 4;
  uStack_d0 = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  uStack_ac = 1;
  uStack_b8 = 2;
  uStack_c4 = 6;
  uStack_d0 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  uStack_c4 = 6;
  uStack_ac = 4;
  uStack_b8 = 5;
  uStack_d0 = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  uStack_b8 = 2;
  uStack_c4 = 1;
  uStack_ac = 3;
  uStack_d0 = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(DAT_0060b280,aSStack_e8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  return;
}
