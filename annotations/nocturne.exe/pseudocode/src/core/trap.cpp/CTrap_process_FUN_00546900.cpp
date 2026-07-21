// Name: core_trap.cpp_CTrap_process_FUN_00546900
// Address: 00546900
// Address Range: [[00546900, 00546aa8]]
// Convention: unknown
// Signature: void core_trap_cpp_CTrap_process_FUN_00546900(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trap_cpp_CTrap_process_FUN_00546900(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_98 [4];
  uint uStack_94;
  byte auStack_5c [24];
  float fStack_44;
  float fStack_40;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [2];
  float fStack_14;
  
  if (*(int *)(param_1 + 0x2cc) == 0) {
    iVar2 = *(int *)(param_1 + 0x2d0);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2);
      if (iVar2 == 0) {
        return;
      }
      *(uint *)(*(int *)(param_1 + 0x2d0) + 0xbd50) = 0;
      *(uint *)(param_1 + 0x2d0) = 0;
    }
    iVar3 = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_34);
    for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x150bf4); iVar2 = iVar2 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar3 + 0x150bf8 + 0x01E57284),_DAT_02de07c4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xbd50) == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_5c);
        (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,auStack_5c);
        if ((*(float *)(iVar1 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_24) &&
           (*(float *)(param_1 + 0x24) + fStack_30 <= *(float *)(iVar1 + 0x24) + fStack_44)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,afStack_1c,iVar1 + 0x20)
          ;
          if ((((local_34 <= afStack_1c[0] + fStack_40) && (afStack_1c[0] - fStack_40 <= fStack_28))
              && (fStack_2c <= fStack_14 + fStack_40)) && (fStack_14 - fStack_40 <= fStack_20)) {
            *(int *)(param_1 + 0x2d0) = iVar1;
            *(uint *)(iVar1 + 0xbd54) = 0x40000000;
            *(int *)(iVar1 + 0xbd50) = param_1;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_98);
            uStack_94 = 0x41200000;
            (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,auStack_98);
            return;
          }
        }
      }
      iVar3 = iVar3 + 4;
    }
  }
  return;
}
