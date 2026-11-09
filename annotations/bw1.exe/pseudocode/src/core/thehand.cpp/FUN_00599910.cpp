// Name: core_thehand.cpp_FUN_00599910
// Address: 00599910
// Address Range: [[00599910, 00599a07]]
// Convention: unknown
// Signature: undefined4 core_thehand_cpp_FUN_00599910(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_thehand_cpp_FUN_00599910(CDemonActor *param_1,char *param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1016];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar2 = 0;
  pfStack_20 = (float *)&param_1->field_0x20;
  iStack_18 = 0;
  iStack_1c = 0;
  do {
    if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iStack_1c) {
      return 0;
    }
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_18);
    if (actor_ptr != param_1) {
      iVar1 = core_actor_cpp_FUN_0040c550(actor_ptr,param_2);
      if (iVar1 != 0) {
        fStack_34 = *(float *)&actor_ptr->field_0x20 - *pfStack_20;
        fStack_30 = *(float *)&actor_ptr->field_0x24 - pfStack_20[1];
        fStack_2c = *(float *)&actor_ptr->field_0x28 - pfStack_20[2];
        fStack_40 = fStack_34;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        fStack_3c = fStack_3c * (float)_DAT_005f7fe4;
        if (SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <
            *(float *)&param_1[0x90].field_0x60) {
          *(CDemonActor **)&param_1[0x90].field_0x68 = actor_ptr;
          return 1;
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_18 = iStack_18 + 4;
  } while( true );
}
