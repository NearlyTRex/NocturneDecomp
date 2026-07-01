// Name: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_005da020
// Address: 005da020
// MANUAL RECONSTRUCTION
// Address Range: [[005da020, 005da042]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_005da020(void)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_factoryFuncBassPlayer_FUN_005da020(void)

{
  CBassPlayer *pCVar1;
  
  pCVar1 = (CBassPlayer *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CBassPlayer),"..\\core\\tbplayer.cpp",32);
  if (pCVar1 == (CBassPlayer *)0x0) {
    return (CBassPlayer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(pCVar1);
  return pCVar1;
}
