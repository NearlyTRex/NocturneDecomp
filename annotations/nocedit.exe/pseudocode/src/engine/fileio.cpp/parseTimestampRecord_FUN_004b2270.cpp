// Name: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// Address: 004b2270
// Address Range: [[004b2270, 004b2391]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_parseTimestampRecord_FUN_004b2270(char * input_string, STimestampRecord * output_record)
// Cross-references:
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b24d4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_d_d_d_d_d_n_n_0062613e
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_parseTimestampRecord_FUN_004b2270
          (char *input_string,STimestampRecord *output_record)

{
  char cVar1;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char acStack_220 [508];
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  crt_stdio_c_sscanf_FUN_0060013c
            (input_string,"%d: %d / %d / %d %d : %d : %d \"%[^\"]\"%n %n",local_24,&local_18,&local_20,&local_1c,
             &local_14,&local_10,&local_c,&stack0xfffffddc,&local_8,&local_8);
  if (unaff_EBX < 0) {
    return 0;
  }
  *(undefined1 *)&output_record->record_start = 0;
  *(undefined4 *)(output_record->field1_0x4 + 0xfc) = local_20;
  output_record->year = local_14 + -0x76c;
  output_record->month = local_1c + -1;
  output_record->time_3 = local_18;
  output_record->time_2 = local_10;
  output_record->time_1 = local_c;
  pcVar2 = acStack_220;
  pcVar3 = output_record->field8_0x11c + 0xc;
  output_record->chars_read = local_8;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return 1;
}


// Assembly code:
// 004b2270: PUSH EBX
//   Label: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// 004b2271: SUB ESP,0x220
// 004b2277: MOV EBX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x8] (READ)
// 004b227e: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x8] (DATA)
// 004b2285: PUSH EAX
// 004b2286: PUSH EAX
// 004b2287: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x224] (DATA)
// 004b228b: PUSH EAX
// 004b228c: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0xc] (DATA)
// 004b2293: PUSH EAX
// 004b2294: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x10] (DATA)
// 004b229b: PUSH EAX
// 004b229c: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x14] (DATA)
// 004b22a3: PUSH EAX
// 004b22a4: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x1c] (DATA)
// 004b22ab: PUSH EAX
// 004b22ac: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x20] (DATA)
// 004b22b3: PUSH EAX
// 004b22b4: LEA EAX,[ESP + 0x22c]
//   XREF to: Stack[-0x18] (DATA)
// 004b22bb: PUSH EAX
// 004b22bc: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x24] (DATA)
// 004b22c3: PUSH EAX
// 004b22c4: PUSH 0x62613e
//   XREF to: 0062613e (DATA)
// 004b22c9: MOV ECX,dword ptr [ESP + 0x254]
//   XREF to: Stack[0x4] (READ)
// 004b22d0: MOV EDX,0xffffffff
// 004b22d5: PUSH ECX
// 004b22d6: MOV dword ptr [ESP + 0x24c],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004b22dd: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004b22e2: ADD ESP,0x30
// 004b22e5: CMP dword ptr [ESP + 0x21c],0x0
//   XREF to: Stack[-0x8] (READ)
// 004b22ed: JGE 0x004b22f9
//   XREF to: 004b22f9 (CONDITIONAL_JUMP)
// 004b22ef: XOR EAX,EAX
// 004b22f1: ADD ESP,0x220
// 004b22f7: POP EBX
// 004b22f8: RET
// 004b22f9: PUSH EDI
//   Label: LAB_004b22f9
// 004b22fa: PUSH ESI
// 004b22fb: MOV byte ptr [EBX],0x0
// 004b22fe: MOV EAX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x24] (READ)
// 004b2305: MOV dword ptr [EBX + 0x100],EAX
// 004b230b: MOV EAX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x18] (READ)
// 004b2312: SUB EAX,0x76c
// 004b2317: MOV dword ptr [EBX + 0x118],EAX
// 004b231d: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x20] (READ)
// 004b2324: DEC EAX
// 004b2325: MOV dword ptr [EBX + 0x114],EAX
// 004b232b: MOV EAX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x1c] (READ)
// 004b2332: MOV dword ptr [EBX + 0x110],EAX
// 004b2338: MOV EAX,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x14] (READ)
// 004b233f: MOV dword ptr [EBX + 0x10c],EAX
// 004b2345: MOV EAX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x10] (READ)
// 004b234c: MOV dword ptr [EBX + 0x108],EAX
// 004b2352: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x224] (DATA)
// 004b2356: MOV EAX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0xc] (READ)
// 004b235d: LEA EDI,[EBX + 0x128]
// 004b2363: MOV dword ptr [EBX + 0x104],EAX
// 004b2369: PUSH EDI
// 004b236a: MOV AL,byte ptr [ESI]
//   Label: LAB_004b236a
//   XREF to: Stack[-0x224] (DATA)
// 004b236c: MOV byte ptr [EDI],AL
// 004b236e: CMP AL,0x0
// 004b2370: JZ 0x004b2382
//   XREF to: 004b2382 (CONDITIONAL_JUMP)
// 004b2372: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x223] (READ)
// 004b2375: ADD ESI,0x2
// 004b2378: MOV byte ptr [EDI + 0x1],AL
// 004b237b: ADD EDI,0x2
// 004b237e: CMP AL,0x0
// 004b2380: JNZ 0x004b236a
//   XREF to: 004b236a (CONDITIONAL_JUMP)
// 004b2382: POP EDI
//   Label: LAB_004b2382
// 004b2383: MOV EAX,0x1
// 004b2388: POP ESI
// 004b2389: POP EDI
// 004b238a: ADD ESP,0x220
// 004b2390: POP EBX
// 004b2391: RET
