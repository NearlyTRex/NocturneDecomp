// Name: core_boxactor.cpp_FUN_00420420
// Address: 00420420
// Address Range: [[00420420, 004207e8]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_00420420(int param_1,float param_2)

#include "nocturne.h"

void core_boxactor_cpp_FUN_00420420(int param_1,float param_2)

{
  CDemonSet *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CDemonGlobe *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1040 [965];
  int filter_pos_x;
  int filter_pos_y;
  byte auStack_118 [48];
  byte auStack_e8 [48];
  uint auStack_b8 [12];
  uint auStack_88 [12];
  byte auStack_58 [4];
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  core_boxactor_cpp_FUN_0041f360(param_1,param_2);
  if ((*(int *)(param_1 + 0x6e8) == 2) &&
     (param_2 = *(float *)(param_1 + 14000) - param_2, *(float *)(param_1 + 14000) = param_2,
     param_2 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    iVar4 = 0;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
              ((CDemonLight *)(param_1 + 0x6ec),CDemonFilter_ARRAY_007e17b8 + iVar3,iVar4,
               filter_pos_x,filter_pos_y);
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3e19999a);
    *(float *)(param_1 + 14000) = fStack_14;
  }
  if (*(int *)(param_1 + 0x6e8) == 3) {
    pCVar5 = (CDemonGlobe *)(param_1 + 0x36b4);
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar5,(CVector3f *)(param_1 + 0x20));
    uVar2 = rand();
    *(uint *)(param_1 + 0x36f0) = uVar2 & 0x7fff;
    *(char *)(param_1 + 0x36d0) = (char)((int)(uVar2 & 0x7fff) >> 10);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar5,2.0);
    pCVar1 = g_CDemonSetPtr;
    *(uint *)(param_1 + 0x36d4) = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(pCVar1,pCVar5);
    return;
  }
  if (*(int *)(param_1 + 0x23a0) != 0) {
    core_actor_cpp_FUN_00408b80(param_1,param_1 + 0x3698);
    auStack_58 = (byte  [4])fStack_40;
    afStack_54[(uint)bVar8 * -2] = afStack_3c[(uint)bVar8 * -2];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if ((float *)(param_1 + 0x6f0) != (float *)auStack_58) {
      *(float *)(param_1 + 0x6f0) = (float)auStack_58;
      *(float *)(param_1 + 0x6f4) = afStack_54[0];
      *(float *)(param_1 + 0x6f8) = afStack_54[1];
    }
    core_xform_cpp_FUN_00583940(auStack_118,&DAT_02cfd900,param_1 + 0x36a4);
    core_xform_cpp_FUN_00583940(auStack_e8,&DAT_02cfd900,param_1 + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_118,auStack_e8);
    puVar6 = auStack_88;
    puVar7 = auStack_b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_FUN_00583b10(auStack_b8);
    CStack_4c._0_4_ = CStack_34._0_4_;
    *(uint *)((int)&CStack_4c + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_4c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_dirmat_cpp_FUN_0045b550((CMatrix3x3f *)(param_1 + 0x6fc),&CStack_4c);
    if (*(int *)(param_1 + 0x6e8) == 2) {
      *(uint *)(param_1 + 0x82c) = 0;
      core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
                ((CDemonLight *)(param_1 + 0x6ec),0.0);
      core_set_cpp_FUN_00537270(g_CDemonSetPtr,(CDemonLight *)(param_1 + 0x6ec));
      fStack_28 = (float)core_actor_cpp_FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_24 = (float)core_actor_cpp_FUN_0040ce40(0xbe800000,0x3e800000);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0xbe800000,0x3e800000);
      pCVar5 = (CDemonGlobe *)(param_1 + 0x36b4);
      auStack_58 = (byte  [4])((float)auStack_58 + fStack_14);
      fStack_1c = fStack_24;
      afStack_54[0] = afStack_54[0] + fStack_24;
      fStack_18 = fStack_28;
      afStack_54[1] = afStack_54[1] + fStack_28;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar5,(CVector3f *)auStack_58);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x476a6000,0x477de800);
      fVar9 = (float10)fStack_14;
      round();
      fStack_14 = (float)(int)ROUND(fVar9);
      *(float *)(param_1 + 0x36f0) = fStack_14;
      iVar3 = ((int)fStack_14 + ((int)fStack_14 >> 0x1f) * -0x100) -
              (uint)(((int)fStack_14 >> 0x1f) << 7 < 0);
      iVar4 = iVar3 >> 0x1f;
      *(char *)(param_1 + 0x36d0) =
           (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x416c0000,0x41740000);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar5,fStack_14);
      pCVar1 = g_CDemonSetPtr;
      *(uint *)(param_1 + 0x36d4) = 1;
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(pCVar1,pCVar5);
      return;
    }
  }
  return;
}
