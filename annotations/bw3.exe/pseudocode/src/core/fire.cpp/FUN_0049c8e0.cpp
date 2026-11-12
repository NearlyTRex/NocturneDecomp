// Name: core_fire.cpp_FUN_0049c8e0
// Address: 0049c8e0
// Address Range: [[0049c8e0, 0049cc9a]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049c8e0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049c8e0(CVector3f *param_1)

{
  byte *puVar1;
  int extraout_ECX;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStackY_1054 [1002];
  CDemonRenderer *pCVar5;
  CVector3f *euler_angles;
  CVector3f *translation;
  SMRGLHeaderPrimitive local_94;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float afStack_2c [4];
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if (ABS(param_1[1].x) != 0.0) {
    fVar3 = ((float10)1 - (float10)param_1[1].x) * (float10)_DAT_005c0690;
    round();
    local_14 = (int)ROUND(fVar3);
    if (param_1[2].y == 4.2039e-45) {
      puVar1 = &DAT_005fd084;
    }
    else {
      puVar1 = &DAT_005fcb14;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(puVar1 + local_14 * 0x30));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1)
    ;
    engine_drender_cpp_FUN_0046d250(DAT_005f2afc);
    translation = (CVector3f *)0x0;
    euler_angles = &local_6c;
    local_6c.x = local_30;
    *(float *)((int)&local_6c + (uint)bVar2 * -8 + 4) = afStack_2c[(uint)bVar2 * -2];
    pCVar5 = DAT_005f2afc;
    *(float *)((int)&local_6c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (pCVar5,euler_angles,translation);
    fVar3 = (float10)param_1[1].y * (float10)_DAT_005c06a8 * (float10)_DAT_005c06a0;
    fVar4 = -(float10)param_1[1].y * (float10)_DAT_005c0698 * (float10)_DAT_005c06a0;
    round();
    round();
    local_10 = (int)ROUND(fVar3);
    local_c = (int)ROUND(fVar4);
    if (extraout_ECX != 0) {
      local_10 = -local_10;
      local_c = -local_c;
    }
    local_8 = local_c;
    afStack_2c[2] = (float)local_c;
    afStack_2c[3] = param_1[1].y * _DAT_005c06b0 * (float)_DAT_005c06a0;
    local_1c = 0.0;
    local_60.x = (int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_60.y = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_60.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = afStack_2c[2];
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_60);
    local_8 = local_10;
    afStack_2c[2] = (float)local_10;
    local_3c.x = (int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_3c.y = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_3c.z = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_3c);
    afStack_2c[3] = -param_1[1].y * (float)_DAT_005c06b8 * (float)_DAT_005c06a0;
    local_48.x = (int)ROUND(afStack_2c[2] * _DAT_005df8e4);
    local_48.y = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_48.z = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_48);
    afStack_2c[2] = local_18;
    local_54.x = (int)ROUND(local_18 * _DAT_005df8e4);
    local_54.y = (int)ROUND(afStack_2c[3] * _DAT_005df8e4);
    local_54.z = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_54);
    pCVar5 = DAT_005f2afc;
    DAT_005f2afc->vertex_buffer_ptr->u = 0x20000;
    pCVar5->vertex_buffer_ptr->v = 0x20000;
    pCVar5->vertex_buffer_ptr[1].u = 0xfe0000;
    pCVar5->vertex_buffer_ptr[1].v = 0x20000;
    pCVar5->vertex_buffer_ptr[2].u = 0xfe0000;
    pCVar5->vertex_buffer_ptr[2].v = 0xfe0000;
    pCVar5->vertex_buffer_ptr[3].u = 0x20000;
    pCVar5->vertex_buffer_ptr[3].v = 0xfe0000;
    pCVar5->vertex_buffer_ptr->a = 0x8000;
    pCVar5->vertex_buffer_ptr[1].a = 0x8000;
    pCVar5->vertex_buffer_ptr[2].a = 0x8000;
    pCVar5->vertex_buffer_ptr[3].a = 0x8000;
    local_94.base.count = 4;
    local_94.surface_normal.D.i = 0;
    local_94.surface_normal.C.i = 0;
    local_94.surface_normal.B.i = 0;
    local_94.surface_normal.A.i = 0;
    local_7c = 0;
    local_74 = 2;
    local_70 = 3;
    local_78 = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar5,1);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,&local_94,0x123);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_pop_FUN_0046d080();
  }
  return;
}
