// Name: core_fire.cpp_CGunFlame_render_FUN_00488580
// Address: 00488580
// Address Range: [[00488580, 00488ac9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(CGunFlame *this_ptr)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  byte auStack_dc [8];
  float fStack_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f CStack_88;
  float fStack_7c;
  float local_78;
  float local_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3i local_4c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  auStack_dc._0_4_ = 0x4885ac;
  dVar14 = round((double)this_ptr->anim_frame);
  fStack_2c = (float)(int)ROUND(dVar14);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)((int)fStack_2c * 0x18 + 0x1c09c28));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,&CStack_88);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&CStack_88,(CVector3f *)0x0);
  fVar13 = ((float10)2.0f - (float10)this_ptr->lifetime) / (float10)2.0f;
  local_cc = (float)fVar13;
  auStack_dc = (byte  [8])(double)fVar13;
  fStack_d4 = (float)(fVar13 * (float10)4 + (float10)0.40000000000000002);
  local_d0 = fStack_d4;
  if ((float10)(double)auStack_dc < (float10)0.40000000000000002) {
    pCVar8 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                       (DAT_005ae704,&local_94);
    local_a0 = pCVar8->x - (this_ptr->position).x;
    fVar13 = (float10)pCVar8->y - (float10)(this_ptr->position).y;
    local_9c = (float)fVar13;
    fVar9 = (float10)pCVar8->z - (float10)(this_ptr->position).z;
    local_98 = (float)fVar9;
    fVar10 = (float10)(this_ptr->velocity).y;
    fVar11 = (float10)(this_ptr->velocity).x;
    fVar12 = (float10)(this_ptr->velocity).z;
    fStack_d4 = (float)(((float10)1 +
                        ((float10)1 -
                        ABS((float10)local_98 * (float10)(this_ptr->velocity).z +
                            (float10)local_a0 * (float10)(this_ptr->velocity).x +
                            (float10)local_9c * (float10)(this_ptr->velocity).y) /
                        (SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10) *
                        SQRT(fVar9 * (float10)local_98 +
                             (float10)local_a0 * (float10)local_a0 + fVar13 * (float10)local_9c))) *
                        ((float10)1 - (float10)(double)auStack_dc * (float10)2.5) *
                        (float10)2) * (float10)local_d0);
  }
  local_78 = local_d0 * 5.5536608591669236e-315._0_4_ * (float)0.00390625;
  fStack_7c = -fStack_d4 * 5.5536608591669236e-315._0_4_ * (float)0.00390625;
  local_74 = 0.0;
  local_4c.x = (int)ROUND(fStack_7c * 256.0f);
  local_4c.y = (int)ROUND(local_78 * 256.0f);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  fStack_2c = fStack_7c;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_4c);
  fStack_7c = fStack_d4 * (float)128 * (float)0.00390625;
  local_58.x = (int)ROUND(fStack_7c * 256.0f);
  local_58.y = (int)ROUND(local_78 * 256.0f);
  local_58.z = (int)ROUND(local_74 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_58);
  local_78 = -local_d0 * (float)128 * (float)0.00390625;
  local_64.x = (int)ROUND(fStack_7c * 256.0f);
  local_64.y = (int)ROUND(local_78 * 256.0f);
  local_64.z = (int)ROUND(local_74 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_64);
  fStack_7c = fStack_2c;
  local_70.x = (int)ROUND(fStack_2c * 256.0f);
  local_70.y = (int)ROUND(local_78 * 256.0f);
  local_70.z = (int)ROUND(local_74 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_70);
  this_ptr_00 = DAT_005ae704;
  fVar2 = (2.0f - local_cc) * local_cc;
  fVar6 = (1.0 - local_cc) * 32768.0f;
  fVar3 = fVar2 * 200.0f;
  fVar4 = fVar2 * 150.0f;
  fVar5 = fVar2 * 5.4940833406217561e-315._0_4_;
  DAT_005ae704->vertex_buffer_ptr->u = 0x20000;
  fVar2 = (1.0 - fVar2) * 255.0f;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  fVar7 = 256.0f;
  fVar3 = (fVar3 + fVar2) * 256.0f;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar14 = round((double)fVar6);
  pSVar1[2].v = 0xfe0000;
  dVar15 = round((double)fVar3);
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar16 = round((double)((fVar4 + fVar2) * fVar7));
  pSVar1[3].u = 0x20000;
  dVar17 = round((double)(fVar7 * (fVar5 + fVar2)));
  iStack_34 = (int)ROUND(dVar15);
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  iStack_38 = (int)ROUND(dVar16);
  this_ptr_00->vertex_buffer_ptr->r = iStack_34;
  fStack_2c = (float)(int)ROUND(dVar17);
  this_ptr_00->vertex_buffer_ptr->g = iStack_38;
  iStack_30 = (int)ROUND(dVar14);
  this_ptr_00->vertex_buffer_ptr->b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr->a = iStack_30;
  this_ptr_00->vertex_buffer_ptr[1].r = iStack_34;
  this_ptr_00->vertex_buffer_ptr[1].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[1].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[1].a = iStack_30;
  this_ptr_00->vertex_buffer_ptr[2].r = iStack_34;
  this_ptr_00->vertex_buffer_ptr[2].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[2].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[2].a = iStack_30;
  this_ptr_00->vertex_buffer_ptr[3].r = iStack_34;
  this_ptr_00->vertex_buffer_ptr[3].g = iStack_38;
  this_ptr_00->vertex_buffer_ptr[3].b = (int)fStack_2c;
  this_ptr_00->vertex_buffer_ptr[3].a = iStack_30;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0.0;
  local_d0 = 0.0;
  local_c0 = 0;
  local_b8 = 2;
  fStack_d4 = 5.60519e-45;
  local_b4 = 3;
  local_bc = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (DAT_005ae704,(SMRGLHeaderPrimitive *)(auStack_dc + 4));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
