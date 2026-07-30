// Name: core_hostage.cpp_CHostage_renderBackground_FUN_004b82d0
// Address: 004b82d0
// Address Range: [[004b82d0, 004b831e]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_renderBackground_FUN_004b82d0(CNPC *param_1,int param_2)

#include "nocturne.h"

void core_hostage_cpp_CHostage_renderBackground_FUN_004b82d0(CNPC *param_1,int param_2)

{
  EDeathState EVar1;
  int iVar2;
  
  EVar1 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
  if (0 < (int)EVar1) {
    iVar2 = _stricmp((char *)param_1,"ScatDazzle");
    if (iVar2 != 0) {
      if (param_2 != 0) {
        (param_1->base).render_active = 1;
      }
      core_npc_cpp_CNPC_renderBackground_FUN_004eece0(param_1,param_2);
      return;
    }
  }
  return;
}
