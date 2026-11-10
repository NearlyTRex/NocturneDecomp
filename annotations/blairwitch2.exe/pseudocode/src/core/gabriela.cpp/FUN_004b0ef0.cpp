// Name: core_gabriela.cpp_FUN_004b0ef0
// Address: 004b0ef0
// Address Range: [[004b0ef0, 004b0f68]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b0ef0(CDemonActor *param_1)

#include "nocturne.h"

void core_gabriela_cpp_FUN_004b0ef0(CDemonActor *param_1)

{
  int iVar1;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  iVar1 = (**(code **)(*(int *)(*(int *)(&param_1[0xd8].field_0x1ac +
                                        *(int *)(param_1[0xd8].actor_name + 4) * 4) + 0x2b0) + 0xec)
          )(*(int *)(&param_1[0xd8].field_0x1ac + *(int *)(param_1[0xd8].actor_name + 4) * 4));
  if ((iVar1 != 0) &&
     (*(int *)(*(int *)(&param_1[0xd8].field_0x1ac + *(int *)(param_1[0xd8].actor_name + 4) * 4) +
              0x438) == 1)) {
    *(uint *)&param_1[0xdd].field_0x114 = 0x3f800000;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  *(uint *)&param_1[0xdd].field_0xf4 = 0;
  return;
}
