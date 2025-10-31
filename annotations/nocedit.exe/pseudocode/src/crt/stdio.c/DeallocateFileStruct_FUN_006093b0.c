// Name: crt_stdio.c_DeallocateFileStruct_FUN_006093b0
// Address: 006093b0
// Address Range: [[006093b0, 006093e6]]
// Convention: __cdecl
// Signature: void crt_stdio.c_DeallocateFileStruct_FUN_006093b0(FILE * file_struct)
// Cross-references:
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c (0060190c) at 006019b3 [UNCONDITIONAL_CALL]
//   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4 (00601ee4) at 00601efe [UNCONDITIONAL_CALL]
// Globals:
//   FileListNode* g_AllocatedListHead
//   undefined4 g_FreeListHeadPointer

#include "nocturne.h"

void __cdecl crt_stdio_c_DeallocateFileStruct_FUN_006093b0(FILE *file_struct)

{
  FileListNode *pFVar1;
  FileListNode *puVar2;
  
  pFVar1 = (FileListNode *)&g_AllocatedListHead;
  do {
    puVar2 = pFVar1;
    pFVar1 = puVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      return;
    }
  } while (file_struct != pFVar1->file_struct);
  *(byte *)&file_struct->_flag = (byte)pFVar1->file_struct->_flag | 3;
  puVar2->next = pFVar1->next;
  pFVar1->next = g_FreeListHeadPointer;
  g_FreeListHeadPointer = pFVar1;
  return;
}


// Assembly code:
// 006093b0: PUSH EBX
//   Label: crt_stdio.c_DeallocateFileStruct_FUN_006093b0
// 006093b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006093b5: MOV EDX,0x3f9b200
//   XREF to: 03f9b200 (DATA)
// 006093ba: MOV EAX,dword ptr [EDX]
//   Label: LAB_006093ba
//   XREF to: register:00000008 (WRITE)
//   XREF to: 03f9b200 (READ)
// 006093bc: TEST EAX,EAX
// 006093be: JZ 0x006093e5
//   XREF to: 006093e5 (CONDITIONAL_JUMP)
// 006093c0: MOV ECX,dword ptr [EAX + 0x4]
// 006093c3: CMP EBX,ECX
// 006093c5: JZ 0x006093cb
//   XREF to: 006093cb (CONDITIONAL_JUMP)
// 006093c7: MOV EDX,EAX
// 006093c9: JMP 0x006093ba
//   XREF to: 006093ba (UNCONDITIONAL_JUMP)
// 006093cb: MOV CL,byte ptr [ECX + 0xc]
//   Label: LAB_006093cb
// 006093ce: OR CL,0x3
// 006093d1: MOV byte ptr [EBX + 0xc],CL
// 006093d4: MOV EBX,dword ptr [EAX]
// 006093d6: MOV dword ptr [EDX],EBX
//   XREF to: 03f9b200 (WRITE)
// 006093d8: MOV EDX,dword ptr [0x03f9b204]
//   XREF to: 03f9b204 (READ)
// 006093de: MOV [0x03f9b204],EAX
//   XREF to: 03f9b204 (WRITE)
// 006093e3: MOV dword ptr [EAX],EDX
// 006093e5: POP EBX
//   Label: LAB_006093e5
// 006093e6: RET
