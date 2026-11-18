// Name: support_trisock.cpp_httpReaderInit_FUN_0059d330
// Address: 0059d330
// Address Range: [[0059d330, 0059d354]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_httpReaderInit_FUN_0059d330(void *reader,CSocket *socket)

#include "nocturne.h"

void __cdecl support_trisock_cpp_httpReaderInit_FUN_0059d330(void *reader,CSocket *socket)

{
  *(uint *)((int)reader + 0x808) = 0;
  *(uint *)reader = 0;
  *(CSocket **)((int)reader + 4) = socket;
  *(int *)((int)reader + 0x80c) = (int)reader + 8;
  return;
}
