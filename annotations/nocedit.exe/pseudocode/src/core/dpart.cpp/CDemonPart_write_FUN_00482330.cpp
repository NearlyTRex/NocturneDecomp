// Name: core_dpart.cpp_CDemonPart_write_FUN_00482330
// Address: 00482330
// Address Range: [[00482330, 0048248a]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_write_FUN_00482330(CDemonPart * this_ptr, FILE * file_handle)
// Globals:
//   TerminatedCString s_newformat_00621777
//   undefined4 s_ewformat_00621778
//   undefined4 s_wformat_00621779
//   undefined4 s_format_0062177a
// Function calls:
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_write_FUN_00482330(CDemonPart *this_ptr,FILE *file_handle)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  CDemonPart *pCVar4;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  
  pcVar2 = "newformat";
  pCVar4 = this_ptr;
  do {
    cVar1 = *pcVar2;
    pCVar4->format[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pCVar4->format[1] = cVar1;
    pCVar4 = (CDemonPart *)(pCVar4->format + 2);
  } while (cVar1 != '\0');
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr,0x20,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex_count,4,1,in_stack_0000000c);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->face_count,4,1,in_stack_00000010);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox1,0xc,1,in_stack_00000014);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox2,0xc,1,in_stack_00000014);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox3,0xc,1,in_stack_00000014);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox4,0xc,1,in_stack_00000014);
  iVar3 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->mystery_array_size,4,1,in_stack_00000014);
  if (0 < this_ptr->mystery_array_size) {
    pcVar2 = this_ptr->mystery_array;
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fwrite_FUN_005fdc00(pcVar2,0x10,1,in_stack_00000028);
      pcVar2 = pcVar2 + 0x18;
    } while (iVar3 < this_ptr->mystery_array_size);
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex_group_size,4,1,in_stack_00000028);
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->vertex_positions,0xc,this_ptr->vertex_count,in_stack_0000002c);
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->vertex_normals,0xc,this_ptr->vertex_count,in_stack_00000030);
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->face_data,0x20,this_ptr->face_count,in_stack_00000030);
  return;
}


// Assembly code:
// 00482330: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_write_FUN_00482330
// 00482331: PUSH ESI
// 00482332: PUSH EDI
// 00482333: PUSH EBP
// 00482334: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00482338: MOV ESI,0x621777
//   XREF to: 00621777 (DATA)
// 0048233d: MOV EDI,EBP
// 0048233f: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482343: PUSH EDI
// 00482344: MOV AL,byte ptr [ESI]
//   Label: LAB_00482344
//   XREF to: 00621777 (READ)
//   XREF to: 00621779 (READ)
// 00482346: MOV byte ptr [EDI],AL
// 00482348: CMP AL,0x0
// 0048234a: JZ 0x0048235c
//   XREF to: 0048235c (CONDITIONAL_JUMP)
// 0048234c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00621778 (READ)
//   XREF to: 0062177a (READ)
// 0048234f: ADD ESI,0x2
// 00482352: MOV byte ptr [EDI + 0x1],AL
// 00482355: ADD EDI,0x2
// 00482358: CMP AL,0x0
// 0048235a: JNZ 0x00482344
//   XREF to: 00482344 (CONDITIONAL_JUMP)
// 0048235c: POP EDI
//   Label: LAB_0048235c
// 0048235d: PUSH EDX
// 0048235e: PUSH 0x1
// 00482360: PUSH 0x20
// 00482362: PUSH EBP
// 00482363: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482368: ADD ESP,0x10
// 0048236b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048236f: PUSH ECX
// 00482370: PUSH 0x1
// 00482372: PUSH 0x4
// 00482374: LEA EBX,[EBP + 0x20]
// 00482377: PUSH EBX
// 00482378: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0048237d: ADD ESP,0x10
// 00482380: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482384: PUSH EBX
// 00482385: PUSH 0x1
// 00482387: PUSH 0x4
// 00482389: LEA EBX,[EBP + 0x24]
// 0048238c: PUSH EBX
// 0048238d: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482392: ADD ESP,0x10
// 00482395: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482399: PUSH ESI
// 0048239a: PUSH 0x1
// 0048239c: PUSH 0xc
// 0048239e: LEA EBX,[EBP + 0x33c]
// 004823a4: PUSH EBX
// 004823a5: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004823aa: ADD ESP,0x10
// 004823ad: PUSH ESI
// 004823ae: PUSH 0x1
// 004823b0: PUSH 0xc
// 004823b2: LEA EBX,[EBP + 0x348]
// 004823b8: PUSH EBX
// 004823b9: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004823be: ADD ESP,0x10
// 004823c1: PUSH ESI
// 004823c2: PUSH 0x1
// 004823c4: PUSH 0xc
// 004823c6: LEA EBX,[EBP + 0x354]
// 004823cc: PUSH EBX
// 004823cd: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004823d2: ADD ESP,0x10
// 004823d5: PUSH ESI
// 004823d6: PUSH 0x1
// 004823d8: PUSH 0xc
// 004823da: LEA EBX,[EBP + 0x360]
// 004823e0: PUSH EBX
// 004823e1: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004823e6: ADD ESP,0x10
// 004823e9: PUSH ESI
// 004823ea: PUSH 0x1
// 004823ec: PUSH 0x4
// 004823ee: LEA EBX,[EBP + 0x38]
// 004823f1: PUSH EBX
// 004823f2: XOR ESI,ESI
// 004823f4: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004823f9: MOV EBX,dword ptr [EBP + 0x38]
// 004823fc: ADD ESP,0x10
// 004823ff: TEST EBX,EBX
// 00482401: JLE 0x00482430
//   XREF to: 00482430 (CONDITIONAL_JUMP)
// 00482403: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482407: LEA EBX,[EBP + 0x44]
// 0048240a: PUSH EDI
//   Label: LAB_0048240a
// 0048240b: PUSH 0x1
// 0048240d: PUSH 0x10
// 0048240f: PUSH EBX
// 00482410: INC ESI
// 00482411: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482416: ADD ESP,0x10
// 00482419: MOV EAX,dword ptr [EBP + 0x38]
// 0048241c: ADD EBX,0x18
// 0048241f: CMP ESI,EAX
// 00482421: JL 0x0048240a
//   XREF to: 0048240a (CONDITIONAL_JUMP)
// 00482423: LEA EAX,[EAX]
// 00482429: LEA EDX,[EDX]
// 0048242f: NOP
// 00482430: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00482430
//   XREF to: Stack[0x8] (READ)
// 00482434: PUSH EDX
// 00482435: PUSH 0x1
// 00482437: PUSH 0x4
// 00482439: LEA EBX,[EBP + 0x28]
// 0048243c: PUSH EBX
// 0048243d: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482442: ADD ESP,0x10
// 00482445: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482449: PUSH ECX
// 0048244a: MOV EBX,dword ptr [EBP + 0x20]
// 0048244d: PUSH EBX
// 0048244e: PUSH 0xc
// 00482450: MOV ESI,dword ptr [EBP + 0x2c]
// 00482453: PUSH ESI
// 00482454: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482459: ADD ESP,0x10
// 0048245c: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00482460: PUSH EDI
// 00482461: MOV EAX,dword ptr [EBP + 0x20]
// 00482464: PUSH EAX
// 00482465: PUSH 0xc
// 00482467: MOV EDX,dword ptr [EBP + 0x30]
// 0048246a: PUSH EDX
// 0048246b: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482470: ADD ESP,0x10
// 00482473: PUSH EDI
// 00482474: MOV EBX,dword ptr [EBP + 0x24]
// 00482477: PUSH EBX
// 00482478: PUSH 0x20
// 0048247a: MOV ESI,dword ptr [EBP + 0x34]
// 0048247d: PUSH ESI
// 0048247e: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00482483: ADD ESP,0x10
// 00482486: POP EBP
// 00482487: POP EDI
// 00482488: POP ESI
// 00482489: POP EBX
// 0048248a: RET
