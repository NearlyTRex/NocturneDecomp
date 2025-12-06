// Name: crt_time.c_asctimeFormat_FUN_00601678
// Address: 00601678
// Address Range: [[00601678, 00601767]]
// Convention: __watcallStack
// Signature: char * crt_time.c_asctimeFormat_FUN_00601678(tm * timeptr, char * buffer)

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
