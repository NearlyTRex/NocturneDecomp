// Name: core_weapon.cpp_FUN_00589fd0
// Address: 00589fd0
// Address Range: [[00589fd0, 0058a1ff]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_00589fd0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weapon_cpp_FUN_00589fd0(int param_1)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1060 [1006];
  CVector3f *euler_angles;
  CMatrix3x3f aCStack_a0 [40];
  uint uStack_78;
  float afStack_74 [2];
  byte auStack_6c [4];
  float afStack_68 [5];
  float fStack_54;
  float fStack_48;
  float afStack_44 [5];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
  uStack_78 = afStack_68[2];
  afStack_74[(uint)bVar3 * -2] = afStack_68[(uint)bVar3 * -2 + 3];
  afStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_actor_cpp_FUN_00408d70();
  euler_angles = (CVector3f *)&fStack_48;
  g_CDemonLightInstance._7348_4_ = 1;
  auStack_6c = (byte  [4])fStack_54;
  afStack_68[(uint)bVar3 * -2] = afStack_68[(uint)bVar3 * -2 + 6];
  afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  g_CDemonLightInstance._7356_4_ = 1;
  pfVar2 = (float *)(param_1 + 0x34 + (uint)bVar3 * -8);
  fStack_48 = *(float *)(param_1 + 0x30);
  afStack_44[(uint)bVar3 * -2] = *pfVar2;
  afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] = pfVar2[(uint)bVar3 * -2 + 1];
  fStack_48 = fStack_48 + _DAT_005ee532;
  core_dirmat_cpp_FUN_00449280(aCStack_a0,euler_angles);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  core_dirmat_cpp_FUN_00449530();
  fStack_30 = afStack_44[2];
  afStack_44[(uint)bVar3 * -2 + 6] = afStack_44[(uint)bVar3 * -2 + 3];
  afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  auStack_6c = (byte  [4])((float)auStack_6c + fStack_30);
  afStack_68[0] = afStack_68[0] + fStack_2c;
  afStack_68[1] = afStack_68[1] + fStack_28;
  if (&stack0x00000000 != &g_CDemonLightInstance.field_0x70) {
    g_CDemonLightInstance._4_4_ = auStack_6c;
    g_CDemonLightInstance._8_4_ = afStack_68[0];
    g_CDemonLightInstance._12_4_ = afStack_68[1];
  }
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&g_CDemonLightInstance.field_0x10,(CVector3f *)&fStack_48);
  g_CDemonLightInstance._320_4_ = 0x42000000;
  g_CDemonLightInstance._56_4_ = 0x42000000;
  g_CDemonLightInstance._7376_4_ = 1;
  fStack_14 = 1.0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))();
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
  if ((iVar1 != 0) && (fStack_18 = *(float *)(iVar1 + 0x2437c), fStack_18 < _DAT_005ee536)) {
    fStack_14 = fStack_18 * _DAT_005ee53a;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(&g_CDemonLightInstance,fStack_14);
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810
            ((CDemonGlobe *)0x2661f3c,(CVector3f *)auStack_6c);
  _DAT_02661f78 = 0x8000;
  DAT_02661f58 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860((CDemonGlobe *)0x2661f3c,5.0);
  _DAT_02661f5c = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,(CDemonGlobe *)0x2661f3c);
  return;
}
