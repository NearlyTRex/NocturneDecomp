// Name: shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250
// Address: 0049d250
// Address Range: [[0049d250, 0049d281]]
// Convention: __cdecl
// Signature: char * shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250(char * source_str, char * dest_buffer)

#include "nocturne.h"

char * __cdecl
shape_edittool_cpp_extractTabDelimitedField_FUN_0049d250(char *source_str,char *dest_buffer)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *source_str;
  while( true ) {
    if (cVar2 == '\0') {
      *dest_buffer = '\0';
      return source_str;
    }
    pcVar1 = source_str + 1;
    if (*source_str == '\t') break;
    *dest_buffer = *source_str;
    dest_buffer = dest_buffer + 1;
    cVar2 = *pcVar1;
    source_str = pcVar1;
  }
  *dest_buffer = '\0';
  return pcVar1;
}


// Assembly code:
// 0049d250: PUSH EBX
//   Label: shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250
// 0049d251: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d255: MOV DL,byte ptr [EAX]
// 0049d257: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049d25b: TEST DL,DL
// 0049d25d: JZ 0x0049d276
//   XREF to: 0049d276 (CONDITIONAL_JUMP)
// 0049d25f: MOV BH,byte ptr [EAX]
//   Label: LAB_0049d25f
// 0049d261: LEA EDX,[EAX + 0x1]
// 0049d264: CMP BH,0x9
// 0049d267: JZ 0x0049d27b
//   XREF to: 0049d27b (CONDITIONAL_JUMP)
// 0049d269: MOV AL,byte ptr [EAX]
// 0049d26b: MOV byte ptr [ECX],AL
// 0049d26d: INC ECX
// 0049d26e: MOV BL,byte ptr [EDX]
// 0049d270: MOV EAX,EDX
// 0049d272: TEST BL,BL
// 0049d274: JNZ 0x0049d25f
//   XREF to: 0049d25f (CONDITIONAL_JUMP)
// 0049d276: MOV byte ptr [ECX],0x0
//   Label: LAB_0049d276
// 0049d279: POP EBX
// 0049d27a: RET
// 0049d27b: MOV EAX,EDX
//   Label: LAB_0049d27b
// 0049d27d: MOV byte ptr [ECX],0x0
// 0049d280: POP EBX
// 0049d281: RET
