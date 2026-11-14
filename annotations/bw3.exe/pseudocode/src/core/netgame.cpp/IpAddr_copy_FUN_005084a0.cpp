// Name: core_netgame.cpp_IpAddr_copy_FUN_005084a0
// Address: 005084a0
// Address Range: [[005084a0, 005084ae]]
// Convention: __cdecl
// Signature: SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_005084a0(SIpAddr *this_ptr,SIpAddr *other)

#include "nocturne.h"

SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_005084a0(SIpAddr *this_ptr,SIpAddr *other)

{
  this_ptr->ip_address = other->ip_address;
  return this_ptr;
}
