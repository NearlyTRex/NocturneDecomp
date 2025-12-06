// Name: core_boxactor.cpp_CLightActor_FUN_00423440
// Address: 00423440
// Address Range: [[00423440, 004234da]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423440()

#include "nocturne.h"

uint
core_boxactor_cpp_CLightActor_FUN_00423440
          (uint param_1,uint param_2,int unaff_EBX,uint param_4,
          CDemonActor *param_5,uint param_6)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char acStack_134 [296];
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"Enter FOV (mm) for CLightActor %s",param_6);
  iVar2 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,acStack_134,(float *)&stack0xfffffff8,true,1.0,9999.0,true);
  if (iVar2 == 0) {
    return 0;
  }
  pCVar1[4].field26_0x148 = unaff_EBX;
  return 1;
}
