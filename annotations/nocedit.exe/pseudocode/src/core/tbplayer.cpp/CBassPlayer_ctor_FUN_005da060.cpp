// Name: core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
// Address: 005da060
// Address Range: [[005da060, 005da08d]]
// Convention: __cdecl
// Signature: CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer * this_ptr)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer *this_ptr)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CBassPlayerVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"bassplayer.dfm");
  return pCVar1;
}
