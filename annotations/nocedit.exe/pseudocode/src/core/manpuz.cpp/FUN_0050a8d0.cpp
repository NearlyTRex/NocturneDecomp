// Name: core_manpuz.cpp_FUN_0050a8d0
// Address: 0050a8d0
// Address Range: [[0050a8d0, 0050ab95]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a8d0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050a8d0(uint param_1, uint
   param_2, uint param_3) */

void core_manpuz_cpp_FUN_0050a8d0(void)

{
  char *pcVar1;
  char *pcVar2;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  byte local_114 [16];
  char local_104 [4];
  char local_100 [4];
  char local_fc [12];
  char local_f0 [4];
  char local_ec [4];
  char local_e8 [4];
  char local_e4 [4];
  char local_e0 [4];
  char local_dc [4];
  char local_d8 [4];
  char local_d4 [4];
  char local_d0 [4];
  char local_cc [4];
  char local_c8 [4];
  char local_c4 [4];
  char local_c0 [4];
  uint local_bc;
  uint local_b8;
  float local_b4;
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
  char *local_18;
  int local_14;
  
  local_18 = in_stack_00000004[4].create_event + 0x18;
  pcVar2 = local_18 + in_stack_00000008 * 100;
  local_14 = 0;
  if (*(int *)pcVar2 == 0) {
    local_14 = 1;
    iVar4 = core_manpuz_cpp_FUN_0050aef0();
    if ((*(int *)(local_18 + iVar4 * 100) == 0) || (*(float *)(local_18 + iVar4 * 100 + 8) <= 0.0))
    goto LAB_0050a917;
  }
  else {
LAB_0050a917:
    if (local_14 != 0) {
      in_stack_0000000c =
           *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) +
           in_stack_0000000c;
      goto LAB_0050a92e;
    }
  }
  in_stack_0000000c =
       *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) -
       in_stack_0000000c;
LAB_0050a92e:
  *(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10) =
       in_stack_0000000c;
  local_24 = (double)*(float *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10)
  ;
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      pcVar1 = in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
    }
    local_1c = pcVar2 + 0x24;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)local_1c,&local_6c,
                        (CVector3f *)(in_stack_00000004[4].create_event + 0xc));
    local_48.x = *(float *)(pcVar2 + 0xc) + pCVar3->x;
    local_48.y = *(float *)(pcVar2 + 0x10) + pCVar3->y;
    local_48.z = *(float *)(pcVar2 + 0x14) + pCVar3->z;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_3c,&local_48)
    ;
    local_60.x = 0.0;
    local_60.y = ((float)in_stack_00000004[4].was_created -
                 *(float *)(in_stack_00000004[4].create_event + 0x10)) * 4f;
    local_60.z = -(in_stack_00000004[0xf].field12_0xe0.y * 2f +
                   *(float *)(in_stack_00000004[4].create_event + 0x14) +
                  in_stack_00000004[4].create_prob) * 4f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              ((CMatrix3x3f *)local_1c,&local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&local_54,&local_30);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)local_114);
    local_114[4] = '\n';
    local_114[5] = -0x29;
    local_114[6] = -0x5d;
    local_114[7] = '=';
    local_114[8] = '\x02';
    local_114[9] = '\0';
    local_114[10] = '\0';
    local_114[0xb] = '\0';
    local_114._12_4_ =
         (&in_stack_00000004[0xe].previous_transform_state.position.z)[in_stack_00000008];
    local_104 = *(char (*) [4])(in_stack_00000004[0xf].actor_name + in_stack_00000008 * 4 + 8);
    local_100 = *(char (*) [4])
                 ((int)in_stack_00000004[0xf].orient_matrix.m + in_stack_00000008 * 4 + -4);
    local_114._0_4_ =
         *(uint *)(in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10);
    local_fc[0] = '\0';
    local_fc[1] = '\0';
    local_fc[2] = '\0';
    local_fc[3] = '\0';
    local_fc[4] = '\0';
    local_fc[5] = '\0';
    local_fc[6] = '\0';
    local_fc[7] = '\0';
    local_bc = 0x3da3d70a;
    local_b8 = 2;
    local_a4 = 0;
    local_a0[0] = local_fc[8];
    local_a0[1] = local_fc[9];
    local_a0[2] = local_fc[10];
    local_a0[3] = local_fc[0xb];
    local_a8 = 0;
    local_9c[0] = local_f0[0];
    local_9c[1] = local_f0[1];
    local_9c[2] = local_f0[2];
    local_9c[3] = local_f0[3];
    local_98[0] = local_ec[0];
    local_98[1] = local_ec[1];
    local_98[2] = local_ec[2];
    local_98[3] = local_ec[3];
    local_94[0] = local_e8[0];
    local_94[1] = local_e8[1];
    local_94[2] = local_e8[2];
    local_94[3] = local_e8[3];
    local_90[0] = local_e4[0];
    local_90[1] = local_e4[1];
    local_90[2] = local_e4[2];
    local_90[3] = local_e4[3];
    local_8c[0] = local_e0[0];
    local_8c[1] = local_e0[1];
    local_8c[2] = local_e0[2];
    local_8c[3] = local_e0[3];
    local_88[0] = local_dc[0];
    local_88[1] = local_dc[1];
    local_88[2] = local_dc[2];
    local_88[3] = local_dc[3];
    local_84[0] = local_d8[0];
    local_84[1] = local_d8[1];
    local_84[2] = local_d8[2];
    local_84[3] = local_d8[3];
    local_80[0] = local_d4[0];
    local_80[1] = local_d4[1];
    local_80[2] = local_d4[2];
    local_80[3] = local_d4[3];
    local_7c[0] = local_d0[0];
    local_7c[1] = local_d0[1];
    local_7c[2] = local_d0[2];
    local_7c[3] = local_d0[3];
    local_78[0] = local_cc[0];
    local_78[1] = local_cc[1];
    local_78[2] = local_cc[2];
    local_78[3] = local_cc[3];
    local_74[0] = local_c8[0];
    local_74[1] = local_c8[1];
    local_74[2] = local_c8[2];
    local_74[3] = local_c8[3];
    local_70[0] = local_c4[0];
    local_70[1] = local_c4[1];
    local_70[2] = local_c4[2];
    local_70[3] = local_c4[3];
    local_c0 = (char  [4])local_114._0_4_;
    local_b4 = (float)local_114._12_4_;
    local_b0 = local_104;
    local_ac = local_100;
    core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  pcVar2 = in_stack_00000004[0xf].create_event + in_stack_00000008 * 4 + -0x10;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  return;
}
