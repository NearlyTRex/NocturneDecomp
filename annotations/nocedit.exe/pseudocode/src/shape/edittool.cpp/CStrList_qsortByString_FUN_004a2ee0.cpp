// Name: shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0
// Address: 004a2ee0
// Address Range: [[004a2ee0, 004a2ef6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0(char * a, char * b)
// Cross-references:
//   shape_edittool.cpp_CStrList_sort_FUN_004a2f00 (004a2f00) at 004a2f41 [DATA]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_qsortByString_FUN_004a2ee0(char *a,char *b)

{
  int iVar1;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(*(char **)a,*(char **)b);
  return iVar1;
}


// Assembly code:
// 004a2ee0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0
//   XREF to: Stack[0x8] (READ)
// 004a2ee4: MOV EDX,dword ptr [EAX]
// 004a2ee6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004a2eea: PUSH EDX
// 004a2eeb: MOV ECX,dword ptr [EAX]
// 004a2eed: PUSH ECX
// 004a2eee: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a2ef3: ADD ESP,0x8
// 004a2ef6: RET
