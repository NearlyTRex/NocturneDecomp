// Name: core_msnedit.cpp_FUN_0053ea30
// Address: 0053ea30
// Address Range: [[0053ea30, 0053eb30]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ea30()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053ea30(uint param_1) */

void core_msnedit_cpp_FUN_0053ea30(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_stack_00000004;
  int iStack_2624;
  uint auStack_2620 [2431];
  uint uStack_24;
  int local_20;
  int iStack_1c;
  
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    local_20 = iVar1;
    core_actor_cpp_FUN_0040e130();
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd4))();
    iVar3 = 0;
    if (0 < iStack_2624) {
      puVar2 = auStack_2620;
      do {
        core_actor_cpp_CActorProperty_FUN_0040ea50();
        iStack_1c = iVar3;
        switch(*puVar2) {
        case 5:
          if (*(int *)puVar2[0x1a] != 0) {
            uStack_24 = 7;
            core_script_cpp_CScript_ReallocSomething_FUN_00567510();
          }
          break;
        case 0xb:
          core_script_cpp_FUN_005671a0();
          break;
        case 0xc:
          core_script_cpp_FUN_00567010();
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 0x3b;
      } while (iVar3 < iStack_2624);
    }
  }
  return;
}
