// Name: core_netgame.cpp_IpAddr_copy_FUN_00530bd0
// Address: 00530bd0
// Address Range: [[00530bd0, 00530bde]]
// Convention: __cdecl
// Signature: SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_00530bd0(SIpAddr *this_ptr,SIpAddr *other)

#include "nocturne.h"

SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_00530bd0(SIpAddr *this_ptr,SIpAddr *other)

{
  this_ptr->ip_address = other->ip_address;
  return this_ptr;
}
