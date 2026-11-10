// Name: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004c91b0
// Address: 004c91b0
// Address Range: [[004c91b0, 004c94fc]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(CGabriella *this_ptr,float delta_time)

{
  byte *puVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1068 [798];
  CMatrix3x4f local_380;
  uint local_350 [12];
  CMatrix3x4f local_320;
  CMatrix3x4f local_2f0;
  uint local_2c0 [12];
  uint local_290 [12];
  uint local_260 [12];
  uint local_230 [12];
  CMatrix3x4f local_200;
  uint local_1d0 [12];
  uint local_1a0 [12];
  uint local_170 [12];
  uint local_140 [12];
  uint local_110 [12];
  float local_e0 [12];
  uint local_b0 [12];
  uint local_80;
  float local_7c [5];
  CVector3f local_68;
  float local_5c;
  float afStack_58 [2];
  CVector3f local_50;
  uint local_44;
  float local_40 [5];
  uint local_2c;
  byte *local_18;
  byte *local_14;
  
  bVar7 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0((CCharacter *)this_ptr,delta_time);
  core_xform_cpp_FUN_005b5760
            (&local_380,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
  local_14 = &this_ptr->field_0x1fae8;
  if (this_ptr->draw_blend < _DAT_00600d54) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xdc))
              (*(int *)&this_ptr->field_0x1fe20,1);
    core_xform_cpp_FUN_005b5760(&local_200,(CVector3f *)&DAT_01cc90e0,(CVector3f *)&DAT_01cc90ec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (&local_200,&this_ptr->field_0xfd8 + _DAT_01cc9130 * 0x30,&local_380);
    puVar4 = local_110;
    puVar5 = local_1d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_1d0);
    puVar4 = local_b0;
  }
  else {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xdc))
              (*(int *)&this_ptr->field_0x1fe20,2);
    core_xform_cpp_FUN_005b5760(&local_320,(CVector3f *)&DAT_01cc90d4,(CVector3f *)&DAT_02c8af28);
    core_xform_cpp_buildRotationX_FUN_005b6d90
              (0x3fc90fdb,&local_320,&this_ptr->field_0xfd8 + _DAT_01cc914c * 0x30);
    puVar4 = local_170;
    puVar5 = local_290;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc90fdb,local_290);
    puVar4 = local_1a0;
    puVar5 = local_2c0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_2c0);
    puVar4 = (uint *)&stack0xfffffc20;
    puVar5 = local_260;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_260);
    puVar4 = (uint *)&stack0xfffffc50;
    puVar5 = local_230;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_230);
    puVar1 = local_14;
    pfVar3 = local_e0;
    pCVar6 = &local_2f0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)(puVar1 + 0x338),"?CCrossbow" + 1);
    if (iVar2 != 0) {
      core_xform_cpp_FUN_005b6270(&local_2f0);
      local_68.x = local_40[2];
      *(float *)((int)&local_68 + (uint)bVar7 * -8 + 4) = local_40[(uint)bVar7 * -2 + 3];
      *(float *)((int)&local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           local_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_2f0);
      local_50.x = local_5c;
      *(float *)((int)&local_50 + (uint)bVar7 * -8 + 4) = afStack_58[(uint)bVar7 * -2];
      *(float *)((int)&local_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      local_50.z = (1.0 - this_ptr->aim_weight) * local_50.z;
      core_xform_cpp_FUN_005b5760(&local_2f0,&local_68,&local_50);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2f0,&local_380);
    puVar4 = local_140;
  }
  puVar5 = local_350;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_FUN_005b6270(local_350);
  local_44 = local_7c[2];
  local_40[(uint)bVar7 * -2] = local_7c[(uint)bVar7 * -2 + 3];
  local_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  iVar2 = *(int *)&this_ptr->field_0x1fe20;
  *(uint *)(iVar2 + 0x20) = local_44;
  *(float *)(iVar2 + 0x24) = local_40[0];
  *(float *)(iVar2 + 0x28) = local_40[1];
  local_18 = &this_ptr->field_0x1fae8;
  core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_350);
  puVar1 = local_18;
  local_80 = local_2c;
  local_7c[(uint)bVar7 * -2] = local_40[(uint)bVar7 * -2 + 6];
  local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  iVar2 = *(int *)(puVar1 + 0x338);
  if ((uint *)(iVar2 + 0x30) != &local_80) {
    *(uint *)(iVar2 + 0x30) = local_80;
    *(float *)(iVar2 + 0x34) = local_7c[0];
    *(float *)(iVar2 + 0x38) = local_7c[1];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
            (*(CDemonActor **)&this_ptr->field_0x1fe20);
  return;
}
