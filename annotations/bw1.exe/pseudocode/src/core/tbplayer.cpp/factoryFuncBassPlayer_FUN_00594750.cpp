// Name: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00594750
// Address: 00594750
// Address Range: [[00594750, 0059476b]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750(void)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750(void)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)operator_new(0x1fac0);
  if (pCVar1 == (CBassPlayer *)0x0) {
    return (CBassPlayer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780(pCVar1);
  return pCVar1;
}
