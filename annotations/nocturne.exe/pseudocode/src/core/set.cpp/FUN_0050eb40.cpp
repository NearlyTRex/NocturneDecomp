// Name: core_set.cpp_FUN_0050eb40
// Address: 0050eb40
// Address Range: [[0050eb40, 0050eb54]]
// Convention: __cdecl
// Signature: SRoom * __cdecl core_set_cpp_FUN_0050eb40(SRoom *objs,uint flags)

#include "nocturne.h"

SRoom * __cdecl core_set_cpp_FUN_0050eb40(SRoom *objs,uint flags)

{
  SRoom *pSVar1;
  
  pSVar1 = (SRoom *)__arrfini(objs,0x14,&g_SRoomTypeInfo_005a19b0);
  return pSVar1;
}
