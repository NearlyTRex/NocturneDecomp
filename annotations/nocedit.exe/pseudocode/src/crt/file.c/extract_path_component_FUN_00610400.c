// Name: crt_file.c_extract_path_component_FUN_00610400
// Address: 00610400
// Address Range: [[00610400, 0061045f]]
// Convention: __cdecl
// Signature: char * crt_file.c_extract_path_component_FUN_00610400(char * * component_ptr, char * buffer, char * source, char * buffer_end)
// Cross-references:
//   crt_file.c_splitpath_FUN_00610460 (00610460) at 00610588 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_mbstrnbytes_FUN_00605ec0
//   crt_string.c_mbstrncpy_FUN_00605e90
//   crt_string.c_mbstrnlen_FUN_00605e50

#include "nocturne.h"

char * __cdecl
crt_file_c_extract_path_component_FUN_00610400
          (char **component_ptr,char *buffer,char *source,char *buffer_end)

{
  int iVar1;
  int iVar2;
  uint max_bytes;
  
  if (component_ptr != (char **)0x0) {
    max_bytes = (int)buffer_end - (int)source;
    *component_ptr = buffer;
    if (0x106 < max_bytes) {
      max_bytes = 0x106;
    }
    iVar1 = crt_string_c_mbstrnlen_FUN_00605e50(source,max_bytes);
    crt_string_c_mbstrncpy_FUN_00605e90(buffer,source,iVar1);
    iVar2 = crt_string_c_mbstrnbytes_FUN_00605ec0(buffer,iVar1);
    buffer[iVar2] = '\0';
    iVar1 = crt_string_c_mbstrnbytes_FUN_00605ec0(buffer,iVar1);
    buffer = buffer + iVar1 + 1;
  }
  return buffer;
}


// Assembly code:
// 00610400: PUSH EBX
//   Label: crt_file.c_extract_path_component_FUN_00610400
// 00610401: PUSH ESI
// 00610402: PUSH EDI
// 00610403: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00610407: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0061040b: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0061040f: TEST EAX,EAX
// 00610411: JZ 0x0061045a
//   XREF to: 0061045a (CONDITIONAL_JUMP)
// 00610413: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00610417: SUB ESI,EDI
// 00610419: MOV dword ptr [EAX],EBX
// 0061041b: CMP ESI,0x107
// 00610421: JC 0x00610428
//   XREF to: 00610428 (CONDITIONAL_JUMP)
// 00610423: MOV ESI,0x106
// 00610428: PUSH ESI
//   Label: LAB_00610428
// 00610429: PUSH EDI
// 0061042a: CALL crt_string.c_mbstrnlen_FUN_00605e50
//   XREF to: 00605e50 (UNCONDITIONAL_CALL)
// 0061042f: ADD ESP,0x8
// 00610432: PUSH EAX
// 00610433: PUSH EDI
// 00610434: PUSH EBX
// 00610435: MOV ESI,EAX
// 00610437: CALL crt_string.c_mbstrncpy_FUN_00605e90
//   XREF to: 00605e90 (UNCONDITIONAL_CALL)
// 0061043c: ADD ESP,0xc
// 0061043f: PUSH ESI
// 00610440: PUSH EBX
// 00610441: CALL crt_string.c_mbstrnbytes_FUN_00605ec0
//   XREF to: 00605ec0 (UNCONDITIONAL_CALL)
// 00610446: ADD ESP,0x8
// 00610449: PUSH ESI
// 0061044a: PUSH EBX
// 0061044b: MOV byte ptr [EBX + EAX*0x1],0x0
// 0061044f: CALL crt_string.c_mbstrnbytes_FUN_00605ec0
//   XREF to: 00605ec0 (UNCONDITIONAL_CALL)
// 00610454: ADD EBX,EAX
// 00610456: ADD ESP,0x8
// 00610459: INC EBX
// 0061045a: MOV EAX,EBX
//   Label: LAB_0061045a
// 0061045c: POP EDI
// 0061045d: POP ESI
// 0061045e: POP EBX
// 0061045f: RET
