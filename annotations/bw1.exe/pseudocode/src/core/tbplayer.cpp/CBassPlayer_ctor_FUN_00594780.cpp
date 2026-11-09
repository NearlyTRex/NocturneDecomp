// Name: core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780
// Address: 00594780
// Address Range: [[00594780, 005947ad]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780(CBassPlayer *this_ptr)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780(CBassPlayer *this_ptr)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)core_npc_cpp_CNPC_ctor_FUN_00531670((CNPC *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CBassPlayerVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"bassplayer.dfm");
  return pCVar1;
}
