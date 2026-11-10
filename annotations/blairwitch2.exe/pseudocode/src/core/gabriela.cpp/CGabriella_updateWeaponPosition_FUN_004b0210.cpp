// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210
// Address: 004b0210
// Address Range: [[004b0210, 004b05a6]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella *this_ptr,float delta_time)

{
  byte *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1068 [798];
  byte local_380 [48];
  uint local_350 [12];
  uint local_320 [12];
  uint local_2f0 [12];
  uint local_2c0 [12];
  uint local_290 [12];
  uint local_260 [12];
  uint local_230 [12];
  byte local_200 [48];
  uint local_1d0 [12];
  uint local_1a0 [12];
  byte local_170 [48];
  uint local_140 [12];
  uint local_110 [12];
  uint local_e0 [12];
  uint local_b0 [12];
  uint local_80;
  float afStack_7c [5];
  float local_68;
  uint local_5c;
  uint local_50;
  float local_44;
  uint local_40;
  uint local_3c;
  float local_38 [3];
  uint local_2c;
  uint local_28;
  uint local_24;
  byte *local_18;
  byte *local_14;
  
  bVar5 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_FUN_00591c10(local_380,&this_ptr->field_0x20,&this_ptr->field_0x30);
  local_14 = &this_ptr->field_0x2437c;
  if (this_ptr->draw_blend < _DAT_005f7334) {
    (**(code **)(*(int *)(*(int *)(local_14 + *(int *)&this_ptr->field_0x247e4 * 4 + 0x610) + 0x2b0)
                + 0xe4))(*(int *)(local_14 + *(int *)&this_ptr->field_0x247e4 * 4 + 0x610),1);
    core_xform_cpp_FUN_00591c10(local_200,&DAT_01cb0650,&DAT_01cb065c);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (local_200,&this_ptr->field_0x1134 + _DAT_01cb06a0 * 0x30,local_380);
    puVar3 = local_230;
    puVar4 = local_1d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1d0);
    puVar3 = local_e0;
  }
  else {
    (**(code **)(*(int *)(*(int *)(local_14 + *(int *)&this_ptr->field_0x247e4 * 4 + 0x610) + 0x2b0)
                + 0xe4))(*(int *)(local_14 + *(int *)&this_ptr->field_0x247e4 * 4 + 0x610),2);
    core_xform_cpp_FUN_00591c10(local_170,&DAT_01cb0644,&DAT_0265370c);
    core_xform_cpp_buildRotationX_FUN_00593240
              (0x3fc90fdb,local_170,&this_ptr->field_0x1134 + _DAT_01cb06bc * 0x30);
    puVar3 = local_140;
    puVar4 = local_2c0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_005932c0(0x3fc90fdb,local_2c0);
    puVar3 = local_b0;
    puVar4 = local_2f0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_2f0);
    puVar3 = local_1a0;
    puVar4 = local_290;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_290);
    puVar3 = (uint *)&stack0xfffffc20;
    puVar4 = local_260;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_260);
    puVar1 = local_14;
    puVar3 = (uint *)&stack0xfffffc50;
    puVar4 = local_320;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840
                      (*(CDemonActor **)(local_14 + *(int *)(puVar1 + 0x468) * 4 + 0x610),
                       "?CCrossbow" + 1);
    if (iVar2 != 0) {
      core_xform_cpp_FUN_00592720(local_320);
      local_38[0] = afStack_7c[2];
      afStack_7c[(uint)bVar5 * -2 + 0x12] = afStack_7c[(uint)bVar5 * -2 + 3];
      afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(local_320);
      local_80 = local_5c;
      afStack_7c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2 + 9];
      afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      afStack_7c[1] = (1.0 - this_ptr->aim_weight) * afStack_7c[1];
      core_xform_cpp_FUN_00591c10(local_320,afStack_7c + 0x11,&local_80);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_320,local_380);
    puVar3 = local_110;
  }
  puVar4 = local_350;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_FUN_00592720(local_350);
  local_2c = local_50;
  afStack_7c[(uint)bVar5 * -2 + 0x15] = afStack_7c[(uint)bVar5 * -2 + 0xc];
  afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  iVar2 = *(int *)(&this_ptr->field_0x2437c + *(int *)&this_ptr->field_0x247e4 * 4 + 0x610);
  *(uint *)(iVar2 + 0x20) = local_2c;
  *(uint *)(iVar2 + 0x24) = local_28;
  *(uint *)(iVar2 + 0x28) = local_24;
  local_18 = &this_ptr->field_0x2437c;
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(local_350);
  puVar1 = local_18;
  local_44 = local_68;
  afStack_7c[(uint)bVar5 * -2 + 0xf] = afStack_7c[(uint)bVar5 * -2 + 6];
  afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  iVar2 = *(int *)(local_18 + *(int *)(puVar1 + 0x468) * 4 + 0x610);
  if ((float *)(iVar2 + 0x30) != afStack_7c + 0xe) {
    *(float *)(iVar2 + 0x30) = local_44;
    *(uint *)(iVar2 + 0x34) = local_40;
    *(uint *)(iVar2 + 0x38) = local_3c;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
            (*(CDemonActor **)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4));
  return;
}
