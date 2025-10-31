// Name: engine_dosio.c_getFileTimestamp_FUN_004818d0
// Address: 004818d0
// Address Range: [[004818d0, 0048190f]]
// Convention: __cdecl
// Signature: uint engine_dosio.c_getFileTimestamp_FUN_004818d0(char * directory_path, char * filename)
// Function calls:
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0

#include "nocturne.h"

uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  uint unaff_retaddr;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffdec,directory_path,filename);
  uVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdf0);
  if (uVar1 != 0) {
    uVar1 = unaff_retaddr;
  }
  return uVar1;
}


// Assembly code:
// 004818d0: SUB ESP,0x214
//   Label: engine_dosio.c_getFileTimestamp_FUN_004818d0
// 004818d6: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x8] (READ)
// 004818dd: PUSH EDX
// 004818de: MOV ECX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 004818e5: PUSH ECX
// 004818e6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x214] (DATA)
// 004818ea: PUSH EAX
// 004818eb: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 004818f0: ADD ESP,0xc
// 004818f3: MOV EAX,ESP
// 004818f5: PUSH EAX
// 004818f6: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 004818fb: ADD ESP,0x4
// 004818fe: TEST EAX,EAX
// 00481900: JZ 0x00481909
//   XREF to: 00481909 (CONDITIONAL_JUMP)
// 00481902: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x8] (READ)
// 00481909: ADD ESP,0x214
//   Label: LAB_00481909
// 0048190f: RET
