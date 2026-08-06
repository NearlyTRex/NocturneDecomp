// Name: core_simbox.cpp_factoryFunc_FUN_00516b70
// Address: 00516b70
// Address Range: [[00516b70, 00516b8b]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00516b70(void)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00516b70(void)

{
  CSimBox *pCVar1;
  
  pCVar1 = operator_new(0x5c4);
  if (pCVar1 == (CSimBox *)0x0) {
    return (CSimBox *)0x0;
  }
  pCVar1 = core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(pCVar1);
  return pCVar1;
}
