// Name: support_trisock.cpp_CSocket_listenSocket_FUN_00549150
// Address: 00549150
// Address Range: [[00549150, 00549168]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_listenSocket_FUN_00549150(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_listenSocket_FUN_00549150(CSocket *this_ptr)

{
  int iVar1;
  
  iVar1 = listen(this_ptr->handle,1);
  return (uint)(iVar1 == 0);
}
