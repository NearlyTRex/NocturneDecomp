// Name: crt_io.c_setFileDescriptorFlags_FUN_00608908
// Address: 00608908
// Address Range: [[00608908, 00608930]]
// Convention: __watcallStack
// Signature: void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
// Cross-references:
//   crt_io.c_close_FUN_00609bd0 (00609bd0) at 00609c62 [UNCONDITIONAL_CALL]
//   crt_io.c_extend_file_for_append_FUN_00608410 (00608410) at 00608462 [UNCONDITIONAL_CALL]
//   crt_io.c_parseFileInfo_FUN_0060e3b0 (0060e3b0) at 0060e4ca [UNCONDITIONAL_CALL]
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 006092cf [UNCONDITIONAL_CALL]
//   crt_stdio.c_lseek_FUN_00606690 (00606690) at 006066d9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FileDescriptorTable
//   FileDescriptor* PTR_g_FileDescriptorTable_00685268 = 00685218

#include "nocturne.h"

void __watcallStack crt_io_c_setFileDescriptorFlags_FUN_00608908(int file_handle_index,uint flags)

{
  FileDescriptor *pFVar1;
  
  if (flags != 0) {
    PTR_g_FileDescriptorTable_00685268[file_handle_index] = (FileDescriptor)(flags | 0x4000);
    return;
  }
  pFVar1 = PTR_g_FileDescriptorTable_00685268 + file_handle_index;
  pFVar1->file_type = 0;
  pFVar1->device_flags = 0;
  pFVar1->access_flags = 0;
  pFVar1->extended_flags = 0;
  return;
}


// Assembly code:
// 00608908: PUSH EBX
//   Label: crt_io.c_setFileDescriptorFlags_FUN_00608908
// 00608909: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060890d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00608911: SHL EAX,0x2
// 00608914: TEST EDX,EDX
// 00608916: JZ 0x00608926
//   XREF to: 00608926 (CONDITIONAL_JUMP)
// 00608918: MOV EBX,dword ptr [0x00685268]
//   XREF to: 00685268 (READ)
// 0060891e: OR DH,0x40
// 00608921: MOV dword ptr [EBX + EAX*0x1],EDX
//   XREF to: 00685218 (DATA)
// 00608924: POP EBX
// 00608925: RET
// 00608926: MOV EBX,dword ptr [0x00685268]
//   Label: LAB_00608926
//   XREF to: 00685268 (READ)
// 0060892c: MOV dword ptr [EBX + EAX*0x1],EDX
//   XREF to: 00685218 (DATA)
// 0060892f: POP EBX
// 00608930: RET
