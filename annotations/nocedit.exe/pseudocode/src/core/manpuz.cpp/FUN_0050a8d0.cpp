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
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
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
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)&stack0xfffffeec);
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
