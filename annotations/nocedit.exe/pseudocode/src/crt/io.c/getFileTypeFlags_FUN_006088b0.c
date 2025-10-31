// Name: crt_io.c_getFileTypeFlags_FUN_006088b0
// Address: 006088b0
// Address Range: [[006088b0, 00608907]]
// Convention: __watcallStack
// Signature: uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
// Cross-references:
//   crt_io.c_extend_file_for_append_FUN_00608410 (00608410) at 00608455 [UNCONDITIONAL_CALL]
//   crt_io.c_write_FUN_006084ec (006084ec) at 00608522 [UNCONDITIONAL_CALL]
//   crt_process.c_build_file_info_env_FUN_0060ffd0 (0060ffd0) at 0061003c [UNCONDITIONAL_CALL]
//   crt_stdio.c_lseek_FUN_00606690 (00606690) at 006066c1 [UNCONDITIONAL_CALL]
//   crt_stdio.c_write_FUN_006038c0 (006038c0) at 00603903 [UNCONDITIONAL_CALL]
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 (0060e930) at 0060e970 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_MaxHandleCount = 0x14
//   undefined4 g_FileDescriptorTable
//   undefined4 DAT_00685219
//   FileDescriptor* PTR_g_FileDescriptorTable_00685268 = 00685218
// Function calls:
//   crt_io.c_IsSpecialDevice_FUN_0060c270

#include "nocturne.h"

uint __watcallStack crt_io_c_getFileTypeFlags_FUN_006088b0(int file_handle_index)

{
  int iVar1;
  
  if (g_MaxHandleCount <= (uint)file_handle_index) {
    return 0;
  }
  if (file_handle_index < 3) {
    if ((PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags & 0x40) == 0) {
      PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags =
           PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags | 0x40;
      iVar1 = crt_io_c_IsSpecialDevice_FUN_0060c270(file_handle_index);
      if (iVar1 != 0) {
        PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags =
             PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags | 0x20;
      }
    }
  }
  return (uint)PTR_g_FileDescriptorTable_00685268[file_handle_index];
}


// Assembly code:
// 006088b0: PUSH EBX
//   Label: crt_io.c_getFileTypeFlags_FUN_006088b0
// 006088b1: PUSH ESI
// 006088b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006088b6: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 006088bc: JC 0x006088c3
//   XREF to: 006088c3 (CONDITIONAL_JUMP)
// 006088be: XOR EAX,EAX
// 006088c0: POP ESI
// 006088c1: POP EBX
// 006088c2: RET
// 006088c3: CMP EBX,0x3
//   Label: LAB_006088c3
// 006088c6: JGE 0x006088fd
//   XREF to: 006088fd (CONDITIONAL_JUMP)
// 006088c8: MOV EAX,[0x00685268]
//   XREF to: 00685268 (READ)
// 006088cd: LEA ESI,[EBX*0x4 + 0x0]
// 006088d4: ADD EAX,ESI
// 006088d6: MOV DL,byte ptr [EAX + 0x1]
//   XREF to: 00685219 (DATA)
// 006088d9: TEST DL,0x40
// 006088dc: JNZ 0x006088fd
//   XREF to: 006088fd (CONDITIONAL_JUMP)
// 006088de: MOV DH,DL
// 006088e0: OR DH,0x40
// 006088e3: PUSH EBX
// 006088e4: MOV byte ptr [EAX + 0x1],DH
//   XREF to: 00685219 (DATA)
// 006088e7: CALL crt_io.c_IsSpecialDevice_FUN_0060c270
//   XREF to: 0060c270 (UNCONDITIONAL_CALL)
// 006088ec: ADD ESP,0x4
// 006088ef: TEST EAX,EAX
// 006088f1: JZ 0x006088fd
//   XREF to: 006088fd (CONDITIONAL_JUMP)
// 006088f3: MOV EAX,[0x00685268]
//   XREF to: 00685268 (READ)
// 006088f8: OR byte ptr [ESI + EAX*0x1 + 0x1],0x20
//   XREF to: 00685219 (DATA)
// 006088fd: MOV EAX,[0x00685268]
//   Label: LAB_006088fd
//   XREF to: 00685268 (READ)
// 00608902: MOV EAX,dword ptr [EAX + EBX*0x4]
//   XREF to: 00685218 (DATA)
// 00608905: POP ESI
// 00608906: POP EBX
// 00608907: RET
