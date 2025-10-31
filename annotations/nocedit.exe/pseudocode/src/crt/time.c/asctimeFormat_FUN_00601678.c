// Name: crt_time.c_asctimeFormat_FUN_00601678
// Address: 00601678
// Address Range: [[00601678, 00601767]]
// Convention: __watcallStack
// Signature: char * crt_time.c_asctimeFormat_FUN_00601678(tm * timeptr, char * buffer)
// Cross-references:
//   crt_time.c_asctime_FUN_00601768 (00601768) at 00601777 [UNCONDITIONAL_CALL]
// Globals:
//   char[12] g_MonthInitial
//   char[12] g_MonthSecondInitial
//   char[12] g_MonthThirdInitial
//   char[7] g_WeekdayInitial
//   char[7] g_WeekdaySecondInitial
//   char[7] g_WeekdayThirdInitial
// Function calls:
//   crt_time.c_formatTwoDigits_FUN_00601640

#include "nocturne.h"

char * __watcallStack crt_time_c_asctimeFormat_FUN_00601678(tm *timeptr,char *buffer)

{
  char cVar1;
  int iVar2;
  int unaff_retaddr;
  
  iVar2 = timeptr->tm_wday;
  *buffer = g_WeekdayInitial[iVar2];
  buffer[1] = g_WeekdaySecondInitial[iVar2];
  cVar1 = g_WeekdayThirdInitial[iVar2];
  buffer[3] = ' ';
  buffer[2] = cVar1;
  iVar2 = timeptr->tm_mon;
  buffer[4] = g_MonthInitial[iVar2];
  buffer[5] = g_MonthSecondInitial[iVar2];
  cVar1 = g_MonthThirdInitial[iVar2];
  buffer[7] = ' ';
  buffer[6] = cVar1;
  crt_time_c_formatTwoDigits_FUN_00601640(timeptr->tm_mday,8,buffer);
  if (buffer[8] == '0') {
    buffer[8] = ' ';
  }
  buffer[10] = ' ';
  crt_time_c_formatTwoDigits_FUN_00601640(timeptr->tm_hour,0xb,buffer);
  buffer[0xd] = ':';
  crt_time_c_formatTwoDigits_FUN_00601640(timeptr->tm_min,0xe,buffer);
  buffer[0x10] = ':';
  crt_time_c_formatTwoDigits_FUN_00601640(timeptr->tm_sec,0x11,buffer);
  buffer[0x13] = ' ';
  crt_time_c_formatTwoDigits_FUN_00601640(timeptr->tm_year / 100 + 0x13,0x14,buffer);
  crt_time_c_formatTwoDigits_FUN_00601640(unaff_retaddr,0x16,buffer);
  buffer[0x18] = '\n';
  buffer[0x19] = '\0';
  return buffer;
}


// Assembly code:
// 00601678: PUSH EBX
//   Label: crt_time.c_asctimeFormat_FUN_00601678
// 00601679: PUSH ESI
// 0060167a: PUSH EDI
// 0060167b: PUSH EBP
// 0060167c: SUB ESP,0x8
// 0060167f: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00601683: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00601687: MOV EAX,dword ptr [ESI + 0x18]
// 0060168a: MOV DL,byte ptr [EAX + 0x684cac]
//   XREF to: 00684cac (DATA)
// 00601690: MOV byte ptr [EBX],DL
// 00601692: MOV DL,byte ptr [EAX + 0x684cb3]
//   XREF to: 00684cb3 (DATA)
// 00601698: MOV byte ptr [EBX + 0x1],DL
// 0060169b: MOV AL,byte ptr [EAX + 0x684cba]
//   XREF to: 00684cba (DATA)
// 006016a1: MOV byte ptr [EBX + 0x3],0x20
// 006016a5: MOV byte ptr [EBX + 0x2],AL
// 006016a8: MOV EAX,dword ptr [ESI + 0x10]
// 006016ab: MOV DL,byte ptr [EAX + 0x684c88]
//   XREF to: 00684c88 (DATA)
// 006016b1: MOV byte ptr [EBX + 0x4],DL
// 006016b4: MOV DL,byte ptr [EAX + 0x684c94]
//   XREF to: 00684c94 (DATA)
// 006016ba: MOV byte ptr [EBX + 0x5],DL
// 006016bd: MOV AL,byte ptr [EAX + 0x684ca0]
//   XREF to: 00684ca0 (DATA)
// 006016c3: MOV byte ptr [EBX + 0x7],0x20
// 006016c7: PUSH EBX
// 006016c8: MOV byte ptr [EBX + 0x6],AL
// 006016cb: PUSH 0x8
// 006016cd: MOV EDX,dword ptr [ESI + 0xc]
// 006016d0: PUSH EDX
// 006016d1: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 006016d6: MOV AH,byte ptr [EBX + 0x8]
// 006016d9: ADD ESP,0xc
// 006016dc: CMP AH,0x30
// 006016df: JNZ 0x006016e5
//   XREF to: 006016e5 (CONDITIONAL_JUMP)
// 006016e1: MOV byte ptr [EBX + 0x8],0x20
// 006016e5: PUSH EBX
//   Label: LAB_006016e5
// 006016e6: MOV byte ptr [EBX + 0xa],0x20
// 006016ea: PUSH 0xb
// 006016ec: MOV ECX,dword ptr [ESI + 0x8]
// 006016ef: PUSH ECX
// 006016f0: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 006016f5: ADD ESP,0xc
// 006016f8: PUSH EBX
// 006016f9: MOV byte ptr [EBX + 0xd],0x3a
// 006016fd: PUSH 0xe
// 006016ff: MOV EDI,dword ptr [ESI + 0x4]
// 00601702: PUSH EDI
// 00601703: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 00601708: ADD ESP,0xc
// 0060170b: PUSH EBX
// 0060170c: MOV byte ptr [EBX + 0x10],0x3a
// 00601710: PUSH 0x11
// 00601712: MOV EBP,dword ptr [ESI]
// 00601714: PUSH EBP
// 00601715: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 0060171a: MOV ECX,0x64
// 0060171f: MOV byte ptr [EBX + 0x13],0x20
// 00601723: ADD ESP,0xc
// 00601726: MOV EAX,dword ptr [ESI + 0x14]
// 00601729: MOV ESI,ESP
// 0060172b: CDQ
// 0060172c: IDIV ECX
// 0060172e: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00601730: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00601733: PUSH EBX
// 00601734: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00601738: PUSH 0x14
// 0060173a: ADD EAX,0x13
// 0060173d: PUSH EAX
// 0060173e: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 00601743: ADD ESP,0xc
// 00601746: PUSH EBX
// 00601747: PUSH 0x16
// 00601749: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0060174d: PUSH EAX
// 0060174e: CALL crt_time.c_formatTwoDigits_FUN_00601640
//   XREF to: 00601640 (UNCONDITIONAL_CALL)
// 00601753: ADD ESP,0xc
// 00601756: MOV byte ptr [EBX + 0x18],0xa
// 0060175a: MOV EAX,EBX
// 0060175c: MOV byte ptr [EBX + 0x19],0x0
// 00601760: ADD ESP,0x8
// 00601763: POP EBP
// 00601764: POP EDI
// 00601765: POP ESI
// 00601766: POP EBX
// 00601767: RET
