// Name: engine_dosio.c_changeFileExtension_FUN_00482050
// Address: 00482050
// Address Range: [[00482050, 004820b2]]
// Convention: __cdecl
// Signature: void engine_dosio.c_changeFileExtension_FUN_00482050(char * source_path, char * destination_buffer, char * new_extension)
// Cross-references:
//   engine_dosio.c_removeFileExtension_FUN_00482040 (00482040) at 00482047 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

void __cdecl
engine_dosio_c_changeFileExtension_FUN_00482050
          (char *source_path,char *destination_buffer,char *new_extension)

{
  BADSPACEBASE *in_ESP;
  char acStack_204 [252];
  char local_108 [4];
  char acStack_104 [252];
  char local_8 [4];
  
  engine_dosio_c_splitPath_FUN_00481f20(source_path,local_8,local_108,&stack0xfffffdf8,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (destination_buffer,&stack0xfffffffc,acStack_104,acStack_204,new_extension);
  return;
}


// Assembly code:
// 00482050: PUSH EBX
//   Label: engine_dosio.c_changeFileExtension_FUN_00482050
// 00482051: SUB ESP,0x204
// 00482057: PUSH 0x0
// 00482059: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x208] (DATA)
// 0048205d: PUSH EAX
// 0048205e: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x108] (DATA)
// 00482065: PUSH EAX
// 00482066: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x8] (DATA)
// 0048206d: PUSH EAX
// 0048206e: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 00482075: PUSH EDX
// 00482076: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0048207b: ADD ESP,0x14
// 0048207e: MOV ECX,dword ptr [ESP + 0x210]
//   XREF to: Stack[0x8] (READ)
// 00482085: PUSH ECX
// 00482086: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x208] (DATA)
// 0048208a: PUSH EAX
// 0048208b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x108] (DATA)
// 00482092: PUSH EAX
// 00482093: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x8] (DATA)
// 0048209a: PUSH EAX
// 0048209b: MOV EBX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x4] (READ)
// 004820a2: PUSH EBX
// 004820a3: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004820a8: ADD ESP,0x14
// 004820ab: ADD ESP,0x204
// 004820b1: POP EBX
// 004820b2: RET
