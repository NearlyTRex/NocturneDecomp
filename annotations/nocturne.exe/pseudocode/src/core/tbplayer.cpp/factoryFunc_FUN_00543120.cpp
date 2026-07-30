// Name: core_tbplayer.cpp_factoryFunc_FUN_00543120
// Address: 00543120
// Address Range: [[00543120, 0054313b]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543120(void)

#include "nocturne.h"

CBassPlayer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543120(void)

{
  int iVar1;
  CBassPlayer *pCVar2;
  
  iVar1 = FUN_0056497c(0x1f578);
  if (iVar1 == 0) {
    return (CBassPlayer *)0x0;
  }
  pCVar2 = (CBassPlayer *)core_tbplayer_cpp_FUN_00543150(iVar1);
  return pCVar2;
}
