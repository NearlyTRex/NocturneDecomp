// Name: core_boxactor.cpp_CLightActor_FUN_00423400
// Address: 00423400
// Address Range: [[00423400, 00423434]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_FUN_00423400(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_FUN_00423400(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  sprintf(in_stack_0000000c,"%g mm",(double)(float)pCVar1[4].unk14)
  ;
  return;
}
