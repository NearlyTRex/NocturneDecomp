// Name: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
// Address: 00551280
// Address Range: [[00551280, 005512ea]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280(CPod * this_ptr, char * pod_filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb014 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9d8e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 (004b7c90) at 004b7cf5 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280(CPod *this_ptr,char *pod_filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  int iStack_428;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffffbd0);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffffbd4,in_stack_0000000c);
  if (iVar1 != 0) {
    iVar1 = engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230((CPodFile *)&iStack_428);
    iStack_428 = 0;
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbdc);
    return iVar1;
  }
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&iStack_428);
  return 0;
}


// Assembly code:
// 00551280: PUSH EBX
//   Label: engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
// 00551281: SUB ESP,0x42c
// 00551287: MOV EAX,ESP
// 00551289: PUSH EAX
// 0055128a: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 0055128f: ADD ESP,0x4
// 00551292: MOV EDX,dword ptr [ESP + 0x438]
//   XREF to: Stack[0x8] (READ)
// 00551299: PUSH EDX
// 0055129a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x430] (DATA)
// 0055129e: PUSH EAX
// 0055129f: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 005512a4: ADD ESP,0x8
// 005512a7: TEST EAX,EAX
// 005512a9: JZ 0x005512d1
//   XREF to: 005512d1 (CONDITIONAL_JUMP)
// 005512ab: MOV EAX,ESP
// 005512ad: PUSH EAX
// 005512ae: CALL engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
//   XREF to: 00550230 (UNCONDITIONAL_CALL)
// 005512b3: ADD ESP,0x4
// 005512b6: PUSH 0x0
// 005512b8: MOV EBX,EAX
// 005512ba: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x430] (DATA)
// 005512be: PUSH EAX
// 005512bf: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 005512c4: ADD ESP,0x8
// 005512c7: MOV EAX,EBX
// 005512c9: ADD ESP,0x42c
// 005512cf: POP EBX
// 005512d0: RET
// 005512d1: PUSH EAX
//   Label: LAB_005512d1
// 005512d2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x430] (DATA)
// 005512d6: PUSH EAX
// 005512d7: XOR EBX,EBX
// 005512d9: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 005512de: ADD ESP,0x8
// 005512e1: MOV EAX,EBX
// 005512e3: ADD ESP,0x42c
// 005512e9: POP EBX
// 005512ea: RET
