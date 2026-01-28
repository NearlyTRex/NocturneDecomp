// Name: core_boxactor.cpp_CLightActor_FUN_00423310
// Address: 00423310
// Address Range: [[00423310, 00423379]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_FUN_00423310(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_FUN_00423310(CLightActor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CLightActorClassInfo.name_hash);
  switch(pCVar2[4].scale.y) {
  case 0:
    pcVar3 = "Custom";
    break;
  case 1:
    pcVar3 = "Flashlight";
    break;
  case 2:
    pcVar3 = "Lantern";
    break;
  case 3:
    pcVar3 = "Globe";
    break;
  default:
    pcVar3 = "???";
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
  return;
}
