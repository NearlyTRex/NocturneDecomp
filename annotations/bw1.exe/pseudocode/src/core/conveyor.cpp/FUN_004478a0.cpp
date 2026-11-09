// Name: core_conveyor.cpp_FUN_004478a0
// Address: 004478a0
// Address Range: [[004478a0, 00447a14]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_004478a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_conveyor_cpp_FUN_004478a0(int param_1,float param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1016];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_2c;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar2 = 0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,(char *)(param_1 + 0x740));
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x808) = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,(char *)(param_1 + 0x7a4));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x808) != 0) {
      iStack_1c = param_1 + 0x734;
      pcStack_20 = (char *)(param_1 + 0x80c);
      iStack_14 = 0;
      for (iStack_18 = 0; iStack_18 < *(int *)&g_CDemonSetPtr->field_0x14d164;
          iStack_18 = iStack_18 + 1) {
        actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_14);
        if ((param_1 == *(int *)&actor_ptr->field_0xdc) &&
           ((*(char *)(*(int *)&actor_ptr->field_0xdc + 0x80c) == '\0' ||
            (iVar1 = core_actor_cpp_FUN_0040c550(actor_ptr,pcStack_20), iVar1 != 0)))) {
          core_actor_cpp_FUN_00408ac0(param_1,iStack_1c);
          fStack_50 = fStack_2c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          fStack_44 = fStack_50 * param_2;
          fStack_40 = fStack_4c * param_2;
          fStack_3c = fStack_48 * param_2;
          fStack_38 = fStack_50 * param_2;
          (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
          *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          if ((float *)&actor_ptr->field_0xe0 != &stack0xffffffc8) {
            *(float *)&actor_ptr->field_0xe0 = fStack_38;
            *(float *)&actor_ptr->field_0xe4 = fStack_34;
            *(uint *)&actor_ptr->field_0xe8 = uStack_30;
          }
          *(uint *)&actor_ptr->field_0xf4 = 0;
          *(uint *)&actor_ptr->field_0xf0 = 0;
          *(uint *)&actor_ptr->field_0xec = 0;
        }
        iStack_14 = iStack_14 + 4;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x808) = 0;
  }
  return;
}
