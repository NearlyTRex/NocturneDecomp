// Name: wincore_windll.cpp_getVideoMemory_FUN_005b7d60
// Address: 005b7d60
// Address Range: [[005b7d60, 005b7d88]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_getVideoMemory_FUN_005b7d60(int * total_memory, int * available_memory, int * memory_type)
// Cross-references:
//   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 (00510c80) at 00510d24 [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_getVideoMemory* g_APIDLL_getVideoMemory
//   int g_ExternalRendererActive

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_getVideoMemory_FUN_005b7d60
          (int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (g_ExternalRendererActive == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_getVideoMemory)(total_memory,available_memory,memory_type);
  return iVar1;
}


// Assembly code:
// 005b7d60: CMP dword ptr [0x03f6b978],0x0
//   Label: wincore_windll.cpp_getVideoMemory_FUN_005b7d60
//   XREF to: 03f6b978 (READ)
// 005b7d67: JNZ 0x005b7d6c
//   XREF to: 005b7d6c (CONDITIONAL_JUMP)
// 005b7d69: XOR EAX,EAX
// 005b7d6b: RET
// 005b7d6c: PUSH ESI
//   Label: LAB_005b7d6c
// 005b7d6d: PUSH EBX
// 005b7d6e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005b7d72: PUSH ECX
// 005b7d73: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b7d77: PUSH EBX
// 005b7d78: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b7d7c: PUSH ESI
// 005b7d7d: CALL dword ptr [g_APIDLL_getVideoMemory]
//   XREF to: 03f6b914 (READ)
// 005b7d83: ADD ESP,0xc
// 005b7d86: POP EBX
// 005b7d87: POP ESI
// 005b7d88: RET
