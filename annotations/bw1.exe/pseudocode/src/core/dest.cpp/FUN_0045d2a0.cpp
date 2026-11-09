// Name: core_dest.cpp_FUN_0045d2a0
// Address: 0045d2a0
// Address Range: [[0045d2a0, 0045d4a5]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_FUN_0045d2a0(CActorDestination *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dest_cpp_FUN_0045d2a0(CActorDestination *this_ptr,float delta_time)

{
  CDemonActor *actor;
  int iVar1;
  byte bVar2;
  float afStackY_1034 [1013];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar2 = 0;
  if ((*(int *)&this_ptr->field_0x1f0 != 0) && (iVar1 = *(int *)&this_ptr->field_0x158, iVar1 == 0))
  {
    iStack_1c = iVar1;
    for (iStack_18 = iVar1; iStack_18 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_18 = iStack_18 + 1) {
      actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_1c);
      fStack_34 = *(float *)&this_ptr->field_0x20 - *(float *)&actor->field_0x20;
      fStack_30 = *(float *)&this_ptr->field_0x24 - *(float *)&actor->field_0x24;
      fStack_2c = *(float *)&this_ptr->field_0x28 - *(float *)&actor->field_0x28;
      fStack_4c = fStack_34;
      (&stack0xffffffb8)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if ((SQRT(fStack_44 * fStack_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48) <
           (float)_DAT_005d835b) &&
         (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0045d550(this_ptr,actor),
         iVar1 != 0)) break;
      iStack_1c = iStack_1c + 4;
    }
  }
  iVar1 = *(int *)&this_ptr->field_0x158;
  if (iVar1 != 0) {
    fStack_28 = *(float *)(iVar1 + 0x20) - *(float *)&this_ptr->field_0x20;
    fStack_24 = *(float *)(iVar1 + 0x24) - *(float *)&this_ptr->field_0x24;
    fStack_20 = *(float *)(iVar1 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_40 = fStack_28;
    (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&stack0xffffffa8 != &stack0xffffffc0) {
      fStack_58 = fStack_40;
      fStack_54 = fStack_3c;
      fStack_50 = fStack_38;
    }
    if ((((float)_DAT_005d8353 <= ABS(fStack_58)) || ((float)_DAT_005d8353 <= ABS(fStack_54))) ||
       ((float)_DAT_005d8353 <= ABS(fStack_50))) {
      *(uint *)&this_ptr->field_0x184 = 0;
      *(uint *)&this_ptr->field_0x1f0 = 0;
      return;
    }
    if ((*(int *)&this_ptr->field_0x1ec != 0) ||
       ((*(int *)&this_ptr->field_0x184 == 0 && (*(int *)&this_ptr->field_0x1f0 == 0)))) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,&this_ptr->field_0x188);
    }
    *(uint *)&this_ptr->field_0x184 = 1;
  }
  *(uint *)&this_ptr->field_0x1f0 = 0;
  return;
}
