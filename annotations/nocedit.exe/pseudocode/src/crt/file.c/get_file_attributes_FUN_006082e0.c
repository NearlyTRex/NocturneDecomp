// Name: crt_file.c_get_file_attributes_FUN_006082e0
// Address: 006082e0
// Address Range: [[006082e0, 00608351]]
// Convention: __cdecl
// Signature: DWORD crt_file.c_get_file_attributes_FUN_006082e0(char * filename)
// Cross-references:
//   crt_file.c_setReadonlyAttribute_FUN_00600c30 (00600c30) at 00600c36 [UNCONDITIONAL_CALL]
// Globals:
//   FindFirstFileA* PTR_FindFirstFileA_0061154c = 00211d84
// Function calls:
//   FindFirstFileA

#include "nocturne.h"

DWORD __cdecl crt_file_c_get_file_attributes_FUN_006082e0(char *filename)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  _WIN32_FIND_DATAA _Stack_148;
  
  pcVar3 = filename;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '*') goto LAB_0060830b;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '*') goto LAB_0060830b;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0060830b:
  pcVar3 = filename;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar3;
      if (*pcVar3 == '?') goto LAB_0060832b;
      if (*pcVar3 == '\0') break;
      pcVar2 = pcVar3 + 1;
      if (*pcVar2 == '?') goto LAB_0060832b;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_0060832b:
    if (pcVar2 == (char *)0x0) {
      pvVar1 = (*PTR_FindFirstFileA_0061154c)(filename,&_Stack_148);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0xffffffff;
      }
      return _Stack_148.ftLastAccessTime.dwLowDateTime;
    }
  }
  return 0xffffffff;
}


// Assembly code:
// 006082e0: PUSH EBX
//   Label: crt_file.c_get_file_attributes_FUN_006082e0
// 006082e1: PUSH ESI
// 006082e2: SUB ESP,0x140
// 006082e8: MOV EBX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 006082ef: MOV DL,0x2a
// 006082f1: MOV ESI,EBX
// 006082f3: MOV AL,byte ptr [ESI]
//   Label: LAB_006082f3
// 006082f5: CMP AL,DL
// 006082f7: JZ 0x0060830b
//   XREF to: 0060830b (CONDITIONAL_JUMP)
// 006082f9: CMP AL,0x0
// 006082fb: JZ 0x00608309
//   XREF to: 00608309 (CONDITIONAL_JUMP)
// 006082fd: INC ESI
// 006082fe: MOV AL,byte ptr [ESI]
// 00608300: CMP AL,DL
// 00608302: JZ 0x0060830b
//   XREF to: 0060830b (CONDITIONAL_JUMP)
// 00608304: INC ESI
// 00608305: CMP AL,0x0
// 00608307: JNZ 0x006082f3
//   XREF to: 006082f3 (CONDITIONAL_JUMP)
// 00608309: SUB ESI,ESI
//   Label: LAB_00608309
// 0060830b: TEST ESI,ESI
//   Label: LAB_0060830b
// 0060830d: JNZ 0x0060832f
//   XREF to: 0060832f (CONDITIONAL_JUMP)
// 0060830f: MOV DL,0x3f
// 00608311: MOV ESI,EBX
// 00608313: MOV AL,byte ptr [ESI]
//   Label: LAB_00608313
// 00608315: CMP AL,DL
// 00608317: JZ 0x0060832b
//   XREF to: 0060832b (CONDITIONAL_JUMP)
// 00608319: CMP AL,0x0
// 0060831b: JZ 0x00608329
//   XREF to: 00608329 (CONDITIONAL_JUMP)
// 0060831d: INC ESI
// 0060831e: MOV AL,byte ptr [ESI]
// 00608320: CMP AL,DL
// 00608322: JZ 0x0060832b
//   XREF to: 0060832b (CONDITIONAL_JUMP)
// 00608324: INC ESI
// 00608325: CMP AL,0x0
// 00608327: JNZ 0x00608313
//   XREF to: 00608313 (CONDITIONAL_JUMP)
// 00608329: SUB ESI,ESI
//   Label: LAB_00608329
// 0060832b: TEST ESI,ESI
//   Label: LAB_0060832b
// 0060832d: JZ 0x00608336
//   XREF to: 00608336 (CONDITIONAL_JUMP)
// 0060832f: MOV EAX,0xffffffff
//   Label: LAB_0060832f
// 00608334: JMP 0x00608349
//   XREF to: 00608349 (UNCONDITIONAL_JUMP)
// 00608336: MOV EAX,ESP
//   Label: LAB_00608336
// 00608338: PUSH EAX
// 00608339: PUSH EBX
// 0060833a: CALL dword ptr CS:[0x61154c]
//   XREF to: EXTERNAL:0000005e (COMPUTED_CALL)
//   XREF to: 0061154c (READ)
// 00608341: CMP EAX,-0x1
// 00608344: JZ 0x00608349
//   XREF to: 00608349 (CONDITIONAL_JUMP)
// 00608346: MOV EAX,dword ptr [ESP]
// 00608349: ADD ESP,0x140
//   Label: LAB_00608349
// 0060834f: POP ESI
// 00608350: POP EBX
// 00608351: RET
