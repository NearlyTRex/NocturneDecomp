// Name: engine_dosio.c_removeFileExtension_FUN_00482040
// Address: 00482040
// Address Range: [[00482040, 0048204f]]
// Convention: __cdecl
// Signature: void engine_dosio.c_removeFileExtension_FUN_00482040(char * source_path, char * destination_buffer)
// Function calls:
//   engine_dosio.c_changeFileExtension_FUN_00482050

#include "nocturne.h"

void __cdecl
engine_dosio_c_removeFileExtension_FUN_00482040(char *source_path,char *destination_buffer)

{
  char *unaff_retaddr;
  
  engine_dosio_c_changeFileExtension_FUN_00482050(source_path,(char *)0x0,unaff_retaddr);
  return;
}


// Assembly code:
// 00482040: PUSH 0x0
//   Label: engine_dosio.c_removeFileExtension_FUN_00482040
// 00482042: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00482046: PUSH EDX
// 00482047: CALL engine_dosio.c_changeFileExtension_FUN_00482050
//   XREF to: 00482050 (UNCONDITIONAL_CALL)
// 0048204c: ADD ESP,0x8
// 0048204f: RET
