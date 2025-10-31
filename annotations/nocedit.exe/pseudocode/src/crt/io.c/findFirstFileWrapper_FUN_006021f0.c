// Name: crt_io.c_findFirstFileWrapper_FUN_006021f0
// Address: 006021f0
// Address Range: [[006021f0, 00602260]]
// Convention: __cdecl
// Signature: HANDLE crt_io.c_findFirstFileWrapper_FUN_006021f0(char * filespec, LPWIN32_FIND_DATAA find_data)
// Cross-references:
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc2d4 [UNCONDITIONAL_CALL]
// Globals:
//   FindClose* PTR_FindClose_00611548 = 00211d78
//   FindFirstFileA* PTR_FindFirstFileA_0061154c = 00211d84
// Function calls:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_io.c_convertFileInfo_FUN_00602264
//   crt_io.c_findNextWithAttributes_FUN_00609d5c

#include "nocturne.h"

HANDLE __cdecl
crt_io_c_findFirstFileWrapper_FUN_006021f0(char *filespec,LPWIN32_FIND_DATAA find_data)

{
  HANDLE hFindFile;
  int iVar1;
  BADSPACEBASE *in_ESP;
  find_t *in_stack_00000018;
  DWORD DStack_134;
  
  hFindFile = (*PTR_FindFirstFileA_0061154c)(filespec,(LPWIN32_FIND_DATAA)&stack0xfffffebc);
  if (hFindFile == (HANDLE)0xffffffff) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
  }
  else {
    iVar1 = crt_io_c_findNextWithAttributes_FUN_00609d5c
                      (hFindFile,0x37,(LPWIN32_FIND_DATAA)&stack0xfffffec8);
    if (iVar1 == 0) {
      (*PTR_FindClose_00611548)(hFindFile);
      DStack_134 = 0x602238;
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(2);
      hFindFile = (HANDLE)0xffffffff;
    }
    else {
      crt_io_c_convertFileInfo_FUN_00602264((LPWIN32_FIND_DATAA)&DStack_134,in_stack_00000018);
    }
  }
  return hFindFile;
}


// Assembly code:
// 006021f0: PUSH EBX
//   Label: crt_io.c_findFirstFileWrapper_FUN_006021f0
// 006021f1: SUB ESP,0x140
// 006021f7: MOV EAX,ESP
// 006021f9: PUSH EAX
// 006021fa: MOV EDX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 00602201: PUSH EDX
// 00602202: CALL dword ptr CS:[0x61154c]
//   XREF to: 0061154c (READ)
// 00602209: MOV EBX,EAX
// 0060220b: CMP EAX,-0x1
// 0060220e: JNZ 0x00602217
//   XREF to: 00602217 (CONDITIONAL_JUMP)
// 00602210: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00602215: JMP 0x00602257
//   XREF to: 00602257 (UNCONDITIONAL_JUMP)
// 00602217: MOV EAX,ESP
//   Label: LAB_00602217
// 00602219: PUSH EAX
// 0060221a: PUSH 0x37
// 0060221c: PUSH EBX
// 0060221d: CALL crt_io.c_findNextWithAttributes_FUN_00609d5c
//   XREF to: 00609d5c (UNCONDITIONAL_CALL)
// 00602222: ADD ESP,0xc
// 00602225: TEST EAX,EAX
// 00602227: JNZ 0x00602242
//   XREF to: 00602242 (CONDITIONAL_JUMP)
// 00602229: PUSH EBX
// 0060222a: CALL dword ptr CS:[0x611548]
//   XREF to: 00611548 (READ)
// 00602231: PUSH 0x2
// 00602233: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 00602238: MOV EAX,0xffffffff
// 0060223d: ADD ESP,0x4
// 00602240: JMP 0x00602259
//   XREF to: 00602259 (UNCONDITIONAL_JUMP)
// 00602242: MOV ECX,dword ptr [ESP + 0x14c]
//   Label: LAB_00602242
// 00602249: PUSH ECX
// 0060224a: LEA EAX,[ESP + 0x4]
// 0060224e: PUSH EAX
// 0060224f: CALL crt_io.c_convertFileInfo_FUN_00602264
//   XREF to: 00602264 (UNCONDITIONAL_CALL)
// 00602254: ADD ESP,0x8
// 00602257: MOV EAX,EBX
//   Label: LAB_00602257
// 00602259: ADD ESP,0x140
//   Label: LAB_00602259
// 0060225f: POP EBX
// 00602260: RET
