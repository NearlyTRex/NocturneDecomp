// Name: core_inv.cpp_FUN_004db8e0
// Address: 004db8e0
// Address Range: [[004db8e0, 004db9c4]]
// Convention: unknown
// Signature: void * core_inv_cpp_FUN_004db8e0(void *param_1,int param_2,int param_3)

#include "nocturne.h"

void * core_inv_cpp_FUN_004db8e0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"Deleting: %s\n",param_2);
  if (param_2 == *(int *)((int)param_1 + *(int *)((int)param_1 + 0x468) * 4 + 0x610)) {
    *(uint *)((int)param_1 + *(int *)((int)param_1 + 0x468) * 4 + 0x610) = 0;
  }
  pvVar2 = (void *)(*(int *)((int)param_1 + 0x468) * 4 + (int)param_1);
  if (param_2 == *(int *)((int)pvVar2 + 0x5fc)) {
    *(uint *)((int)pvVar2 + 0x5fc) = 0;
  }
  iVar5 = 0;
  pvVar3 = param_1;
  if (0 < *(int *)((int)param_1 + 0x10)) {
    do {
      iVar1 = iVar5 * 4;
      if (param_2 == *(int *)((int)pvVar3 + 0x14)) {
        iVar4 = *(int *)((int)param_1 + 0x10) + -1;
        *(int *)((int)param_1 + 0x10) = iVar4;
        pvVar2 = memmove
                           ((void *)((int)param_1 + iVar1 + 0x14),
                            (void *)((int)param_1 + iVar1 + 0x18),(iVar4 - iVar5) * 4);
        if (iVar5 < *(int *)((int)param_1 + 0x10)) {
          pvVar2 = (void *)(iVar1 + (int)param_1);
          do {
            *(uint *)((int)pvVar2 + 0x46c) = *(uint *)((int)pvVar2 + 0x470);
            iVar5 = iVar5 + 1;
            pvVar2 = (void *)((int)pvVar2 + 4);
          } while (iVar5 < *(int *)((int)param_1 + 0x10));
        }
        if (param_3 == 0) {
          return pvVar2;
        }
        pvVar2 = (void *)core_actor_cpp_FUN_00408730(param_2);
        return pvVar2;
      }
      iVar5 = iVar5 + 1;
      pvVar2 = (void *)((int)pvVar3 + 4);
      pvVar3 = pvVar2;
    } while (iVar5 < *(int *)((int)param_1 + 0x10));
  }
  return pvVar2;
}
