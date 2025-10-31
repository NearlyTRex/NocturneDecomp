// Name: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
// Address: 005501b0
// Address Range: [[005501b0, 0055022a]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
// Cross-references:
//   engine_pod.cpp_CPod_findFile_FUN_00551380 (00551380) at 005513be [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 (00550ef0) at 00550fd6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0
          (CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

{
  char cVar1;
  CPodDirectoryEntry *pCVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = this_ptr->filename;
  pCVar2 = this_ptr->directory_entries;
  pcVar5 = output_info->target_path;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  output_info->file_offset = pCVar2[file_index].offset;
  output_info->file_size = pCVar2[file_index].size;
  output_info->timestamp = pCVar2[file_index].timestamp;
  uVar3 = this_ptr->filesize;
  output_info->is_archive = 1;
  output_info->container_size = uVar3;
  return;
}


// Assembly code:
// 005501b0: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
// 005501b1: PUSH ESI
// 005501b2: PUSH EDI
// 005501b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005501b7: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005501bb: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005501bf: LEA EAX,[ECX*0x4 + 0x0]
// 005501c6: ADD EAX,ECX
// 005501c8: LEA ESI,[EBX + 0x4]
// 005501cb: SHL EAX,0x2
// 005501ce: MOV ECX,dword ptr [EBX + 0x414]
// 005501d4: LEA EDI,[EDX + 0x100]
// 005501da: ADD ECX,EAX
// 005501dc: PUSH EDI
// 005501dd: MOV AL,byte ptr [ESI]
//   Label: LAB_005501dd
// 005501df: MOV byte ptr [EDI],AL
// 005501e1: CMP AL,0x0
// 005501e3: JZ 0x005501f5
//   XREF to: 005501f5 (CONDITIONAL_JUMP)
// 005501e5: MOV AL,byte ptr [ESI + 0x1]
// 005501e8: ADD ESI,0x2
// 005501eb: MOV byte ptr [EDI + 0x1],AL
// 005501ee: ADD EDI,0x2
// 005501f1: CMP AL,0x0
// 005501f3: JNZ 0x005501dd
//   XREF to: 005501dd (CONDITIONAL_JUMP)
// 005501f5: POP EDI
//   Label: LAB_005501f5
// 005501f6: MOV EAX,dword ptr [ECX + 0x8]
// 005501f9: MOV dword ptr [EDX + 0x200],EAX
// 005501ff: MOV EAX,dword ptr [ECX + 0x4]
// 00550202: MOV dword ptr [EDX + 0x204],EAX
// 00550208: MOV EAX,dword ptr [ECX + 0xc]
// 0055020b: MOV dword ptr [EDX + 0x20c],EAX
// 00550211: MOV EAX,dword ptr [EBX + 0x104]
// 00550217: MOV dword ptr [EDX + 0x208],0x1
// 00550221: MOV dword ptr [EDX + 0x210],EAX
// 00550227: POP EDI
// 00550228: POP ESI
// 00550229: POP EBX
// 0055022a: RET
