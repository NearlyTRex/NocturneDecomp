// Name: core_marquee.cpp_FUN_0050c480
// Address: 0050c480
// Address Range: [[0050c480, 0050c4b0]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_0050c480 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDemonActor *param_5,FILE *param_6)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c480(uint param_1, uint
   param_2) */

void core_marquee_cpp_FUN_0050c480
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDemonActor *param_5,FILE *param_6)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(param_5,param_6);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"DATA\\%s\n",param_5 + 1,unaff_EBX);
  return;
}
