// Name: engine_pod.cpp_qsortByFilename_FUN_0054f630
// Address: 0054f630
// Address Range: [[0054f630, 0054f646]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_qsortByFilename_FUN_0054f630(char * * filename1_ptr, char * * filename2_ptr)
// Cross-references:
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fa55 [DATA]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr)

{
  int iVar1;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(*filename1_ptr,*filename2_ptr);
  return iVar1;
}


// Assembly code:
// 0054f630: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_pod.cpp_qsortByFilename_FUN_0054f630
//   XREF to: Stack[0x8] (READ)
// 0054f634: MOV EDX,dword ptr [EAX]
// 0054f636: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054f63a: PUSH EDX
// 0054f63b: MOV ECX,dword ptr [EAX]
// 0054f63d: PUSH ECX
// 0054f63e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054f643: ADD ESP,0x8
// 0054f646: RET
