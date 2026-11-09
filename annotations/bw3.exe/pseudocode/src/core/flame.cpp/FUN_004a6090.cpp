// Name: core_flame.cpp_FUN_004a6090
// Address: 004a6090
// Address Range: [[004a6090, 004a6a33]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_FUN_004a6090(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_FUN_004a6090(CFlame *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  int aiStackY_10b4 [974];
  CVector3i *rotation;
  SMRGLHeaderPrimitive aSStack_170 [4];
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  SMRGLHeaderPrimitive aSStack_148 [4];
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120 [6];
  uint local_108 [6];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  byte auStack_d8 [8];
  uint uStack_d0;
  int iStack_cc;
  int aiStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int aiStack_8c [2];
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  CVector3f CStack_6c;
  int aiStack_60 [3];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  CVector3f CStack_30;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  if (((*(int *)&this_ptr->field_0x1b4 != 0) || (*(int *)(0x01D81080 + 0x1008) != 0)) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar1 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    if (*(int *)&this_ptr->field_0x298 != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = core_box_cpp_FUN_0041daf0(local_108);
      *(uint *)&this_ptr->field_0x290 = uVar2;
    }
    if ((*(int *)&this_ptr->field_0x290 != 0) &&
       (1.0 < SQRT(*(float *)&this_ptr->field_0x160 * *(float *)&this_ptr->field_0x160 +
                   *(float *)&this_ptr->field_0x158 * *(float *)&this_ptr->field_0x158 +
                   *(float *)&this_ptr->field_0x15c * *(float *)&this_ptr->field_0x15c) *
              *(float *)&this_ptr->field_0x1ac)) {
      core_set_cpp_FUN_00537390(g_CDemonSetPtr,(CDemonGlobe *)&this_ptr->field_0x168);
    }
    if ((*(int *)&this_ptr->field_0x290 != 0) && (*(int *)&this_ptr->field_0x1a8 != 3)) {
      engine_matrix_c_FUN_0046d230(DAT_005f2afc);
      rotation = (CVector3i *)0x0;
      aiStack_60[0] = iStack_90;
      aiStack_60[(uint)bVar7 * -2 + 1] = aiStack_8c[(uint)bVar7 * -2];
      aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
           aiStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      aiStack_60[0] = 0;
      aiStack_60[1] = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                (DAT_005f2afc,(CVector3i *)aiStack_60,rotation);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      engine_matrix_c_FUN_0046d230(DAT_005f2afc);
      aiStack_60[0] = iStack_cc;
      aiStack_60[(uint)bVar7 * -2 + 1] = aiStack_c8[(uint)bVar7 * -2];
      aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
           aiStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if ((0x2000 < aiStack_60[0]) || (aiStack_60[0] < -0x2000)) {
        iStack_20 = 3;
      }
      iVar1 = 0;
      if (0 < iStack_20) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                    (DAT_005f2afc,(CVector3i *)&uStack_9c,(CVector3i *)0x0);
          fStack_48 = *(float *)&this_ptr->field_0x158 * _DAT_005c0bdc;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_e0 = (int)ROUND(_DAT_005dfe50 * 0.0);
          iStack_dc = (int)ROUND(_DAT_005dfe50 * 0.0);
          engine_special_cpp_FUN_005632a3
                    (*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_e4);
          fStack_44 = *(float *)&this_ptr->field_0x15c;
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_005dfe50);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_c0);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_005dfe50);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_005dfe50);
          iStack_74 = (int)ROUND(_DAT_005dfe50 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_005dfe50);
          engine_special_cpp_FUN_005632a3
                    ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&iStack_78);
          (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,&this_ptr->field_0x20,0);
          DAT_0060b040 = 0xffff - _DAT_01c6e24c;
          if (iStack_20 == 3) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          if (*(int *)&this_ptr->field_0x1a8 == 4) {
            DAT_0060b040 = DAT_0060b040 / 4;
          }
          if (*(int *)&this_ptr->field_0x1a8 == 1) {
            DAT_0060b040 = DAT_0060b040 / 2;
          }
          DAT_0060b034 = 0xffff;
          DAT_0060b038 = 0xffff;
          DAT_0060b03c = 0xffff;
          DAT_0060b064 = 0xffff;
          DAT_0060b068 = 0xffff;
          DAT_0060b06c = 0xffff;
          _DAT_0060b094 = 0xffff;
          _DAT_0060b098 = 0xffff;
          _DAT_0060b09c = 0xffff;
          _DAT_0060b0c4 = 0xffff;
          _DAT_0060b0c8 = 0xffff;
          _DAT_0060b0cc = 0xffff;
          if (*(int *)&this_ptr->field_0x294 == 0) {
            DAT_0060b02c = 0x80000;
            _DAT_0060b05c = 0x80000;
            _DAT_0060b08c = 0xf80000;
            _DAT_0060b0bc = 0xf80000;
          }
          else {
            DAT_0060b02c = 0xf80000;
            _DAT_0060b05c = 0xf80000;
            _DAT_0060b08c = 0x80000;
            _DAT_0060b0bc = 0x80000;
          }
          _DAT_0060b0c0 = 0xf80000;
          DAT_0060b090 = 0x80000;
          _DAT_0060b060 = 0x80000;
          _DAT_0060b030 = 0xf80000;
          fVar8 = (float10)*(float *)&this_ptr->field_0x164;
          DAT_0060b070 = DAT_0060b040;
          _DAT_0060b0a0 = DAT_0060b040;
          _DAT_0060b0d0 = DAT_0060b040;
          round();
          fStack_18 = (float)(int)ROUND(fVar8);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                    (DAT_005f2afc,
                     (SMRGLTextureBasic *)
                     (&DAT_005fde88 +
                     ((int)fStack_18 % 8) * 0x18 + *(int *)&this_ptr->field_0x1a8 * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
                    (DAT_005f2afc,aSStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
          engine_matrix_c_pop_FUN_0046d080();
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      engine_matrix_c_pop_FUN_0046d080();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    if ((*(int *)&this_ptr->field_0x1a8 == 1) &&
       (fStack_24 = *(float *)&this_ptr->field_0x15c * (float)_DAT_005c0be4,
       *(int *)&this_ptr->field_0x290 != 0)) {
      engine_matrix_c_FUN_0046d250(DAT_005f2afc);
      CStack_30._0_4_ = CStack_6c._0_4_;
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + 4) = aiStack_60[(uint)bVar7 * -2 + -2];
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
      auStack_d8._4_4_ = *(float *)&this_ptr->field_0x15c * (float)_DAT_005c0bec;
      auStack_d8._0_4_ = 0;
      uStack_d0 = 0;
      fStack_18 = (float)auStack_d8._4_4_;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&CStack_30,(CVector3f *)auStack_d8);
      fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      iStack_54 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_4c = (int)ROUND(_DAT_005dfe50 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_54);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_005dfe50);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_005dfe50);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_005dfe50);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&iStack_84);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*(int *)DAT_005f2afc + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          engine_matrix_c_projectTransformedPoint_FUN_004e5590(piVar3);
        }
        this_ptr_00 = DAT_005f2afc;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*(int *)DAT_005f2afc + 0x2c) = 0x4000;
      *(uint *)(*(int *)this_ptr_00 + 0x5c) = 0x4000;
      *(uint *)(*(int *)this_ptr_00 + 0x8c) = 0x4000;
      *(uint *)(*(int *)this_ptr_00 + 0xbc) = 0x4000;
      *(uint *)(*(int *)this_ptr_00 + 0x18) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x48) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x78) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0xac) = 0x80000;
      uStack_15c = 0;
      uStack_160 = 0;
      uStack_164 = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_150 = 2;
      uStack_14c = 3;
      uStack_16c = 4;
      uStack_154 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_005fde70);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
                (DAT_005f2afc,aSStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
      engine_matrix_c_pop_FUN_0046d080();
    }
    return *(int *)&this_ptr->field_0x290;
  }
  return 0;
}
