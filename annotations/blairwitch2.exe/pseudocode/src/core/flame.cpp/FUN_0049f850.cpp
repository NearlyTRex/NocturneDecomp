// Name: core_flame.cpp_FUN_0049f850
// Address: 0049f850
// Address Range: [[0049f850, 004a01f3]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_FUN_0049f850(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flame_cpp_FUN_0049f850(CFlame *this_ptr)

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
  if (((*(int *)&this_ptr->field_0x310 != 0) || (*(int *)(0x01D182F0 + 0x1008) != 0)) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    if (*(int *)&this_ptr->field_0x3f4 != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
      puVar4 = local_120;
      puVar6 = local_108;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      uVar2 = core_box_cpp_FUN_0041a840(local_108);
      *(uint *)&this_ptr->field_0x3ec = uVar2;
    }
    if ((*(int *)&this_ptr->field_0x3ec != 0) &&
       (1.0 < SQRT(*(float *)&this_ptr->field_0x2bc * *(float *)&this_ptr->field_0x2bc +
                   *(float *)&this_ptr->field_0x2b4 * *(float *)&this_ptr->field_0x2b4 +
                   *(float *)&this_ptr->field_0x2b8 * *(float *)&this_ptr->field_0x2b8) *
              *(float *)&this_ptr->field_0x308)) {
      core_set_cpp_FUN_00530750(g_CDemonSetPtr,(CDemonGlobe *)&this_ptr->field_0x2c4);
    }
    if ((*(int *)&this_ptr->field_0x3ec != 0) && (*(int *)&this_ptr->field_0x304 != 3)) {
      engine_matrix_c_FUN_0046b650(DAT_0060b280);
      rotation = (CVector3i *)0x0;
      aiStack_60[0] = iStack_90;
      aiStack_60[(uint)bVar7 * -2 + 1] = aiStack_8c[(uint)bVar7 * -2];
      aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
           aiStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      aiStack_60[0] = 0;
      aiStack_60[1] = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,(CVector3i *)aiStack_60,rotation);
      iStack_20 = 1;
      uStack_9c = 0;
      uStack_98 = 0;
      iStack_94 = 0;
      engine_matrix_c_FUN_0046b650(DAT_0060b280);
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
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                    (DAT_0060b280,(CVector3i *)&uStack_9c,(CVector3i *)0x0);
          fStack_48 = *(float *)&this_ptr->field_0x2b4 * _DAT_005d5885;
          fStack_44 = 0.0;
          fStack_40 = 0.0;
          iStack_e4 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_e0 = (int)ROUND(_DAT_005f68f0 * 0.0);
          iStack_dc = (int)ROUND(_DAT_005f68f0 * 0.0);
          engine_special_cpp_FUN_0055d723
                    (*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_e4);
          fStack_44 = *(float *)&this_ptr->field_0x2b8;
          iStack_c0 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_bc = (int)ROUND(fStack_44 * _DAT_005f68f0);
          iStack_b8 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_c0);
          fStack_48 = -fStack_48;
          iStack_a8 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_a4 = (int)ROUND(fStack_44 * _DAT_005f68f0);
          iStack_a0 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_a8);
          fStack_44 = 0.0;
          iStack_78 = (int)ROUND(fStack_48 * _DAT_005f68f0);
          iStack_74 = (int)ROUND(_DAT_005f68f0 * 0.0);
          iStack_70 = (int)ROUND(fStack_40 * _DAT_005f68f0);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_78);
          (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,&this_ptr->field_0x20,0);
          DAT_00622040 = 0xffff - _DAT_01c38aec;
          if (iStack_20 == 3) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          if (*(int *)&this_ptr->field_0x304 == 4) {
            DAT_00622040 = DAT_00622040 / 4;
          }
          if (*(int *)&this_ptr->field_0x304 == 1) {
            DAT_00622040 = DAT_00622040 / 2;
          }
          DAT_00622034 = 0xffff;
          DAT_00622038 = 0xffff;
          DAT_0062203c = 0xffff;
          DAT_00622064 = 0xffff;
          DAT_00622068 = 0xffff;
          DAT_0062206c = 0xffff;
          DAT_00622094 = 0xffff;
          DAT_00622098 = 0xffff;
          DAT_0062209c = 0xffff;
          DAT_006220c4 = 0xffff;
          DAT_006220c8 = 0xffff;
          DAT_006220cc = 0xffff;
          if (*(int *)&this_ptr->field_0x3f0 == 0) {
            DAT_0062202c = 0x80000;
            _DAT_0062205c = 0x80000;
            _DAT_0062208c = 0xf80000;
            _DAT_006220bc = 0xf80000;
          }
          else {
            DAT_0062202c = 0xf80000;
            _DAT_0062205c = 0xf80000;
            _DAT_0062208c = 0x80000;
            _DAT_006220bc = 0x80000;
          }
          _DAT_006220c0 = 0xf80000;
          DAT_00622090 = 0x80000;
          _DAT_00622060 = 0x80000;
          _DAT_00622030 = 0xf80000;
          fVar8 = (float10)*(float *)&this_ptr->field_0x2c0;
          DAT_00622070 = DAT_00622040;
          _DAT_006220a0 = DAT_00622040;
          _DAT_006220d0 = DAT_00622040;
          round();
          fStack_18 = (float)(int)ROUND(fVar8);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (DAT_0060b280,
                     (SMRGLTextureBasic *)
                     (&DAT_00615b00 +
                     ((int)fStack_18 % 8) * 0x18 + *(int *)&this_ptr->field_0x304 * 0xc0));
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
          uStack_144 = 4;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_140 = 0;
          uStack_128 = 2;
          uStack_130 = 0;
          uStack_12c = 1;
          uStack_124 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                    (DAT_0060b280,aSStack_148);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
          engine_matrix_c_pop_FUN_0046b4a0();
          iVar1 = iVar1 + 1;
          iStack_94 = iStack_94 + 0x2aaa;
        } while (iVar1 < iStack_20);
      }
      engine_matrix_c_pop_FUN_0046b4a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    if ((*(int *)&this_ptr->field_0x304 == 1) &&
       (fStack_24 = *(float *)&this_ptr->field_0x2b8 * (float)_DAT_005d588d,
       *(int *)&this_ptr->field_0x3ec != 0)) {
      engine_matrix_c_FUN_0046b670(DAT_0060b280);
      CStack_30._0_4_ = CStack_6c._0_4_;
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + 4) = aiStack_60[(uint)bVar7 * -2 + -2];
      *(int *)((int)&CStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           aiStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
      auStack_d8._4_4_ = *(float *)&this_ptr->field_0x2b8 * (float)_DAT_005d5895;
      auStack_d8._0_4_ = 0;
      uStack_d0 = 0;
      fStack_18 = (float)auStack_d8._4_4_;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&CStack_30,(CVector3f *)auStack_d8);
      fStack_18 = (float)core_actor_cpp_FUN_0040cf60(0x3f7ae148,0x3f828f5c);
      fStack_f0 = fStack_18 * fStack_24;
      fStack_e8 = 0.0;
      iStack_54 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_50 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_4c = (int)ROUND(_DAT_005f68f0 * 0.0);
      fStack_ec = fStack_f0;
      engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_54);
      fStack_f0 = -fStack_f0;
      iStack_3c = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_38 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_34 = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_3c);
      fStack_ec = -fStack_ec;
      iStack_b4 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_b0 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_ac = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_b4);
      fStack_f0 = -fStack_f0;
      iStack_84 = (int)ROUND(fStack_f0 * _DAT_005f68f0);
      iStack_80 = (int)ROUND(fStack_ec * _DAT_005f68f0);
      iStack_7c = (int)ROUND(fStack_e8 * _DAT_005f68f0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_84);
      iStack_1c = 0;
      do {
        piVar3 = (int *)(*(int *)DAT_0060b280 + iStack_1c);
        iVar1 = piVar3[2];
        if (0x200 < iVar1) {
          iVar5 = iVar1 + -0x100;
          *piVar3 = (int)(((longlong)*piVar3 * (longlong)iVar5) / (longlong)iVar1);
          piVar3[1] = (int)(((longlong)piVar3[1] * (longlong)iVar5) / (longlong)iVar1);
          piVar3[2] = iVar5;
          engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(piVar3);
        }
        this_ptr_00 = DAT_0060b280;
        iStack_1c = iStack_1c + 0x30;
      } while (iStack_1c != 0xc0);
      *(uint *)(*(int *)DAT_0060b280 + 0x2c) = 0x4000;
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
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (this_ptr_00,(SMRGLTextureBasic *)&DAT_00615ae8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
                (DAT_0060b280,aSStack_170,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_matrix_c_pop_FUN_0046b4a0();
    }
    return *(int *)&this_ptr->field_0x3ec;
  }
  return 0;
}
