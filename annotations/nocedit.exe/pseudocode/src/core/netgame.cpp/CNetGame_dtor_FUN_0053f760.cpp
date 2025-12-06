// Name: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
// Address: 0053f760
// Address Range: [[0053f760, 0053f779]]
// Convention: __cdecl
// Signature: CNetGame * core_netgame.cpp_CNetGame_dtor_FUN_0053f760(CNetGame * this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame *this_ptr)

{
  SSocketContext *pSVar1;
  
  pSVar1 = support_trisock_cpp_bindSocketWrapper_FUN_005e1af0
                     ((SSocketContext *)(this_ptr->field7_0x118 + 0x58));
  return (CNetGame *)pSVar1[-0xb].remote_addr.padding_0x08;
}
