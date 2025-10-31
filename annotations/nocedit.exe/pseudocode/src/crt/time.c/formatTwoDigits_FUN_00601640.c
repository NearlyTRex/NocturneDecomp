// Name: crt_time.c_formatTwoDigits_FUN_00601640
// Address: 00601640
// Address Range: [[00601640, 00601675]]
// Convention: __watcallStack
// Signature: void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)
// Cross-references:
//   crt_time.c_asctimeFormat_FUN_00601678 (00601678) at 00601703 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __watcallStack crt_time_c_formatTwoDigits_FUN_00601640(int number,int position,char *buffer)

{
  char local_c;
  char local_8;
  
  local_c = (char)(number / 10);
  buffer[position] = local_c + '0';
  local_8 = (char)(number % 10);
  (buffer + position)[1] = local_8 + '0';
  return;
}


// Assembly code:
// 00601640: PUSH ESI
//   Label: crt_time.c_formatTwoDigits_FUN_00601640
// 00601641: SUB ESP,0x8
// 00601644: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00601648: MOV ECX,0xa
// 0060164d: MOV ESI,ESP
// 0060164f: CDQ
// 00601650: IDIV ECX
// 00601652: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0xc] (DATA)
// 00601654: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 00601657: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0060165b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060165f: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00601662: ADD ESI,EDX
// 00601664: ADD AL,0x30
// 00601666: MOV byte ptr [ESI],AL
// 00601668: MOV AL,byte ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 0060166c: ADD AL,0x30
// 0060166e: MOV byte ptr [ESI + 0x1],AL
// 00601671: ADD ESP,0x8
// 00601674: POP ESI
// 00601675: RET
