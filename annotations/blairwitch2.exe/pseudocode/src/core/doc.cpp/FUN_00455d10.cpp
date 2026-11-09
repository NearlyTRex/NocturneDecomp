// Name: core_doc.cpp_FUN_00455d10
// Address: 00455d10
// Address Range: [[00455d10, 0045629e]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00455d10(CDemonActor *param_1,float param_2)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  byte *apuStackY_1a0c [1486];
  float fVar6;
  code *blend_callback;
  byte local_290 [48];
  byte local_260 [48];
  uint local_230;
  uint auStack_22c [7];
  uint local_210 [4];
  uint local_200 [4];
  uint local_1f0 [4];
  uint local_1e0 [4];
  uint local_1d0 [4];
  uint local_1c0 [4];
  uint local_1b0 [4];
  uint local_1a0 [4];
  uint local_190;
  uint auStack_18c [7];
  uint local_170;
  uint local_160;
  uint local_150;
  uint local_140;
  uint local_130;
  uint local_120 [4];
  uint local_110;
  uint auStack_10c [7];
  uint local_f0;
  uint auStack_ec [7];
  uint local_d0 [4];
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54 [5];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte *apuStack_30 [3];
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  local_14 = param_2 * _DAT_005d0277;
  if (*(int *)&param_1[0xdd].field_0x1f4 == 0) {
    if (*(float *)&param_1[0xde].field_0x198 <= 0.0) {
      *(uint *)&param_1[0xde].field_0x198 = 0;
      goto LAB_00455d67;
    }
    fVar6 = *(float *)&param_1[0xde].field_0x198 - local_14;
  }
  else {
    if (1.0 <= *(float *)&param_1[0xde].field_0x198) {
      *(uint *)&param_1[0xde].field_0x198 = 0x3f800000;
      goto LAB_00455d67;
    }
    fVar6 = *(float *)&param_1[0xde].field_0x198 + local_14;
  }
  *(float *)&param_1[0xde].field_0x198 = fVar6;
LAB_00455d67:
  if (*(float *)&param_1[0xde].field_0x198 < 0.0) {
    *(uint *)&param_1[0xde].field_0x198 = 0;
  }
  if (*(float *)&param_1[0xde].field_0x198 <= 1.0) {
    if ((*(uint *)&param_1[0xde].field_0x198 & 0x7fffffff) == 0) {
      return;
    }
  }
  else {
    *(uint *)&param_1[0xde].field_0x198 = 0x3f800000;
  }
  local_20 = _DAT_01b4d268;
  local_18 = _DAT_01b4d270;
  local_24 = _DAT_01b4d290;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbf860a92);
  puVar2 = auStack_22c + 0xf;
  local_1f0[0] = local_f0;
  auStack_22c[(uint)bVar5 * -2 + 0x10] = auStack_ec[(uint)bVar5 * -2];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbf490fdb,puVar2);
  local_d0[0] = local_170;
  auStack_ec[(uint)bVar5 * -2 + 8] = auStack_18c[(uint)bVar5 * -2 + 8];
  auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
       auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
  (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
       (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_ec + 7);
  local_230 = local_90;
  auStack_22c[(uint)bVar5 * -2] = auStack_ec[(uint)bVar5 * -2 + 0x18];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf060a92);
  puVar2 = auStack_22c + 0x17;
  local_1d0[0] = local_150;
  auStack_22c[(uint)bVar5 * -2 + 0x18] = auStack_18c[(uint)bVar5 * -2 + 0x10];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
       auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1] =
       (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb,puVar2);
  local_1e0[0] = local_140;
  auStack_22c[(uint)bVar5 * -2 + 0x14] = auStack_18c[(uint)bVar5 * -2 + 0x14];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
       auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
       (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_22c + 0x13);
  local_200[0] = local_80;
  auStack_22c[(uint)bVar5 * -2 + 0xc] = auStack_ec[(uint)bVar5 * -2 + 0x1c];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb);
  auStack_18c[3] = auStack_22c[3];
  auStack_18c[(uint)bVar5 * -2 + 4] = auStack_22c[(uint)bVar5 * -2 + 4];
  auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
       auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
       (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
  local_1c = &param_1[0xdd].field_0x110;
  if (*(float *)&param_1[0xdd].field_0x154 <= 0.0) {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0);
    puVar2 = auStack_10c + 3;
  }
  else {
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)&param_1[0xdd].field_0x154);
    puVar2 = auStack_18c + 0x1b;
  }
  puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
  local_210[0] = *puVar2;
  auStack_22c[(uint)bVar5 * -2 + 8] = *puVar4;
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] = puVar4[(uint)bVar5 * -2 + 1];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
       (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(float *)(local_1c + 8) * (float)_DAT_005d027f);
  puVar2 = auStack_22c + 0x1b;
  puVar4 = auStack_22c + 7;
  local_1c0[0] = local_c0;
  auStack_22c[(uint)bVar5 * -2 + 0x1c] = auStack_ec[(uint)bVar5 * -2 + 0xc];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternionInPlace_FUN_00593d20(puVar4,puVar2);
  core_xform_cpp_slerpQuaternion_FUN_00593df0
            (&DAT_005fe2f0,&local_230,*(uint *)&param_1[0xde].field_0x198);
  local_230 = local_b0;
  auStack_22c[(uint)bVar5 * -2] = auStack_ec[(uint)bVar5 * -2 + 0x10];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60
            (&local_230,auStack_22c + 7,*(uint *)&param_1[0xde].field_0x198);
  local_1b0[0] = local_a0;
  auStack_22c[(uint)bVar5 * -2 + 0x20] = auStack_ec[(uint)bVar5 * -2 + 0x14];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
  apuStack_30[2] = &param_1[3].field_0x148;
  iVar3 = local_20 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0(apuStack_30[2] + iVar3,auStack_22c + 0x1f);
  puVar2 = (uint *)(&param_1[3].field_0x148 + iVar3);
  puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
  *puVar2 = local_110;
  *puVar4 = auStack_10c[(uint)bVar5 * -2];
  puVar4[(uint)bVar5 * -2 + 1] = auStack_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_10c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60
            (auStack_22c + 0xb,auStack_22c + 7,*(uint *)&param_1[0xde].field_0x198);
  local_1a0[0] = auStack_ec[3];
  auStack_22c[(uint)bVar5 * -2 + 0x24] = auStack_ec[(uint)bVar5 * -2 + 4];
  auStack_22c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (auStack_22c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25)[(uint)bVar5 * -2 + 1] =
       (auStack_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
  iVar3 = local_18 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_00593df0(apuStack_30[2] + iVar3,auStack_22c + 0x23);
  puVar2 = (uint *)(&param_1[3].field_0x148 + iVar3);
  puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
  *puVar2 = local_160;
  *puVar4 = auStack_18c[(uint)bVar5 * -2 + 0xc];
  puVar4[(uint)bVar5 * -2 + 1] = auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
  blend_callback = core_skeleton_cpp_FUN_00544cc0;
  fVar6 = *(float *)&param_1[0xde].field_0x198;
  iVar3 = local_24;
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_18c + 3,auStack_22c + 7);
  local_190 = local_130;
  auStack_18c[(uint)bVar5 * -2] = auStack_18c[(uint)bVar5 * -2 + 0x18];
  auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       auStack_18c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
  (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_18c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_FUN_005466c0
            ((CDeformableModelInstance *)(param_1 + 1),(CQuaternion4f *)&local_190,fVar6,iVar3,
             blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(param_1 + 1));
  local_70 = 0;
  local_68 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  puVar2 = local_54 + 2;
  local_6c = 0x3fc90fdb;
  local_64 = 0x3e800000;
  local_54[2] = local_70;
  local_54[(uint)bVar5 * -2 + 3] = auStack_ec[(uint)bVar5 * -2 + 0x20];
  local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       auStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21];
  local_60 = 0xbe051eb8;
  local_5c = 0;
  core_xform_cpp_FUN_00591c10(local_260,auStack_ec + 0x22,puVar2);
  core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
            (local_260,&param_1[6].field_0xfc + _DAT_01b4d290 * 0x30);
  core_xform_cpp_FUN_00591c10(local_290,&param_1->field_0x20,&param_1->field_0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_260,local_290);
  puVar2 = (uint *)&stack0xfffffd40;
  puVar4 = (uint *)&param_1[0xdd].field_0x1f8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_40 = 0x3dcccccd;
  local_3c = 0xbf800000;
  local_38 = 0x3f19999a;
  if ((uint *)&param_1[0xdd].field_0x22c != local_54 + 5) {
    *(uint *)&param_1[0xdd].field_0x22c = 0x3dcccccd;
    *(uint *)&param_1[0xdd].field_0x230 = 0xbf800000;
    *(uint *)&param_1[0xdd].field_0x234 = 0x3f19999a;
  }
  core_xform_cpp_FUN_00591de0(&param_1[0xdd].field_0x1f8);
  local_58 = local_34;
  local_54[(uint)bVar5 * -2] = apuStack_30[(uint)bVar5 * -2];
  local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       apuStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if ((uint *)&param_1[0xdd].field_0x238 != auStack_ec + 0x25) {
    *(uint *)&param_1[0xdd].field_0x238 = local_58;
    *(uint *)&param_1[0xdd].field_0x23c = local_54[0];
    *(uint *)&param_1[0xdd].field_0x240 = local_54[1];
  }
  puVar1 = &param_1[0xdd].field_0x22c;
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0(puVar1,&param_1[0xdd].field_0x1f8);
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
            (&g_CDemonLightInstance,*(float *)&param_1[0xde].field_0x198);
  g_CDemonLightInstance._7348_4_ = 1;
  g_CDemonLightInstance._7356_4_ = 1;
  if (puVar1 != &g_CDemonLightInstance.field_0x4) {
    g_CDemonLightInstance._4_4_ = *(uint *)puVar1;
    g_CDemonLightInstance._12_4_ = *(uint *)&param_1[0xdd].field_0x234;
    g_CDemonLightInstance._8_4_ = *(uint *)&param_1[0xdd].field_0x230;
  }
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&g_CDemonLightInstance.field_0x10,
             (CVector3f *)&param_1[0xdd].field_0x238);
  g_CDemonLightInstance._7376_4_ = 1;
  g_CDemonLightInstance._320_4_ = 0x41800000;
  g_CDemonLightInstance._56_4_ = 0x42000000;
  core_set_cpp_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
  return;
}
