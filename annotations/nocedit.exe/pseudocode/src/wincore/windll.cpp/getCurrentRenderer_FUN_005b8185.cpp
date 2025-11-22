// Name: wincore_windll.cpp_getCurrentRenderer_FUN_005b8185
// Address: 005b8185
// Address Range: [[005b8185, 005b81a0]]
// Convention: __cdecl
// Signature: char * wincore_windll.cpp_getCurrentRenderer_FUN_005b8185(int * renderer)
// Globals:
//   TerminatedCString g_RendererDllName
//   int g_RendererHandle

#include "nocturne.h"

char * __cdecl wincore_windll_cpp_getCurrentRenderer_FUN_005b8185(int *renderer)

{
  *renderer = g_RendererHandle;
  return g_RendererDllName;
}


// Assembly code:
// 005b8185: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_getCurrentRenderer_FUN_005b8185
// 005b818b: LEA EDX,[EDX]
// 005b818e: MOV EBX,EBX
// 005b8190: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b8194: MOV EAX,[0x03f6b87c]
//   XREF to: 03f6b87c (READ)
// 005b8199: MOV dword ptr [EDX],EAX
// 005b819b: MOV EAX,0x684010
//   XREF to: 00684010 (DATA)
// 005b81a0: RET
