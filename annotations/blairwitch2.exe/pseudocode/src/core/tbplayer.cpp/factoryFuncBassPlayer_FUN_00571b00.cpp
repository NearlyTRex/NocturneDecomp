// Name: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00571b00
// Address: 00571b00
// Address Range: [[00571b00, 00571b1b]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00(void)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00(void)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)operator_new(0x24350);
  if (pCVar1 == (CBassPlayer *)0x0) {
    return (CBassPlayer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30(pCVar1);
  return pCVar1;
}
