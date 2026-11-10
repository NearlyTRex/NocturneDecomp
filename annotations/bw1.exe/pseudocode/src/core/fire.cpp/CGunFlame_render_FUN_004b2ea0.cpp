// Name: core_fire.cpp_CGunFlame_render_FUN_004b2ea0
// Address: 004b2ea0
// Address Range: [[004b2ea0, 004b3449]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)

{
  float fVar1;
  float10 fVar2;
  CDemonRenderer *pCVar3;
  int iVar4;
  CDemonRenderer *this_ptr_00;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_10a8 [999];
  CVector3f *translation;
  float local_f4;
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc [2];
  CVector3i local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float afStack_98 [2];
  CVector3f local_90;
  float local_84;
  float local_80 [5];
  CVector3i local_6c;
  CVector3i local_60;
  float local_54;
  float local_50 [2];
  CVector3i local_48 [2];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  if (*(float *)this_ptr <= 0.0) {
    return;
  }
  fVar6 = (float10)*(float *)&this_ptr->field_0x1c;
  round();
  local_28 = (float)(int)ROUND(fVar6);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)((int)local_28 * 0x18 + 0x1c58588));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  engine_matrix_c_FUN_00483b70(DAT_00612560);
  translation = (CVector3f *)0x0;
  local_90.x = local_80[2];
  *(float *)((int)&local_90 + (uint)bVar5 * -8 + 4) = local_80[(uint)bVar5 * -2 + 3];
  *(float *)((int)&local_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       local_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_90,translation);
  fVar6 = ((float10)_DAT_005fffb0 - (float10)*(float *)this_ptr) / (float10)_DAT_005fffb0;
  fVar1 = (float)(fVar6 * (float10)_DAT_005df514 + (float10)_DAT_005df51c);
  local_f4 = fVar1;
  if ((float10)(double)fVar6 < (float10)_DAT_005df51c) {
    engine_matrix_c_FUN_00483ae0(DAT_00612560);
    local_54 = local_9c;
    local_50[(uint)bVar5 * -2] = afStack_98[(uint)bVar5 * -2];
    local_50[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_c0 = local_54 - *(float *)&this_ptr->field_0x4;
    local_bc[0] = local_50[0] - *(float *)&this_ptr->field_0x8;
    local_bc[1] = local_50[1] - *(float *)&this_ptr->field_0xc;
    local_84 = local_c0;
    local_80[(uint)bVar5 * -2] = local_bc[(uint)bVar5 * -2];
    local_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_f4 = (float)(((float10)1 +
                       ((float10)1 - (float10)(double)fVar6 * (float10)_DAT_005df524) *
                       ((float10)1 -
                       (float10)ABS(local_80[1] * *(float *)&this_ptr->field_0x18 +
                                    local_84 * *(float *)&this_ptr->field_0x10 +
                                    local_80[0] * *(float *)&this_ptr->field_0x14) /
                       (SQRT((float10)*(float *)&this_ptr->field_0x18 *
                             (float10)*(float *)&this_ptr->field_0x18 +
                             (float10)*(float *)&this_ptr->field_0x10 *
                             (float10)*(float *)&this_ptr->field_0x10 +
                             (float10)*(float *)&this_ptr->field_0x14 *
                             (float10)*(float *)&this_ptr->field_0x14) *
                       SQRT((float10)local_80[1] * (float10)local_80[1] +
                            (float10)local_84 * (float10)local_84 +
                            (float10)local_80[0] * (float10)local_80[0]))) * (float10)_DAT_005df52c)
                      * (float10)fVar1);
  }
  local_a4 = fVar1 * _DAT_005df534 * (float)_DAT_005df53c;
  local_a8 = -local_f4 * _DAT_005df534 * (float)_DAT_005df53c;
  local_a0 = 0.0;
  local_48[0].x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_48[0].y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_48[0].z = (int)ROUND(_DAT_005fff94 * 0.0);
  local_28 = local_a8;
  engine_special_cpp_FUN_00580173((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,local_48);
  local_a8 = local_f4 * (float)_DAT_005df544 * (float)_DAT_005df53c;
  local_6c.x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_6c.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_6c.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_6c);
  local_a4 = -fVar1 * (float)_DAT_005df544 * (float)_DAT_005df53c;
  local_b4.x = (int)ROUND(local_a8 * _DAT_005fff94);
  local_b4.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_b4.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_b4);
  local_a8 = local_28;
  local_60.x = (int)ROUND(local_28 * _DAT_005fff94);
  local_60.y = (int)ROUND(local_a4 * _DAT_005fff94);
  local_60.z = (int)ROUND(local_a0 * _DAT_005fff94);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&local_60);
  pCVar3 = DAT_00612560;
  fVar6 = (float10)(float)fVar6;
  fVar11 = ((float10)_DAT_005df550 - fVar6) * fVar6;
  fVar7 = ((float10)1 - fVar6) * (float10)_DAT_005df54c;
  fVar6 = (float10)_DAT_005df558;
  fVar10 = (float10)_DAT_005df560;
  fVar2 = (float10)_DAT_005df564;
  *(uint *)(DAT_00612560->vertex_buffer_ptr + 0x18) = 0x20000;
  fVar8 = ((float10)1 - fVar11) * (float10)_DAT_005df554;
  *(uint *)(pCVar3->vertex_buffer_ptr + 0x1c) = 0x20000;
  fVar9 = (float10)_DAT_005df55c;
  fVar6 = (fVar11 * fVar6 + fVar8) * fVar9;
  *(uint *)(pCVar3->vertex_buffer_ptr + 0x48) = 0xfe0000;
  fVar10 = (fVar11 * fVar10 + fVar8) * fVar9;
  *(uint *)(pCVar3->vertex_buffer_ptr + 0x4c) = 0x20000;
  fVar9 = fVar9 * (fVar11 * fVar2 + fVar8);
  *(uint *)(pCVar3->vertex_buffer_ptr + 0x78) = 0xfe0000;
  iVar4 = round();
  *(uint *)(iVar4 + 0x7c) = 0xfe0000;
  round();
  iVar4 = round();
  *(uint *)(iVar4 + 0xa8) = 0x20000;
  round();
  local_1c = (int)ROUND(fVar6);
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xac) = 0xfe0000;
  local_24 = (int)ROUND(fVar10);
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x20) = local_1c;
  local_18 = (int)ROUND(fVar9);
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x24) = local_24;
  local_20 = (int)ROUND(fVar7);
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x28) = local_18;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x2c) = local_20;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x50) = local_1c;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x54) = local_24;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x58) = local_18;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = local_20;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x80) = local_1c;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x84) = local_24;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x88) = local_18;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = local_20;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb0) = local_1c;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb4) = local_24;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb8) = local_18;
  *(int *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = local_20;
  local_e8.surface_normal.D.i = 0;
  local_e8.surface_normal.C.i = 0;
  local_e8.surface_normal.B.i = 0;
  local_e8.surface_normal.A.i = 0;
  local_d0 = 0;
  local_e8.base.count = 4;
  local_c8 = 2;
  local_c4 = 3;
  local_cc = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(DAT_00612560,&local_e8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
