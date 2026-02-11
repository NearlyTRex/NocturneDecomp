// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0
// Address: 0050a8d0
// Address Range: [[0050a8d0, 0050ab95]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  CVector3f *pCVar4;
  int iVar5;
  int in_stack_00000008;
  float in_stack_0000000c;
  SLaserInfo local_114;
  float local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  double local_24;
  char *local_1c;
  int *local_18;
  int local_14;
  
  local_18 = &this_ptr->exists;
  piVar2 = local_18 + in_stack_00000008 * 0x19;
  local_14 = 0;
  if (*piVar2 == 0) {
    local_14 = 1;
    iVar5 = core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(this_ptr);
    if ((local_18[iVar5 * 0x19] == 0) || ((float)(local_18 + iVar5 * 0x19)[2] <= 0.0))
    goto LAB_0050a917;
  }
  else {
LAB_0050a917:
    if (local_14 != 0) {
      fVar3 = *(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48) + in_stack_0000000c;
      goto LAB_0050a92e;
    }
  }
  fVar3 = *(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48) - in_stack_0000000c;
LAB_0050a92e:
  *(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48) = fVar3;
  local_24 = (double)*(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48);
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      pcVar1 = this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
    }
    local_1c = (char *)(piVar2 + 9);
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)local_1c,&local_6c,&this_ptr->emitter_pos);
    local_48.x = (float)piVar2[3] + pCVar4->x;
    local_48.y = (float)piVar2[4] + pCVar4->y;
    local_48.z = (float)piVar2[5] + pCVar4->z;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&local_3c,&local_48);
    local_60.x = 0.0;
    local_60.y = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).y) * 4.0f;
    local_60.z = -(*(float *)(this_ptr->unk3 + 0xec4) * 2.0f + (this_ptr->emitter_pos).z +
                  (this_ptr->gem_pos).z) * 4.0f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              ((CMatrix3x3f *)local_1c,&local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_54,&local_30);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_114);
    local_114.beam_width = 0.08;
    local_114.laser_type = 2;
    local_114.color.r = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xdb8);
    local_114.color.g = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xde8);
    local_114.color.b = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe18);
    local_114.intensity = *(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48);
    local_114.is_hero_weapon = 0;
    local_114.is_damaging = 0;
    local_bc = 0x3da3d70a;
    local_b8 = 2;
    local_a4 = 0;
    local_a0 = local_114.local_origin.x;
    local_a8 = 0;
    local_9c = local_114.local_origin.y;
    local_98 = local_114.local_origin.z;
    local_94 = local_114.local_hit_position.x;
    local_90 = local_114.local_hit_position.y;
    local_8c = local_114.local_hit_position.z;
    local_88 = local_114.local_normal.x;
    local_84 = local_114.local_normal.y;
    local_80 = local_114.local_normal.z;
    local_7c = local_114.incidence_angle;
    local_78 = local_114.reflectivity;
    local_74 = local_114.stored_angle;
    local_70 = local_114.transparency;
    local_c0 = local_114.intensity;
    local_b4 = local_114.color.r;
    local_b0 = local_114.color.g;
    local_ac = local_114.color.b;
    core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  pcVar1 = this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return;
}
