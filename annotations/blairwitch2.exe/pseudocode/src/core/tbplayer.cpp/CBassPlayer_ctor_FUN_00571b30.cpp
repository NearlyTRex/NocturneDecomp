// Name: core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30
// Address: 00571b30
// Address Range: [[00571b30, 00571b5d]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30(CBassPlayer *this_ptr)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30(CBassPlayer *this_ptr)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)core_npc_cpp_CNPC_ctor_FUN_00510460(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CBassPlayerVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar1->base).base.model,"bassplayer.dfm");
  return pCVar1;
}
