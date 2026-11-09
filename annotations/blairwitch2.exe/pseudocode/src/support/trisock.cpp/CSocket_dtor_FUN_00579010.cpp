// Name: support_trisock.cpp_CSocket_dtor_FUN_00579010
// Address: 00579010
// Address Range: [[00579010, 00579021]]
// Convention: __cdecl
// Signature: CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_00579010(CSocket *this_ptr,uint flags)

#include "nocturne.h"

CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_00579010(CSocket *this_ptr,uint flags)

{
  support_trisock_cpp_CSocket_closeSocket_FUN_00579360(this_ptr);
  return this_ptr;
}
