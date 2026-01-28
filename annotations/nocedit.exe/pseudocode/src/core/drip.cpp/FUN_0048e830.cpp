// Name: core_drip.cpp_FUN_0048e830
// Address: 0048e830
// Address Range: [[0048e830, 0048e8cb]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_0048e830(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048e859) */
/* Signature: byte actors_other_drip.cpp_FUN_0048e830(uint param_1, byte param_2,
   uint param_3) */

void core_drip_cpp_FUN_0048e830(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDripClassInfo.name_hash)
  ;
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "Water";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  if ((uint)fVar2 < 2) {
    pcVar4 = "Lava";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  if (fVar2 == 2.8026e-45) {
    pcVar4 = "Stalagwhatever";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  return;
}
