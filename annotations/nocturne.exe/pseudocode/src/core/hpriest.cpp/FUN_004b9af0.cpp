// Name: core_hpriest.cpp_FUN_004b9af0
// Address: 004b9af0
// Address Range: [[004b9af0, 004b9b4a]]
// Convention: unknown
// Signature: CNPC * core_hpriest_cpp_FUN_004b9af0(CNPC *param_1)

#include "nocturne.h"

CNPC * core_hpriest_cpp_FUN_004b9af0(CNPC *param_1)

{
  char cVar1;
  CNPC *pCVar2;
  char *pcVar3;
  CNPC *pCVar4;
  
  pCVar2 = core_npc_cpp_FUN_004ee950(param_1);
  (pCVar2->base).base.vtable._ub = &g_CHighPriestOfGardathVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar2->base).model,"priest.dfm");
  pcVar3 = "killPriest";
  pCVar4 = pCVar2 + 1;
  do {
    cVar1 = *pcVar3;
    (pCVar4->base).base.actor_name[0] = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar4->base).base.actor_name[1] = cVar1;
    pCVar4 = (CNPC *)((pCVar4->base).base.actor_name + 2);
  } while (cVar1 != '\0');
  return pCVar2;
}
