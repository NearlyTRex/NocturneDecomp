// Name: core_boxactor.cpp_CLightActor_FUN_00423440
// Address: 00423440
// Address Range: [[00423440, 004234da]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_CLightActor_FUN_00423440(void)

#include "nocturne.h"

uint core_boxactor_cpp_CLightActor_FUN_00423440(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  char local_13c [300];
  float local_10;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  local_10 = (float)pCVar1[4].unk14;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_13c,"Enter FOV (mm) for CLightActor %s",in_stack_00000004);
  iVar2 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,local_13c,&local_10,1,1.0,9999.0,1);
  if (iVar2 == 0) {
    return 0;
  }
  pCVar1[4].unk14 = (int)local_10;
  return 1;
}
