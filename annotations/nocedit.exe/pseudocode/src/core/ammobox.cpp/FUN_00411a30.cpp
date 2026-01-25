// Name: core_ammobox.cpp_FUN_00411a30
// Address: 00411a30
// Address Range: [[00411a30, 00411a99]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_FUN_00411a30()

#include "nocturne.h"

void core_ammobox_cpp_FUN_00411a30(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CAmmoBoxClassInfo.name_hash);
  switch(pCVar2[2].validation_magic) {
  case 0:
    pcVar3 = "Generic";
    break;
  case 1:
    pcVar3 = "Holy";
    break;
  case 2:
    pcVar3 = "Wood";
    break;
  case 3:
    pcVar3 = "Silver";
    break;
  case 4:
    pcVar3 = "Gold";
    break;
  default:
    goto switchD_00411a55_default;
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
switchD_00411a55_default:
  return;
}
