// Name: core_tbplayer.cpp_factoryFunc_FUN_00543120
// Address: 00543120
// Address Range: [[00543120, 0054313b]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543120(void)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543120(void)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = operator_new(0x1f578);
  if (pCVar1 == (CBassPlayer *)0x0) {
    return (CBassPlayer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CBassPlayer_ctor_FUN_00543150(pCVar1);
  return pCVar1;
}
