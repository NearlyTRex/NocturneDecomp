// Name: core_boxactor.cpp_CLightActor_FUN_00423400
// Address: 00423400
// Address Range: [[00423400, 00423434]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CLightActor_FUN_00423400 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, CDemonActor *param_5,undefined4 param_6,char *param_7)

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_FUN_00423400
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,char *param_7)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0(param_7,"%g mm",(double)(float)pCVar1[4].unk14,unaff_EBX)
  ;
  return;
}
