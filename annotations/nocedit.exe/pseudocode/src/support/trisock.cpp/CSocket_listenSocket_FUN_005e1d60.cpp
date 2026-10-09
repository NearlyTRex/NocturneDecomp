// Name: support_trisock.cpp_CSocket_listenSocket_FUN_005e1d60
// Address: 005e1d60
// Address Range: [[005e1d60, 005e1d78]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_listenSocket_FUN_005e1d60(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_listenSocket_FUN_005e1d60(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = listen(this_ptr->handle,1);
  return (uint)(iVar1 == 0);
}
