// Name: support_trisock.cpp_httpReaderInit_FUN_00579cc0
// Address: 00579cc0
// Address Range: [[00579cc0, 00579ce4]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_httpReaderInit_FUN_00579cc0(void *reader,CSocket *socket)

#include "nocturne.h"

void __cdecl support_trisock_cpp_httpReaderInit_FUN_00579cc0(void *reader,CSocket *socket)

{
  *(uint *)((int)reader + 0x808) = 0;
  *(uint *)reader = 0;
  *(CSocket **)((int)reader + 4) = socket;
  *(int *)((int)reader + 0x80c) = (int)reader + 8;
  return;
}
