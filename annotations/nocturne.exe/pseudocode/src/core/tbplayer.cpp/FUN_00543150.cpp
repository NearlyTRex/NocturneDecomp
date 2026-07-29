// Name: core_tbplayer.cpp_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 0054317d]]
// Convention: unknown
// Signature: CNPC * core_tbplayer_cpp_FUN_00543150(CNPC *param_1)

#include "nocturne.h"

CNPC * core_tbplayer_cpp_FUN_00543150(CNPC *param_1)

{
  CNPC *pCVar1;
  
  pCVar1 = core_npc_cpp_FUN_004ee950(param_1);
  (pCVar1->base).base.vtable._ub = &g_CBassPlayerVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar1->base).model,"bassplayer.dfm");
  return pCVar1;
}
