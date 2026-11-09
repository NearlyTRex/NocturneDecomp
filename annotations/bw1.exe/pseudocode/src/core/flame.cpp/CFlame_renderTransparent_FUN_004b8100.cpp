// Name: core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
// Address: 004b8100
// Address Range: [[004b8100, 004b8aa3]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004b8100(CFlame *this_ptr)

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
  if (((*(int *)&this_ptr->field_0x1b4 != 0) || (*(int *)(0x01D2C900 + 0x1008) != 0)) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar1 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    if (*(int *)&this_ptr->field_0x298 != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = core_box_cpp_FUN_004207b0(local_108);
      *(uint *)&this_ptr->field_0x290 = uVar2;
    }
    if ((*(int *)&this_ptr->field_0x290 != 0) &&
       (1.0 < SQRT(*(float *)&this_ptr->field_0x160 * *(float *)&this_ptr->field_0x160 +
                   *(float *)&this_ptr->field_0x158 * *(float *)&this_ptr->field_0x158 +
                   *(float *)&this_ptr->field_0x15c * *(float *)&this_ptr->field_0x15c) *
              *(float *)&this_ptr->field_0x1ac)) {
      core_set_cpp_FUN_00551a00(g_CDemonSetPtr,(CDemonGlobe *)&this_ptr->field_0x168);
    }
    if ((*(int *)&this_ptr->field_0x290 != 0) && (*(int *)&this_ptr->field_0x1a8 != 3)) {
      engine_matrix_c_FUN_00483b50(DAT_00612560);
      rotation = (CVector3i *)0x0;
      aiStack_60[0] = iStack_90;
      aiStack_60[(uint)bVar7 * -2 + 1] = aiStack_8c[(uint)bVar7 * -2];
      aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
           aiStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      aiStack_60[0] = 0;
      aiStack_60[1] = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
                (DAT_00612560,(CVector3i *)aiStack_60,rotation);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      engine_matrix_c_FUN_00483b50(DAT_00612560);
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
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
                    (DAT_00612560,(CVector3i *)&uStack_9c,(CVector3i *)0x0);
          fStack_48 = *(float *)&this_ptr->field_0x158 * _DAT_005df6c7;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_e0 = (int)ROUND(_DAT_00600380 * 0.0);
          iStack_dc = (int)ROUND(_DAT_00600380 * 0.0);
          engine_special_cpp_FUN_00580173
                    (*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_e4);
          fStack_44 = *(float *)&this_ptr->field_0x15c;
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_00600380);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_c0);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_00600380);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_00600380);
          iStack_74 = (int)ROUND(_DAT_00600380 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_00600380);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_78);
          (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,&this_ptr->field_0x20,0);
          DAT_00629040 = 0xffff - _DAT_01c51cac;
          if (iStack_20 == 3) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          if (*(int *)&this_ptr->field_0x1a8 == 4) {
            DAT_00629040 = DAT_00629040 / 4;
          }
          if (*(int *)&this_ptr->field_0x1a8 == 1) {
            DAT_00629040 = DAT_00629040 / 2;
          }
          DAT_00629034 = 0xffff;
          DAT_00629038 = 0xffff;
          DAT_0062903c = 0xffff;
          DAT_00629064 = 0xffff;
          DAT_00629068 = 0xffff;
          DAT_0062906c = 0xffff;
          DAT_00629094 = 0xffff;
          DAT_00629098 = 0xffff;
          DAT_0062909c = 0xffff;
          DAT_006290c4 = 0xffff;
          DAT_006290c8 = 0xffff;
          DAT_006290cc = 0xffff;
          if (*(int *)&this_ptr->field_0x294 == 0) {
            DAT_0062902c = 0x80000;
            _DAT_0062905c = 0x80000;
            _DAT_0062908c = 0xf80000;
            _DAT_006290bc = 0xf80000;
          }
          else {
            DAT_0062902c = 0xf80000;
            _DAT_0062905c = 0xf80000;
            _DAT_0062908c = 0x80000;
            _DAT_006290bc = 0x80000;
          }
          _DAT_006290c0 = 0xf80000;
          DAT_00629090 = 0x80000;
          _DAT_00629060 = 0x80000;
          _DAT_00629030 = 0xf80000;
          fVar8 = (float10)*(float *)&this_ptr->field_0x164;
          DAT_00629070 = DAT_00629040;
          _DAT_006290a0 = DAT_00629040;
          _DAT_006290d0 = DAT_00629040;
          round();
          fStack_18 = (float)(int)ROUND(fVar8);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                    (DAT_00612560,
                     (SMRGLTextureBasic *)
                     (&DAT_0061cdc0 +
                     ((int)fStack_18 % 8) * 0x18 + *(int *)&this_ptr->field_0x1a8 * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
                    (DAT_00612560,aSStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
          engine_matrix_c_pop_FUN_004839a0();
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      engine_matrix_c_pop_FUN_004839a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    if ((*(int *)&this_ptr->field_0x1a8 == 1) &&
       (fStack_24 = *(float *)&this_ptr->field_0x15c * (float)_DAT_005df6cf,
       *(int *)&this_ptr->field_0x290 != 0)) {
      engine_matrix_c_FUN_00483b70(DAT_00612560);
      CStack_30._0_4_ = CStack_6c._0_4_;
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + 4) = aiStack_60[(uint)bVar7 * -2 + -2];
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
      auStack_d8._4_4_ = *(float *)&this_ptr->field_0x15c * (float)_DAT_005df6d7;
      auStack_d8._0_4_ = 0;
      uStack_d0 = 0;
      fStack_18 = (float)auStack_d8._4_4_;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&CStack_30,(CVector3f *)auStack_d8);
      fStack_18 = (float)core_actor_cpp_FUN_0040cc00(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      iStack_54 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_4c = (int)ROUND(_DAT_00600380 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_54);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_00600380);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_00600380);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_00600380);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_84);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*(int *)DAT_00612560 + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          engine_matrix_c_projectTransformedPoint_FUN_00507b50(piVar3);
        }
        this_ptr_00 = DAT_00612560;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*(int *)DAT_00612560 + 0x2c) = 0x4000;
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
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_0061cda8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
                (DAT_00612560,aSStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_matrix_c_pop_FUN_004839a0();
    }
    return *(int *)&this_ptr->field_0x290;
  }
  return 0;
}
