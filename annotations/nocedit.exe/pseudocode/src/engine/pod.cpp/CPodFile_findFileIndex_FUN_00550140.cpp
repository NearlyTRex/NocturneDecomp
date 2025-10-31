// Name: engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
// Address: 00550140
// Address Range: [[00550140, 005501ab]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba3af [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b784c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6672 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_findFile_FUN_00551380 (00551380) at 0055139b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0 (005512f0) at 0055132f [UNCONDITIONAL_CALL]
//   engine_pod.cpp_findFilesByExtension_FUN_00550ce0 (00550ce0) at 00550e2d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = this_ptr->file_count + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      while( true ) {
        iVar1 = (iVar4 + iVar3) / 2;
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                          (filename,(char *)this_ptr->directory_entries[iVar1].name_or_offset);
        if (iVar2 == 0) {
          return iVar1;
        }
        if (-1 < iVar2) break;
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar4) {
          return -1;
        }
      }
      iVar4 = iVar1 + 1;
    } while (iVar4 <= iVar3);
  }
  return -1;
}


// Assembly code:
// 00550140: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
// 00550141: PUSH ESI
// 00550142: PUSH EDI
// 00550143: PUSH EBP
// 00550144: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00550148: MOV ESI,dword ptr [EBP + 0x410]
// 0055014e: DEC ESI
// 0055014f: XOR EDI,EDI
// 00550151: TEST ESI,ESI
// 00550153: JL 0x0055018a
//   XREF to: 0055018a (CONDITIONAL_JUMP)
// 00550155: LEA EDX,[EDI + ESI*0x1]
//   Label: LAB_00550155
// 00550158: MOV EAX,EDX
// 0055015a: SAR EDX,0x1f
// 0055015d: SUB EAX,EDX
// 0055015f: SAR EAX,0x1
// 00550161: MOV EBX,EAX
// 00550163: IMUL EAX,EAX,0x14
// 00550166: MOV EDX,dword ptr [EBP + 0x414]
// 0055016c: MOV ECX,dword ptr [EDX + EAX*0x1]
// 0055016f: PUSH ECX
// 00550170: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00550174: PUSH EAX
// 00550175: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0055017a: ADD ESP,0x8
// 0055017d: TEST EAX,EAX
// 0055017f: JZ 0x00550194
//   XREF to: 00550194 (CONDITIONAL_JUMP)
// 00550181: JL 0x0055019b
//   XREF to: 0055019b (CONDITIONAL_JUMP)
// 00550183: LEA EDI,[EBX + 0x1]
// 00550186: CMP EDI,ESI
// 00550188: JLE 0x00550155
//   XREF to: 00550155 (CONDITIONAL_JUMP)
// 0055018a: MOV EAX,0xffffffff
//   Label: LAB_0055018a
// 0055018f: POP EBP
// 00550190: POP EDI
// 00550191: POP ESI
// 00550192: POP EBX
// 00550193: RET
// 00550194: MOV EAX,EBX
//   Label: LAB_00550194
// 00550196: POP EBP
// 00550197: POP EDI
// 00550198: POP ESI
// 00550199: POP EBX
// 0055019a: RET
// 0055019b: LEA ESI,[EBX + -0x1]
//   Label: LAB_0055019b
// 0055019e: CMP EDI,ESI
// 005501a0: JLE 0x00550155
//   XREF to: 00550155 (CONDITIONAL_JUMP)
// 005501a2: MOV EAX,0xffffffff
// 005501a7: POP EBP
// 005501a8: POP EDI
// 005501a9: POP ESI
// 005501aa: POP EBX
// 005501ab: RET
