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
  int iVar2;
  int iVar3;
  float fVar4;
  int extraout_EAX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int *extraout_EDX_06;
  int *extraout_EDX_07;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  int *extraout_EDX_10;
  CDemonRenderer *this_ptr;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_106c [1004];
  CVector3i *rotation;
  float local_b0;
  SMRGLHeaderPrimitive SStack_ac;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
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
    engine_special_cpp_FUN_0055d9ec(&pSVar1->projected_vertex,&local_48);
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
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,&local_84,rotation);
      local_18 = *(float *)(param_1 + 0x18);
      if (0.0 < *(float *)(param_1 + 8)) {
        local_18 = (*(float *)(param_1 + 0x1c) - local_18) *
                   (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) + local_18;
      }
      local_6c = -local_18;
      local_68 = -local_18;
      local_64 = 0;
      local_54.x = (int)ROUND(local_6c * _DAT_006002bc);
      local_54.y = (int)ROUND(local_68 * _DAT_006002bc);
      local_54.z = (int)ROUND(_DAT_006002bc * 0.0);
      local_b0 = local_18;
      local_1c = local_6c;
      local_14 = local_68;
      engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_54);
      local_6c = local_b0;
      local_64 = 0;
      local_68 = local_14;
      local_30.x = (int)ROUND(local_b0 * _DAT_006002bc);
      local_30.y = (int)ROUND(local_14 * _DAT_006002bc);
      local_30.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_30);
      local_6c = local_b0;
      local_68 = local_18;
      local_64 = 0;
      local_78.x = (int)ROUND(local_b0 * _DAT_006002bc);
      local_78.y = (int)ROUND(local_18 * _DAT_006002bc);
      local_78.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_78);
      local_64 = 0;
      local_6c = local_1c;
      local_68 = local_18;
      local_60.x = (int)ROUND(local_1c * _DAT_006002bc);
      local_60.y = (int)ROUND(local_18 * _DAT_006002bc);
      local_60.z = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_60);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_0061ec00 + *(int *)(param_1 + 0x20) * 0x18)
                );
      (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1 + 0x24,0);
      iStack_24 = 0xffff - _DAT_01c38aec;
      fStack_20 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) *
                  (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) +
                  *(float *)(param_1 + 0xc);
      fVar4 = (float)core_bwspart_cpp_CSimpleParticleSystem_updateFade_FUN_005a8250
                               (*(CSimpleParticleSystem **)(param_1 + 0x54));
      local_14 = (float)iStack_24;
      fVar7 = (float10)iStack_24 * (float10)fVar4 * (float10)fStack_20;
      pSVar1 = DAT_0060b280->vertex_buffer_ptr;
      round();
      iStack_24 = (int)ROUND(fVar7);
      pSVar1->a = iStack_24;
      *(int *)(*extraout_EDX + 0x5c) = iStack_24;
      *(int *)(*extraout_EDX + 0x8c) = iStack_24;
      *(int *)(*extraout_EDX + 0xbc) = iStack_24;
      fVar6 = (float10)_DAT_005f0833;
      fVar7 = (float10)*(float *)(param_1 + 0x48) * fVar6;
      iVar2 = *extraout_EDX;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x20) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x48) * fVar6;
      iVar2 = *extraout_EDX_00;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x50) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x48) * fVar6;
      iVar2 = *extraout_EDX_01;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x80) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x48) * fVar6;
      iVar2 = *extraout_EDX_02;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0xb0) = local_1c;
      fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x4c);
      iVar2 = *extraout_EDX_03;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar2 + 0x24) = local_1c;
      fVar6 = (float10)_DAT_005f0833;
      fVar7 = (float10)*(float *)(param_1 + 0x4c) * fVar6;
      iVar2 = *extraout_EDX_04;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x54) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x4c) * fVar6;
      iVar2 = *extraout_EDX_05;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x84) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x4c) * fVar6;
      iVar2 = *extraout_EDX_06;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0xb4) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x50) * fVar6;
      iVar2 = *extraout_EDX_07;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x28) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x50) * fVar6;
      iVar2 = *extraout_EDX_08;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x58) = local_1c;
      fVar7 = (float10)*(float *)(param_1 + 0x50) * fVar6;
      iVar2 = *extraout_EDX_09;
      round();
      local_1c = (float)(int)ROUND(fVar7);
      *(float *)(iVar2 + 0x88) = local_1c;
      fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x50);
      iVar2 = *extraout_EDX_10;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar2 + 0xb8) = local_1c;
      this_ptr->vertex_buffer_ptr->u = 0;
      this_ptr->vertex_buffer_ptr->v = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].v = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].v = 0;
      this_ptr->vertex_buffer_ptr[3].u = 0;
      this_ptr->vertex_buffer_ptr[3].v = 0;
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr,1);
      SStack_ac.base.count = 4;
      SStack_ac.surface_normal.D.i = 0;
      SStack_ac.surface_normal.C.i = 0;
      SStack_ac.surface_normal.B.i = 0;
      SStack_ac.surface_normal.A.i = 0;
      uStack_94 = 0;
      uStack_88 = 3;
      uStack_90 = 1;
      uStack_8c = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                (DAT_0060b280,&SStack_ac);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return extraout_EAX;
    }
  }
  return iVar2;
}
