// Name: core_pendulum.cpp_FUN_0054a5a0
// Address: 0054a5a0
// Address Range: [[0054a5a0, 0054a5da]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_0054a5a0 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDemonActor *param_5,undefined4 param_6,char *param_7)

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_0054a5a0(uint param_1, byte
   param_2, uint param_3) */

void core_pendulum_cpp_FUN_0054a5a0
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,char *param_7)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CPendulumClassInfo.name_hash);
  sprintf
            (param_7,"%f",(double)(pCVar1[2].unk4.z * (float)0.5),unaff_EBX);
  return;
}
