// Name: engine_pod.cpp_CPod_ctor_FUN_00550980
// Address: 00550980
// Address Range: [[00550980, 005509ab]]
// Convention: __cdecl
// Signature: CPod * engine_pod.cpp_CPod_ctor_FUN_00550980(CPod * this_ptr)
// Cross-references:
//   core_podmain.cpp_CDemonPod_ctor_FUN_00551b00 (00551b00) at 00551b05 [UNCONDITIONAL_CALL]
//   core_podmain.cpp_staticInit_FUN_00551990 (00551990) at 00551995 [UNCONDITIONAL_CALL]
// Globals:
//   CPod_vtable g_CPodVTable

#include "nocturne.h"

CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00550980(CPod *this_ptr)

{
  CPod *pCVar1;
  
  this_ptr->pod_file_count = 0;
  this_ptr->vtable = &g_CPodVTable;
  pCVar1 = this_ptr;
  do {
    pCVar1 = (CPod *)pCVar1->pod_files;
    *(CPodFile **)pCVar1 = (CPodFile *)0x0;
  } while (pCVar1 != (CPod *)(this_ptr->pod_files + 99));
  return this_ptr;
}


// Assembly code:
// 00550980: MOV ECX,dword ptr [ESP + 0x4]
//   Label: engine_pod.cpp_CPod_ctor_FUN_00550980
//   XREF to: Stack[0x4] (READ)
// 00550984: MOV dword ptr [ECX],0x0
// 0055098a: MOV EAX,ECX
// 0055098c: MOV dword ptr [ECX + 0x194],0x6623b4
//   XREF to: 006623b4 (DATA)
// 00550996: LEA EDX,[ECX + 0x190]
// 0055099c: ADD EAX,0x4
//   Label: LAB_0055099c
// 0055099f: MOV dword ptr [EAX],0x0
// 005509a5: CMP EAX,EDX
// 005509a7: JNZ 0x0055099c
//   XREF to: 0055099c (CONDITIONAL_JUMP)
// 005509a9: MOV EAX,ECX
// 005509ab: RET
