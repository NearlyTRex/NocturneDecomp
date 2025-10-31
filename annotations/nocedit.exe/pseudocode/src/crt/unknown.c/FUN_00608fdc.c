// Name: crt_unknown.c_FUN_00608fdc
// Address: 00608fdc
// Address Range: [[00608fdc, 0060903f]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00608fdc()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_00608fc0 (00608fc0) at 00608fc2 [UNCONDITIONAL_CALL]
// Globals:
//   FILE* g_StaticFilePoolStart = 00000000
//   undefined4 DAT_00684d12
//   FileListNode* g_AllocatedListHead
// Function calls:
//   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4

#include "nocturne.h"

int crt_unknown_c_FUN_00608fdc(void)

{
  FileListNode *pFVar1;
  FILE *file_handle;
  FileListNode *pFVar2;
  int close_flags;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  pFVar2 = g_AllocatedListHead;
  if (g_AllocatedListHead != (FileListNode *)0x0) {
    do {
      pFVar1 = pFVar2->next;
      file_handle = pFVar2->file_struct;
      close_flags = 1;
      if (((file_handle->_flag & 0x4000) == 0) && ((file_handle->_flag & 0x800) == 0)) {
        if ((FILE *)((int)&g_StaticFilePoolStart + in_stack_00000004 * 0x1a) <= file_handle) {
          if (file_handle < (FILE *)&DAT_00684d12) {
            close_flags = 0;
          }
          goto LAB_00609029;
        }
      }
      else {
LAB_00609029:
        iVar3 = iVar3 + 1;
        crt_stdio_c_closeAndDeallocateFile_FUN_00601ee4(file_handle,close_flags);
      }
      pFVar2 = pFVar1;
    } while (pFVar1 != (FileListNode *)0x0);
  }
  return iVar3;
}


// Assembly code:
// 00608fdc: PUSH EBX
//   Label: crt_unknown.c_FUN_00608fdc
// 00608fdd: PUSH ESI
// 00608fde: PUSH EDI
// 00608fdf: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00608fe3: LEA EAX,[EDX*0x4 + 0x0]
// 00608fea: SUB EAX,EDX
// 00608fec: SHL EAX,0x2
// 00608fef: ADD EAX,EDX
// 00608ff1: MOV EDI,0x684cc4
//   XREF to: 00684cc4 (DATA)
// 00608ff6: ADD EAX,EAX
// 00608ff8: ADD EDI,EAX
// 00608ffa: MOV EAX,[0x03f9b200]
//   XREF to: 03f9b200 (READ)
// 00608fff: XOR EBX,EBX
// 00609001: TEST EAX,EAX
// 00609003: JZ 0x0060903a
//   XREF to: 0060903a (CONDITIONAL_JUMP)
// 00609005: MOV ESI,dword ptr [EAX]
//   Label: LAB_00609005
// 00609007: MOV EAX,dword ptr [EAX + 0x4]
// 0060900a: MOV CL,byte ptr [EAX + 0xd]
// 0060900d: MOV EDX,0x1
// 00609012: TEST CL,0x40
// 00609015: JNZ 0x00609029
//   XREF to: 00609029 (CONDITIONAL_JUMP)
// 00609017: TEST CL,0x8
// 0060901a: JNZ 0x00609029
//   XREF to: 00609029 (CONDITIONAL_JUMP)
// 0060901c: CMP EAX,EDI
// 0060901e: JC 0x00609034
//   XREF to: 00609034 (CONDITIONAL_JUMP)
// 00609020: CMP EAX,0x684d12
//   XREF to: 00684d12 (DATA)
// 00609025: JNC 0x00609029
//   XREF to: 00609029 (CONDITIONAL_JUMP)
// 00609027: XOR EDX,EDX
// 00609029: PUSH EDX
//   Label: LAB_00609029
// 0060902a: PUSH EAX
// 0060902b: INC EBX
// 0060902c: CALL crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
//   XREF to: 00601ee4 (UNCONDITIONAL_CALL)
// 00609031: ADD ESP,0x8
// 00609034: MOV EAX,ESI
//   Label: LAB_00609034
// 00609036: TEST ESI,ESI
// 00609038: JNZ 0x00609005
//   XREF to: 00609005 (CONDITIONAL_JUMP)
// 0060903a: MOV EAX,EBX
//   Label: LAB_0060903a
// 0060903c: POP EDI
// 0060903d: POP ESI
// 0060903e: POP EBX
// 0060903f: RET
