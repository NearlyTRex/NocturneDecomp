// Name: core_bwspart.cpp_FUN_005a86a0
// Address: 005a86a0
// Address Range: [[005a86a0, 005a8c8d]]
// Convention: unknown
// Signature: int core_bwspart_cpp_FUN_005a86a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_bwspart_cpp_FUN_005a86a0(int param_1)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  float fVar4;
  int extraout_EAX;
  byte bVar5;
  double dVar6;
  int aiStackY_106c [992];
  uint uStack_e4;
  SMRGLHeaderPrimitive SStack_e0;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  CVector3i *rotation;
  CVector3i local_84;
  CVector3i local_78;
  float local_6c;
  float local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  int iStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar2 == 0) {
    pSVar1 = DAT_0060b280->vertex_buffer_ptr;
    local_48.x = (int)ROUND(((CVector3f *)(param_1 + 0x24))->x * _DAT_006002bc);
    local_48.y = (int)ROUND(*(float *)(param_1 + 0x28) * _DAT_006002bc);
    local_48.z = (int)ROUND(*(float *)(param_1 + 0x2c) * _DAT_006002bc);
    engine_special_cpp_transformPoint_FUN_0055d9ec(&pSVar1->projected_vertex,&local_48);
    iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,pSVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,(CVector3f *)(param_1 + 0x24));
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(DAT_0060b280,&local_3c);
      rotation = (CVector3i *)0x0;
      local_84.x = local_3c.x;
      *(uint *)((int)&local_84 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&local_3c + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&local_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&local_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      uStack_c0 = 0x5a876a;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,&local_84,rotation);
      local_18 = *(float *)(param_1 + 0x18);
      if (0.0 < *(float *)(param_1 + 8)) {
        local_18 = (*(float *)(param_1 + 0x1c) - local_18) *
                   (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) + local_18;
      }
      fVar4 = local_18;
      local_6c = -local_18;
      local_68 = -local_18;
      local_64 = 0;
      local_54.x = (int)ROUND(local_6c * _DAT_006002bc);
      local_54.y = (int)ROUND(local_68 * _DAT_006002bc);
      local_54.z = (int)ROUND(_DAT_006002bc * 0.0);
      local_1c = local_6c;
      local_14 = local_68;
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_54);
      local_6c = fVar4;
      local_64 = 0;
      local_68 = local_14;
      local_30.x = (int)ROUND(fVar4 * _DAT_006002bc);
      local_30.y = (int)ROUND(local_14 * _DAT_006002bc);
      local_30.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_30);
      local_6c = fVar4;
      local_68 = local_18;
      local_64 = 0;
      local_78.x = (int)ROUND(fVar4 * _DAT_006002bc);
      local_78.y = (int)ROUND(local_18 * _DAT_006002bc);
      local_78.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_78);
      local_64 = 0;
      local_6c = local_1c;
      local_68 = local_18;
      local_60.x = (int)ROUND(local_1c * _DAT_006002bc);
      local_60.y = (int)ROUND(local_18 * _DAT_006002bc);
      local_60.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_60);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_0061ec00 + *(int *)(param_1 + 0x20) * 0x18)
                );
      uStack_c0 = 0x5a8986;
      (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))();
      iStack_24 = 0xffff - _DAT_01c38aec;
      fStack_20 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) *
                  (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) +
                  *(float *)(param_1 + 0xc);
      fVar4 = core_bwspart_cpp_CSimpleParticleSystem_updateFade_FUN_005a8250
                        (*(CSimpleParticleSystem **)(param_1 + 0x54));
      this_ptr = DAT_0060b280;
      local_14 = (float)iStack_24;
      pSVar1 = DAT_0060b280->vertex_buffer_ptr;
      dVar6 = round((double)((float)iStack_24 * fVar4 * fStack_20));
      local_30.z = (int)ROUND(dVar6);
      pSVar1->a = local_30.z;
      this_ptr->vertex_buffer_ptr[1].a = local_30.z;
      this_ptr->vertex_buffer_ptr[2].a = local_30.z;
      this_ptr->vertex_buffer_ptr[3].a = local_30.z;
      fVar4 = _DAT_005f0833;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar6 = round((double)(*(float *)(param_1 + 0x48) * _DAT_005f0833));
      iStack_24 = (int)ROUND(dVar6);
      pSVar1->r = iStack_24;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar6 = round((double)(*(float *)(param_1 + 0x48) * fVar4));
      local_30.z = (int)ROUND(dVar6);
      pSVar1[1].r = local_30.z;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      uStack_c0 = 0x5a8a7c;
      dVar6 = round((double)(*(float *)(param_1 + 0x48) * fVar4));
      local_30.y = (int)ROUND(dVar6);
      pSVar1[2].r = local_30.y;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      uStack_c4 = 0x5a8a9f;
      dVar6 = round((double)(*(float *)(param_1 + 0x48) * fVar4));
      local_30.x = (int)ROUND(dVar6);
      pSVar1[3].r = local_30.x;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      uStack_c8 = 0x5a8ac0;
      dVar6 = round((double)(fVar4 * *(float *)(param_1 + 0x4c)));
      local_3c.z = (int)ROUND(dVar6);
      pSVar1->g = local_3c.z;
      fVar4 = _DAT_005f0833;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.surface_normal.D.f = 8.315022e-39;
      dVar6 = round((double)(*(float *)(param_1 + 0x4c) * _DAT_005f0833));
      local_3c.y = (int)ROUND(dVar6);
      pSVar1[1].g = local_3c.y;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.surface_normal.C.f = 8.315067e-39;
      dVar6 = round((double)(*(float *)(param_1 + 0x4c) * fVar4));
      local_3c.x = (int)ROUND(dVar6);
      pSVar1[2].g = local_3c.x;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.surface_normal.B.f = 8.315116e-39;
      dVar6 = round((double)(*(float *)(param_1 + 0x4c) * fVar4));
      local_48.z = (int)ROUND(dVar6);
      pSVar1[3].g = local_48.z;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.surface_normal.A.f = 8.315165e-39;
      dVar6 = round((double)(*(float *)(param_1 + 0x50) * fVar4));
      local_48.y = (int)ROUND(dVar6);
      pSVar1->b = local_48.y;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.base.count = 0x5a8b6c;
      dVar6 = round((double)(*(float *)(param_1 + 0x50) * fVar4));
      local_48.x = (int)ROUND(dVar6);
      pSVar1[1].b = local_48.x;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_e0.base.type = 0x5a8b8c;
      dVar6 = round((double)(*(float *)(param_1 + 0x50) * fVar4));
      local_54.z = (int)ROUND(dVar6);
      pSVar1[2].b = local_54.z;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      uStack_e4 = 0x5a8bad;
      dVar6 = round((double)(fVar4 * *(float *)(param_1 + 0x50)));
      local_54.y = (int)ROUND(dVar6);
      pSVar1[3].b = local_54.y;
      this_ptr->vertex_buffer_ptr->u = 0;
      this_ptr->vertex_buffer_ptr->v = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].v = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].v = 0;
      this_ptr->vertex_buffer_ptr[3].u = 0;
      this_ptr->vertex_buffer_ptr[3].v = 0;
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr,1);
      SStack_e0.base.count = 4;
      SStack_e0.surface_normal.D.i = 0;
      SStack_e0.surface_normal.C.i = 0;
      SStack_e0.surface_normal.B.i = 0;
      SStack_e0.surface_normal.A.i = 0;
      uStack_c8 = 0;
      uStack_c4 = 1;
      uStack_c0 = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                (DAT_0060b280,&SStack_e0);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return extraout_EAX;
    }
  }
  return iVar2;
}
