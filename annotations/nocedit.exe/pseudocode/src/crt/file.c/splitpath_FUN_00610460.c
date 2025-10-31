// Name: crt_file.c_splitpath_FUN_00610460
// Address: 00610460
// Address Range: [[00610460, 00610597]]
// Convention: __cdecl
// Signature: void crt_file.c_splitpath_FUN_00610460(char * path, char * buffer, char * * components)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f583 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_file.c_extract_path_component_FUN_00610400
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_mbtowc_peek_FUN_006059e0

#include "nocturne.h"

void __cdecl crt_file_c_splitpath_FUN_00610460(char *path,char *buffer,char **components)

{
  char cVar1;
  wchar_t wVar2;
  undefined2 extraout_var;
  char *pcVar4;
  char *pcVar5;
  char *str;
  char *pcStack00000010;
  char **in_stack_00000014;
  char **in_stack_0000001c;
  char **in_stack_00000024;
  int iVar3;
  
  if (((*path == '\\') || (*path == '/')) && ((path[1] == '\\' || (path[1] == '/')))) {
    cVar1 = path[2];
    pcVar5 = path + 2;
    while ((((cVar1 != '\0' && (cVar1 = *pcVar5, cVar1 != '\\')) && (cVar1 != '/')) &&
           (cVar1 != '.'))) {
      pcVar5 = crt_string_c_mbtowc_next_FUN_00605a70(pcVar5);
      cVar1 = *pcVar5;
    }
    crt_file_c_extract_path_component_FUN_00610400(components,buffer,path,pcVar5);
    path = pcVar5;
  }
  else if ((*path == '\0') || (path[1] != ':')) {
    if (components != (char **)0x0) {
      *components = buffer;
      *buffer = '\0';
    }
  }
  else {
    if (components != (char **)0x0) {
      *components = buffer;
      cVar1 = *path;
      buffer[1] = ':';
      buffer[2] = '\0';
      *buffer = cVar1;
    }
    path = path + 2;
  }
  do {
    pcVar4 = path;
    path = pcVar4;
    pcVar5 = (char *)0x0;
    do {
      while( true ) {
        str = path;
        wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
        iVar3 = CONCAT22(extraout_var,wVar2);
        if (iVar3 == 0) {
          pcStack00000010 =
               crt_file_c_extract_path_component_FUN_00610400
                         (in_stack_00000014,(char *)components,pcVar4,pcVar4);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = str;
          }
          pcVar4 = crt_file_c_extract_path_component_FUN_00610400
                             (in_stack_0000001c,pcStack00000010,pcVar4,pcVar5);
          crt_file_c_extract_path_component_FUN_00610400(in_stack_00000024,pcVar4,pcVar5,str);
          return;
        }
        if (iVar3 != 0x2e) break;
        path = str + 1;
        pcVar5 = str;
      }
      path = crt_string_c_mbtowc_next_FUN_00605a70(str);
    } while ((iVar3 != 0x5c) && (iVar3 != 0x2f));
  } while( true );
}


// Assembly code:
// 00610460: PUSH EBX
//   Label: crt_file.c_splitpath_FUN_00610460
// 00610461: PUSH ESI
// 00610462: PUSH EDI
// 00610463: PUSH EBP
// 00610464: SUB ESP,0x4
// 00610467: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0061046b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0061046f: MOV AH,byte ptr [EBX]
// 00610471: MOV EDI,EBX
// 00610473: CMP AH,0x5c
// 00610476: JZ 0x0061047d
//   XREF to: 0061047d (CONDITIONAL_JUMP)
// 00610478: CMP AH,0x2f
// 0061047b: JNZ 0x006104cc
//   XREF to: 006104cc (CONDITIONAL_JUMP)
// 0061047d: MOV DH,byte ptr [EBX + 0x1]
//   Label: LAB_0061047d
// 00610480: CMP DH,0x5c
// 00610483: JZ 0x0061048a
//   XREF to: 0061048a (CONDITIONAL_JUMP)
// 00610485: CMP DH,0x2f
// 00610488: JNZ 0x006104cc
//   XREF to: 006104cc (CONDITIONAL_JUMP)
// 0061048a: MOV AH,byte ptr [EBX + 0x2]
//   Label: LAB_0061048a
// 0061048d: ADD EBX,0x2
// 00610490: TEST AH,AH
// 00610492: JZ 0x006104b6
//   XREF to: 006104b6 (CONDITIONAL_JUMP)
// 00610494: MOV DH,byte ptr [EBX]
//   Label: LAB_00610494
// 00610496: CMP DH,0x5c
// 00610499: JZ 0x006104b6
//   XREF to: 006104b6 (CONDITIONAL_JUMP)
// 0061049b: CMP DH,0x2f
// 0061049e: JZ 0x006104b6
//   XREF to: 006104b6 (CONDITIONAL_JUMP)
// 006104a0: CMP DH,0x2e
// 006104a3: JZ 0x006104b6
//   XREF to: 006104b6 (CONDITIONAL_JUMP)
// 006104a5: PUSH EBX
// 006104a6: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 006104ab: ADD ESP,0x4
// 006104ae: MOV DL,byte ptr [EAX]
// 006104b0: MOV EBX,EAX
// 006104b2: TEST DL,DL
// 006104b4: JNZ 0x00610494
//   XREF to: 00610494 (CONDITIONAL_JUMP)
// 006104b6: PUSH EBX
//   Label: LAB_006104b6
// 006104b7: PUSH EDI
// 006104b8: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 006104bc: PUSH EDI
// 006104bd: PUSH ESI
// 006104be: CALL crt_file.c_extract_path_component_FUN_00610400
//   XREF to: 00610400 (UNCONDITIONAL_CALL)
// 006104c3: ADD ESP,0x10
// 006104c6: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[0x8] (WRITE)
// 006104ca: JMP 0x00610511
//   XREF to: 00610511 (UNCONDITIONAL_JUMP)
// 006104cc: CMP byte ptr [EBX],0x0
//   Label: LAB_006104cc
// 006104cf: JZ 0x006104fd
//   XREF to: 006104fd (CONDITIONAL_JUMP)
// 006104d1: CMP byte ptr [EBX + 0x1],0x3a
// 006104d5: JNZ 0x006104fd
//   XREF to: 006104fd (CONDITIONAL_JUMP)
// 006104d7: TEST ESI,ESI
// 006104d9: JZ 0x006104f8
//   XREF to: 006104f8 (CONDITIONAL_JUMP)
// 006104db: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006104df: MOV dword ptr [ESI],EAX
// 006104e1: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006104e5: MOV AL,byte ptr [EBX]
// 006104e7: MOV byte ptr [ESI + 0x1],0x3a
// 006104eb: MOV byte ptr [ESI + 0x2],0x0
// 006104ef: LEA ECX,[ESI + 0x3]
// 006104f2: MOV byte ptr [ESI],AL
// 006104f4: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[0x8] (WRITE)
// 006104f8: ADD EBX,0x2
//   Label: LAB_006104f8
// 006104fb: JMP 0x00610511
//   XREF to: 00610511 (UNCONDITIONAL_JUMP)
// 006104fd: TEST ESI,ESI
//   Label: LAB_006104fd
// 006104ff: JZ 0x00610511
//   XREF to: 00610511 (CONDITIONAL_JUMP)
// 00610501: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00610505: MOV dword ptr [ESI],EAX
// 00610507: LEA EDX,[EAX + 0x1]
// 0061050a: MOV byte ptr [EAX],0x0
// 0061050d: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[0x8] (WRITE)
// 00610511: MOV EBP,EBX
//   Label: LAB_00610511
// 00610513: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 00610516: XOR EDI,EDI
//   Label: LAB_00610516
// 00610518: PUSH EBX
//   Label: LAB_00610518
// 00610519: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 0061051e: MOV ESI,EAX
// 00610520: ADD ESP,0x4
// 00610523: TEST EAX,EAX
// 00610525: JZ 0x0061054a
//   XREF to: 0061054a (CONDITIONAL_JUMP)
// 00610527: CMP EAX,0x2e
// 0061052a: JNZ 0x00610531
//   XREF to: 00610531 (CONDITIONAL_JUMP)
// 0061052c: MOV EDI,EBX
// 0061052e: INC EBX
// 0061052f: JMP 0x00610518
//   XREF to: 00610518 (UNCONDITIONAL_JUMP)
// 00610531: PUSH EBX
//   Label: LAB_00610531
// 00610532: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00610537: ADD ESP,0x4
// 0061053a: MOV EBX,EAX
// 0061053c: CMP ESI,0x5c
// 0061053f: JZ 0x00610546
//   XREF to: 00610546 (CONDITIONAL_JUMP)
// 00610541: CMP ESI,0x2f
// 00610544: JNZ 0x00610518
//   XREF to: 00610518 (CONDITIONAL_JUMP)
// 00610546: MOV EBP,EBX
//   Label: LAB_00610546
// 00610548: JMP 0x00610516
//   XREF to: 00610516 (UNCONDITIONAL_JUMP)
// 0061054a: PUSH EBP
//   Label: LAB_0061054a
// 0061054b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0061054f: PUSH EAX
// 00610550: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00610554: PUSH EDX
// 00610555: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00610559: PUSH ECX
// 0061055a: CALL crt_file.c_extract_path_component_FUN_00610400
//   XREF to: 00610400 (UNCONDITIONAL_CALL)
// 0061055f: ADD ESP,0x10
// 00610562: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[0x8] (WRITE)
// 00610566: TEST EDI,EDI
// 00610568: JNZ 0x0061056c
//   XREF to: 0061056c (CONDITIONAL_JUMP)
// 0061056a: MOV EDI,EBX
// 0061056c: PUSH EDI
//   Label: LAB_0061056c
// 0061056d: PUSH EBP
// 0061056e: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00610572: PUSH ESI
// 00610573: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00610577: PUSH EBP
// 00610578: CALL crt_file.c_extract_path_component_FUN_00610400
//   XREF to: 00610400 (UNCONDITIONAL_CALL)
// 0061057d: ADD ESP,0x10
// 00610580: PUSH EBX
// 00610581: PUSH EDI
// 00610582: PUSH EAX
// 00610583: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 00610587: PUSH EAX
// 00610588: CALL crt_file.c_extract_path_component_FUN_00610400
//   XREF to: 00610400 (UNCONDITIONAL_CALL)
// 0061058d: ADD ESP,0x10
// 00610590: ADD ESP,0x4
// 00610593: POP EBP
// 00610594: POP EDI
// 00610595: POP ESI
// 00610596: POP EBX
// 00610597: RET
