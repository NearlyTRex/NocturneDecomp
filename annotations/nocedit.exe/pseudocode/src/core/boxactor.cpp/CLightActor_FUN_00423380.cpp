// Name: core_boxactor.cpp_CLightActor_FUN_00423380
// Address: 00423380
// Address Range: [[00423380, 004233ff]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_FUN_00423380(void)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_FUN_00423380(void)

{
  CLightActor *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  char local_138 [300];
  
  this_ptr = (CLightActor *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  sprintf(local_138,"Select light type for CLightActor %s",in_stack_00000004);
  iVar1 = core_boxactor_cpp_CLightActor_FUN_00423110((CLightActor *)local_138);
  if (iVar1 < 0) {
    return 0;
  }
  *(int *)this_ptr->unk = iVar1;
  core_boxactor_cpp_CLightActor_FUN_00422d60(this_ptr);
  return 1;
}
