// Name: support_trisock.cpp_CSocket_dtor_FUN_005e1af0
// Address: 005e1af0
// Address Range: [[005e1af0, 005e1b01]]
// Convention: __cdecl
// Signature: CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_005e1af0(CSocket *this_ptr,uint flags)

#include "nocturne.h"

CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_005e1af0(CSocket *this_ptr,uint flags)

{
  support_trisock_cpp_CSocket_closeSocket_FUN_005e1d20(this_ptr);
  return this_ptr;
}
