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
  SLaserInfo local_c0;
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
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_114);
    local_114.beam_width = 0.08;
    local_114.laser_type = 2;
    local_114.color.r = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xdb8);
    local_114.color.g = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xde8);
    local_114.color.b = *(int *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe18);
    local_114.intensity = *(float *)(this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48);
    local_114.is_hero_weapon = 0;
    local_114.is_damaging = 0;
    local_c0.beam_width = 0.08;
    local_c0.laser_type = 2;
    local_c0.is_damaging = 0;
    local_c0.local_origin.x = local_114.local_origin.x;
    local_c0.is_hero_weapon = 0;
    local_c0.local_origin.y = local_114.local_origin.y;
    local_c0.local_origin.z = local_114.local_origin.z;
    local_c0.local_hit_position.x = local_114.local_hit_position.x;
    local_c0.local_hit_position.y = local_114.local_hit_position.y;
    local_c0.local_hit_position.z = local_114.local_hit_position.z;
    local_c0.local_normal.x = local_114.local_normal.x;
    local_c0.local_normal.y = local_114.local_normal.y;
    local_c0.local_normal.z = local_114.local_normal.z;
    local_c0.incidence_angle = local_114.incidence_angle;
    local_c0.reflectivity = local_114.reflectivity;
    local_c0.stored_angle = local_114.stored_angle;
    local_c0.transparency = local_114.transparency;
    local_c0.intensity = local_114.intensity;
    local_c0.color.r = local_114.color.r;
    local_c0.color.g = local_114.color.g;
    local_c0.color.b = local_114.color.b;
    core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
              (g_CFireEffectPtr,&local_3c,&local_54,&local_c0,0);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  pcVar1 = this_ptr->unk3 + in_stack_00000008 * 4 + 0xe48;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return;
}
