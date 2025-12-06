// Name: core_boxactor.cpp_CLightActor_FUN_00423380
// Address: 00423380
// Address Range: [[00423380, 004233ff]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423380()

#include "nocturne.h"

uint core_boxactor_cpp_CLightActor_FUN_00423380(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  uint in_stack_00000008;
  int iStack_134;
  CDemonActor *pCStack_130;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&iStack_134,"Select light type for CLightActor %s",in_stack_00000008);
  iStack_134 = pCVar1[4].scale.y;
  iVar2 = core_boxactor_cpp_FUN_00423110();
  if (iVar2 < 0) {
    return 0;
  }
  pCVar1[4].scale.y = iVar2;
  iStack_134 = 0x4233ee;
  pCStack_130 = pCVar1;
  core_boxactor_cpp_FUN_00422d60();
  return 1;
}
