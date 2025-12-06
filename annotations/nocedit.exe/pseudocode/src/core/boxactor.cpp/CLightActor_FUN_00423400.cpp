// Name: core_boxactor.cpp_CLightActor_FUN_00423400
// Address: 00423400
// Address Range: [[00423400, 00423434]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423400()

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_FUN_00423400(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (in_stack_00000010,"%g mm",(double)(float)pCVar1[4].field26_0x148);
  return;
}
