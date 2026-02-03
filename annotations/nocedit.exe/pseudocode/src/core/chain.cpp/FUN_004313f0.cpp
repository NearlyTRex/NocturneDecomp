// Name: core_chain.cpp_FUN_004313f0
// Address: 004313f0
// Address Range: [[004313f0, 00431404]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_FUN_004313f0(SChainVertex **objs)

#include "nocturne.h"

int __cdecl core_chain_cpp_FUN_004313f0(SChainVertex **objs)

{
  void *pvVar1;
  
  pvVar1 = __arrfini(objs,0x14,&g_SChainVertexTypeInfo);
  return (int)pvVar1;
}
