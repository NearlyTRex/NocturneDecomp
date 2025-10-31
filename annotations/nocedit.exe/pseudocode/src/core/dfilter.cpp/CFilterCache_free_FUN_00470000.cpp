// Name: core_dfilter.cpp_CFilterCache_free_FUN_00470000
// Address: 00470000
// Address Range: [[00470000, 0047005b]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterCache_free_FUN_00470000(CFilterCache * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0 (0046ffe0) at 0046ffe6 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa46 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfilter_cpp_0061e49e
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache *this_ptr)

{
  CDemonFilter *ptr;
  CFilterCache *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      g_CurrentDebugLine = 0x4b;
      g_CurrentDebugFilename = "..\\core\\dfilter.cpp";
      if (pCVar1->filters[0] != (CDemonFilter *)0x0) {
        ptr = core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(pCVar1->filters[0]);
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CFilterCache *)pCVar1->filter_names;
    } while (iVar2 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}


// Assembly code:
// 00470000: PUSH EBX
//   Label: core_dfilter.cpp_CFilterCache_free_FUN_00470000
// 00470001: PUSH ESI
// 00470002: PUSH EDI
// 00470003: PUSH EBP
// 00470004: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00470008: MOV EDX,dword ptr [EDI]
// 0047000a: XOR ESI,ESI
// 0047000c: TEST EDX,EDX
// 0047000e: JLE 0x0047003b
//   XREF to: 0047003b (CONDITIONAL_JUMP)
// 00470010: MOV EBP,0x61e49e
//   XREF to: 0061e49e (DATA)
// 00470015: MOV EBX,EDI
// 00470017: MOV dword ptr [0x02f0d944],0x4b
//   Label: LAB_00470017
//   XREF to: 02f0d944 (WRITE)
// 00470021: MOV EAX,dword ptr [EBX + 0xa04]
// 00470027: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 0047002d: TEST EAX,EAX
// 0047002f: JNZ 0x00470046
//   XREF to: 00470046 (CONDITIONAL_JUMP)
// 00470031: INC ESI
//   Label: LAB_00470031
// 00470032: MOV ECX,dword ptr [EDI]
// 00470034: ADD EBX,0x4
// 00470037: CMP ESI,ECX
// 00470039: JL 0x00470017
//   XREF to: 00470017 (CONDITIONAL_JUMP)
// 0047003b: MOV dword ptr [EDI],0x0
//   Label: LAB_0047003b
// 00470041: POP EBP
// 00470042: POP EDI
// 00470043: POP ESI
// 00470044: POP EBX
// 00470045: RET
// 00470046: PUSH 0x0
//   Label: LAB_00470046
// 00470048: PUSH EAX
// 00470049: CALL core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
//   XREF to: 00470240 (UNCONDITIONAL_CALL)
// 0047004e: ADD ESP,0x8
// 00470051: PUSH EAX
// 00470052: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00470057: ADD ESP,0x4
// 0047005a: JMP 0x00470031
//   XREF to: 00470031 (UNCONDITIONAL_JUMP)
