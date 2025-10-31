// Name: engine_keys.cpp_staticInit_FUN_00502410
// Address: 00502410
// Address Range: [[00502410, 0050241a]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_staticInit_FUN_00502410(void)
// Globals:
//   void* g_CKeysVTable = 00502420
//   void* g_CKeysPtr

#include "nocturne.h"

void __cdecl engine_keys_cpp_staticInit_FUN_00502410(void)

{
  g_CKeysPtr = &g_CKeysVTable;
  return;
}


// Assembly code:
// 00502410: MOV dword ptr [0x02dcd7d4],0x6605bc
//   Label: engine_keys.cpp_staticInit_FUN_00502410
//   XREF to: 02dcd7d4 (WRITE)
//   XREF to: 006605bc (DATA)
// 0050241a: RET
