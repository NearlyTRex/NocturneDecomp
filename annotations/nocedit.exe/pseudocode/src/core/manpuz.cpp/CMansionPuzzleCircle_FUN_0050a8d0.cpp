// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0
// Address: 0050a8d0
// Address Range: [[0050a8d0, 0050ab95]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0(CMansionPuzzleCircle * this_ptr)

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
  char local_c0 [4];
  uint local_bc;
  uint local_b8;
  char local_b4 [4];
  char local_b0 [4];
  char local_ac [4];
  uint local_a8;
  uint local_a4;
  char local_a0 [4];
  char local_9c [4];
  char local_98 [4];
  char local_94 [4];
  char local_90 [4];
  char local_8c [4];
  char local_88 [4];
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  char local_70 [4];
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
      fVar3 = *(float *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48) +
              in_stack_0000000c;
      goto LAB_0050a92e;
    }
  }
  fVar3 = *(float *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48) - in_stack_0000000c;
LAB_0050a92e:
  *(float *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48) = fVar3;
  local_24 = (double)*(float *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48);
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      pcVar1 = this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48;
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
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,&local_3c,&local_48);
    local_60.x = 0.0;
    local_60.y = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).y) * 4.0f;
    local_60.z = -(*(float *)(this_ptr->field10_0x648 + 0xec4) * 2.0f +
                   (this_ptr->emitter_pos).z + (this_ptr->gem_pos).z) * 4.0f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              ((CMatrix3x3f *)local_1c,&local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              (&this_ptr->base_actor,&local_54,&local_30);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_114);
    builtin_strncpy(local_114.field0_0x0 + 4,"\n\u05e3=\x02",6);
    local_114.field0_0x0[10] = '\0';
    local_114.field0_0x0[0xb] = '\0';
    local_114.field0_0x0._12_4_ =
         *(uint *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xdb8);
    local_114.field0_0x0._16_4_ =
         *(uint *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xde8);
    local_114.field0_0x0._20_4_ =
         *(uint *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe18);
    local_114.field0_0x0._0_4_ =
         *(uint *)(this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48);
    local_114.field0_0x0[0x18] = '\0';
    local_114.field0_0x0[0x19] = '\0';
    local_114.field0_0x0[0x1a] = '\0';
    local_114.field0_0x0[0x1b] = '\0';
    local_114.field0_0x0[0x1c] = '\0';
    local_114.field0_0x0[0x1d] = '\0';
    local_114.field0_0x0[0x1e] = '\0';
    local_114.field0_0x0[0x1f] = '\0';
    local_bc = 0x3da3d70a;
    local_b8 = 2;
    local_a4 = 0;
    local_a0[0] = local_114.field0_0x0[0x20];
    local_a0[1] = local_114.field0_0x0[0x21];
    local_a0[2] = local_114.field0_0x0[0x22];
    local_a0[3] = local_114.field0_0x0[0x23];
    local_a8 = 0;
    local_9c[0] = local_114.field0_0x0[0x24];
    local_9c[1] = local_114.field0_0x0[0x25];
    local_9c[2] = local_114.field0_0x0[0x26];
    local_9c[3] = local_114.field0_0x0[0x27];
    local_98[0] = local_114.field0_0x0[0x28];
    local_98[1] = local_114.field0_0x0[0x29];
    local_98[2] = local_114.field0_0x0[0x2a];
    local_98[3] = local_114.field0_0x0[0x2b];
    local_94[0] = local_114.field0_0x0[0x2c];
    local_94[1] = local_114.field0_0x0[0x2d];
    local_94[2] = local_114.field0_0x0[0x2e];
    local_94[3] = local_114.field0_0x0[0x2f];
    local_90[0] = local_114.field0_0x0[0x30];
    local_90[1] = local_114.field0_0x0[0x31];
    local_90[2] = local_114.field0_0x0[0x32];
    local_90[3] = local_114.field0_0x0[0x33];
    local_8c[0] = local_114.field0_0x0[0x34];
    local_8c[1] = local_114.field0_0x0[0x35];
    local_8c[2] = local_114.field0_0x0[0x36];
    local_8c[3] = local_114.field0_0x0[0x37];
    local_88[0] = local_114.field0_0x0[0x38];
    local_88[1] = local_114.field0_0x0[0x39];
    local_88[2] = local_114.field0_0x0[0x3a];
    local_88[3] = local_114.field0_0x0[0x3b];
    local_84[0] = local_114.field0_0x0[0x3c];
    local_84[1] = local_114.field0_0x0[0x3d];
    local_84[2] = local_114.field0_0x0[0x3e];
    local_84[3] = local_114.field0_0x0[0x3f];
    local_80[0] = local_114.field0_0x0[0x40];
    local_80[1] = local_114.field0_0x0[0x41];
    local_80[2] = local_114.field0_0x0[0x42];
    local_80[3] = local_114.field0_0x0[0x43];
    local_7c[0] = local_114.field0_0x0[0x44];
    local_7c[1] = local_114.field0_0x0[0x45];
    local_7c[2] = local_114.field0_0x0[0x46];
    local_7c[3] = local_114.field0_0x0[0x47];
    local_78[0] = local_114.field0_0x0[0x48];
    local_78[1] = local_114.field0_0x0[0x49];
    local_78[2] = local_114.field0_0x0[0x4a];
    local_78[3] = local_114.field0_0x0[0x4b];
    local_74[0] = local_114.field0_0x0[0x4c];
    local_74[1] = local_114.field0_0x0[0x4d];
    local_74[2] = local_114.field0_0x0[0x4e];
    local_74[3] = local_114.field0_0x0[0x4f];
    local_70[0] = local_114.field0_0x0[0x50];
    local_70[1] = local_114.field0_0x0[0x51];
    local_70[2] = local_114.field0_0x0[0x52];
    local_70[3] = local_114.field0_0x0[0x53];
    local_c0 = (char  [4])local_114.field0_0x0._0_4_;
    local_b4 = (char  [4])local_114.field0_0x0._12_4_;
    local_b0 = (char  [4])local_114.field0_0x0._16_4_;
    local_ac = (char  [4])local_114.field0_0x0._20_4_;
    core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  pcVar1 = this_ptr->field10_0x648 + in_stack_00000008 * 4 + 0xe48;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return;
}
