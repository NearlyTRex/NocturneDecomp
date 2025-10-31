// Name: crt_io.c_findNextFileWrapper_FUN_00602300
// Address: 00602300
// Address Range: [[00602300, 00602377]]
// Convention: __cdecl
// Signature: int crt_io.c_findNextFileWrapper_FUN_00602300(HANDLE find_handle, LPWIN32_FIND_DATAA find_data)
// Cross-references:
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc426 [UNCONDITIONAL_CALL]
// Globals:
//   FindNextFileA* PTR_FindNextFileA_00611550 = 00211d96
// Function calls:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_io.c_convertFileInfo_FUN_00602264
//   crt_io.c_findNextWithAttributes_FUN_00609d5c

#include "nocturne.h"

int __cdecl
crt_io_c_findNextFileWrapper_FUN_00602300(HANDLE find_handle,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  HANDLE in_stack_00000010;
  find_t *in_stack_00000018;
  
  BVar1 = (*PTR_FindNextFileA_00611550)(find_handle,(LPWIN32_FIND_DATAA)&stack0xfffffebc);
  if (BVar1 == 0) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    iVar2 = -1;
  }
  else {
    iVar2 = crt_io_c_findNextWithAttributes_FUN_00609d5c
                      (in_stack_00000010,0x37,(LPWIN32_FIND_DATAA)&stack0xfffffec8);
    if (iVar2 == 0) {
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(2);
      return -1;
    }
    crt_io_c_convertFileInfo_FUN_00602264((LPWIN32_FIND_DATAA)&stack0xfffffecc,in_stack_00000018);
    iVar2 = 0;
  }
  return iVar2;
}


// Assembly code:
// 00602300: PUSH EBX
//   Label: crt_io.c_findNextFileWrapper_FUN_00602300
// 00602301: SUB ESP,0x140
// 00602307: MOV EAX,ESP
// 00602309: PUSH EAX
// 0060230a: MOV EDX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 00602311: PUSH EDX
// 00602312: CALL dword ptr CS:[0x611550]
//   XREF to: 00611550 (READ)
// 00602319: TEST EAX,EAX
// 0060231b: JNZ 0x00602329
//   XREF to: 00602329 (CONDITIONAL_JUMP)
// 0060231d: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00602322: MOV EAX,0xffffffff
// 00602327: JMP 0x00602370
//   XREF to: 00602370 (UNCONDITIONAL_JUMP)
// 00602329: MOV EAX,ESP
//   Label: LAB_00602329
// 0060232b: PUSH EAX
// 0060232c: PUSH 0x37
// 0060232e: MOV EBX,dword ptr [ESP + 0x150]
// 00602335: PUSH EBX
// 00602336: CALL crt_io.c_findNextWithAttributes_FUN_00609d5c
//   XREF to: 00609d5c (UNCONDITIONAL_CALL)
// 0060233b: ADD ESP,0xc
// 0060233e: TEST EAX,EAX
// 00602340: JNZ 0x00602359
//   XREF to: 00602359 (CONDITIONAL_JUMP)
// 00602342: PUSH 0x2
// 00602344: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 00602349: MOV EAX,0xffffffff
// 0060234e: ADD ESP,0x4
// 00602351: ADD ESP,0x140
// 00602357: POP EBX
// 00602358: RET
// 00602359: MOV ECX,dword ptr [ESP + 0x14c]
//   Label: LAB_00602359
// 00602360: PUSH ECX
// 00602361: LEA EAX,[ESP + 0x4]
// 00602365: PUSH EAX
// 00602366: CALL crt_io.c_convertFileInfo_FUN_00602264
//   XREF to: 00602264 (UNCONDITIONAL_CALL)
// 0060236b: ADD ESP,0x8
// 0060236e: XOR EAX,EAX
// 00602370: ADD ESP,0x140
//   Label: LAB_00602370
// 00602376: POP EBX
// 00602377: RET
