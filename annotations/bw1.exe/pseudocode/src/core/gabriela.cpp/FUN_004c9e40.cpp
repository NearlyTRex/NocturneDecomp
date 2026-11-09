// Name: core_gabriela.cpp_FUN_004c9e40
// Address: 004c9e40
// Address Range: [[004c9e40, 004c9eaa]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004c9e40(CDemonActor *param_1)

#include "nocturne.h"

void core_gabriela_cpp_FUN_004c9e40(CDemonActor *param_1)

{
  int iVar1;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
  iVar1 = (**(code **)(*(int *)(*(int *)&param_1[0x17b].field_0xd8 + 0x154) + 0xe4))
                    (*(int *)&param_1[0x17b].field_0xd8);
  if ((iVar1 != 0) && (*(int *)(*(int *)&param_1[0x17b].field_0xd8 + 0x2dc) == 1)) {
    *(uint *)&param_1[0x17c].field_0x144 = 0x3f800000;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  *(uint *)&param_1[0x17c].field_0x124 = 0;
  return;
}
