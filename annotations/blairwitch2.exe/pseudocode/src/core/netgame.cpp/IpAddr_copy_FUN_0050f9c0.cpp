// Name: core_netgame.cpp_IpAddr_copy_FUN_0050f9c0
// Address: 0050f9c0
// Address Range: [[0050f9c0, 0050f9ce]]
// Convention: __cdecl
// Signature: SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_0050f9c0(SIpAddr *this_ptr,SIpAddr *other)

#include "nocturne.h"

SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_0050f9c0(SIpAddr *this_ptr,SIpAddr *other)

{
  *this_ptr = *other;
  return this_ptr;
}
