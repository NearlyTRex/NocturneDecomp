// Name: core_fire.cpp_CFireEffect_FUN_004c79d0
// Address: 004c79d0
// Address Range: [[004c79d0, 004c7a5d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c79d0(CFireEffect *this_ptr)

{
  CStake *pCVar1;
  int iVar2;
  CStake *pCVar3;
  CSpark *this_ptr_00;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  pCVar1 = g_StakeActiveListHead;
  pCVar3 = (CStake *)((int)&g_StakeActiveListHead->active + 1);
  this_ptr_00 = g_SparkPool + (int)g_StakeActiveListHead;
  g_StakeActiveListHead = pCVar3;
  if (0xff < (int)pCVar3) {
    g_StakeActiveListHead = (CStake *)0x0;
  }
  (*(g_SparkPool[(int)pCVar1].base.vtable)->setup)
            (&this_ptr_00->base,in_stack_00000008,in_stack_0000000c);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0xc000,0xffff);
  g_SparkPool[(int)pCVar1].first_update_flag = 0;
  g_SparkPool[(int)pCVar1].intensity_current =
       (uint)((longlong)in_stack_00000020 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)in_stack_00000020 * (longlong)iVar2) >> 0x20) << 0x10;
  g_SparkPool[(int)pCVar1].intensity_target = in_stack_0000001c;
  g_SparkPool[(int)pCVar1].field4_0x44 = in_stack_00000024;
  g_SparkPool[(int)pCVar1].fade_rate = in_stack_00000028;
  return;
}
