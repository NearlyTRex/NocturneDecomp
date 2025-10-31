// Name: core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
// Address: 004701a0
// Address Range: [[004701a0, 004701e6]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache * this_ptr, char * filter_name)
// Cross-references:
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 0047087b [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_process_FUN_004708e0 (004708e0) at 004708f5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

CDemonFilter * __cdecl
core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache *this_ptr,char *filter_name)

{
  int iVar1;
  int iVar2;
  char (*str1) [40];
  
  iVar2 = 0;
  if (0 < this_ptr->filter_count) {
    str1 = this_ptr->filter_names;
    do {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(*str1,filter_name);
      if (iVar1 == 0) {
        return this_ptr->filters[iVar2];
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->filter_count);
  }
  return (CDemonFilter *)0x0;
}


// Assembly code:
// 004701a0: PUSH EBX
//   Label: core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
// 004701a1: PUSH ESI
// 004701a2: PUSH EDI
// 004701a3: PUSH EBP
// 004701a4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004701a8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004701ac: MOV EDX,dword ptr [EDI]
// 004701ae: XOR EBX,EBX
// 004701b0: TEST EDX,EDX
// 004701b2: JLE 0x004701cf
//   XREF to: 004701cf (CONDITIONAL_JUMP)
// 004701b4: LEA ESI,[EDI + 0x4]
// 004701b7: PUSH EBP
//   Label: LAB_004701b7
// 004701b8: PUSH ESI
// 004701b9: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004701be: ADD ESP,0x8
// 004701c1: TEST EAX,EAX
// 004701c3: JZ 0x004701d6
//   XREF to: 004701d6 (CONDITIONAL_JUMP)
// 004701c5: INC EBX
// 004701c6: MOV ECX,dword ptr [EDI]
// 004701c8: ADD ESI,0x28
// 004701cb: CMP EBX,ECX
// 004701cd: JL 0x004701b7
//   XREF to: 004701b7 (CONDITIONAL_JUMP)
// 004701cf: XOR EAX,EAX
//   Label: LAB_004701cf
// 004701d1: POP EBP
// 004701d2: POP EDI
// 004701d3: POP ESI
// 004701d4: POP EBX
// 004701d5: RET
// 004701d6: SHL EBX,0x2
//   Label: LAB_004701d6
// 004701d9: LEA EAX,[EDI + EBX*0x1]
// 004701dc: MOV EAX,dword ptr [EAX + 0xa04]
// 004701e2: POP EBP
// 004701e3: POP EDI
// 004701e4: POP ESI
// 004701e5: POP EBX
// 004701e6: RET
