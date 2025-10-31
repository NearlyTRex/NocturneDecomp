// Name: engine_pod.cpp_CPod_dismount_FUN_00550b90
// Address: 00550b90
// Address Range: [[00550b90, 00550c26]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_dismount_FUN_00550b90(CPod * this_ptr, char * filename)
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_pod.cpp_CPod_dismountPod_FUN_005518c0

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CPod *pCVar4;
  char *pcVar5;
  char acStack_120 [272];
  
  pcVar5 = &stack0xfffffddc;
  do {
    cVar1 = *filename;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffffddc);
  if ((iVar2 != 0) && (iVar2 = 0, pCVar4 = this_ptr, 0 < this_ptr->pod_file_count)) {
    do {
      while (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pCVar4->pod_files[0]->filename,acStack_120),
            iVar3 == 0) {
        engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,iVar2);
        if (this_ptr->pod_file_count <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      pCVar4 = (CPod *)pCVar4->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return;
}


// Assembly code:
// 00550b90: PUSH EBX
//   Label: engine_pod.cpp_CPod_dismount_FUN_00550b90
// 00550b91: PUSH ESI
// 00550b92: PUSH EDI
// 00550b93: PUSH EBP
// 00550b94: SUB ESP,0x214
// 00550b9a: MOV EBP,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 00550ba1: MOV ESI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x8] (READ)
// 00550ba8: MOV EDI,ESP
// 00550baa: PUSH EDI
// 00550bab: MOV AL,byte ptr [ESI]
//   Label: LAB_00550bab
// 00550bad: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x224] (DATA)
// 00550baf: CMP AL,0x0
// 00550bb1: JZ 0x00550bc3
//   XREF to: 00550bc3 (CONDITIONAL_JUMP)
// 00550bb3: MOV AL,byte ptr [ESI + 0x1]
// 00550bb6: ADD ESI,0x2
// 00550bb9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x223] (WRITE)
// 00550bbc: ADD EDI,0x2
// 00550bbf: CMP AL,0x0
// 00550bc1: JNZ 0x00550bab
//   XREF to: 00550bab (CONDITIONAL_JUMP)
// 00550bc3: POP EDI
//   Label: LAB_00550bc3
// 00550bc4: MOV EAX,ESP
// 00550bc6: PUSH EAX
// 00550bc7: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 00550bcc: ADD ESP,0x4
// 00550bcf: TEST EAX,EAX
// 00550bd1: JZ 0x00550c02
//   XREF to: 00550c02 (CONDITIONAL_JUMP)
// 00550bd3: MOV EDX,dword ptr [EBP]
// 00550bd6: XOR EBX,EBX
// 00550bd8: TEST EDX,EDX
// 00550bda: JLE 0x00550c02
//   XREF to: 00550c02 (CONDITIONAL_JUMP)
// 00550bdc: MOV ESI,EBP
// 00550bde: LEA EAX,[ESP + 0x100]
//   Label: LAB_00550bde
//   XREF to: Stack[-0x124] (DATA)
// 00550be5: PUSH EAX
// 00550be6: MOV EAX,dword ptr [ESI + 0x4]
// 00550be9: ADD EAX,0x4
// 00550bec: PUSH EAX
// 00550bed: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00550bf2: ADD ESP,0x8
// 00550bf5: TEST EAX,EAX
// 00550bf7: JZ 0x00550c0d
//   XREF to: 00550c0d (CONDITIONAL_JUMP)
// 00550bf9: INC EBX
// 00550bfa: ADD ESI,0x4
// 00550bfd: CMP EBX,dword ptr [EBP]
// 00550c00: JL 0x00550bde
//   XREF to: 00550bde (CONDITIONAL_JUMP)
// 00550c02: ADD ESP,0x214
//   Label: LAB_00550c02
// 00550c08: POP EBP
// 00550c09: POP EDI
// 00550c0a: POP ESI
// 00550c0b: POP EBX
// 00550c0c: RET
// 00550c0d: PUSH EBX
//   Label: LAB_00550c0d
// 00550c0e: PUSH EBP
// 00550c0f: CALL engine_pod.cpp_CPod_dismountPod_FUN_005518c0
//   XREF to: 005518c0 (UNCONDITIONAL_CALL)
// 00550c14: ADD ESP,0x8
// 00550c17: CMP EBX,dword ptr [EBP]
// 00550c1a: JL 0x00550bde
//   XREF to: 00550bde (CONDITIONAL_JUMP)
// 00550c1c: ADD ESP,0x214
// 00550c22: POP EBP
// 00550c23: POP EDI
// 00550c24: POP ESI
// 00550c25: POP EBX
// 00550c26: RET
