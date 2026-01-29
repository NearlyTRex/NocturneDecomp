// Name: crt_time.c_asctimeFormat_FUN_00601678
// Address: 00601678
// Address Range: [[00601678, 00601767]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_time_c_asctimeFormat_FUN_00601678(_tm *timeptr,char *buffer)

#include "nocturne.h"

char * __watcallStack asctimeFormat(_tm *timeptr,char *buffer)

{
  char cVar1;
  int iVar2;
  
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
  formatTwoDigits(timeptr->tm_mday,8,buffer);
  if (buffer[8] == '0') {
    buffer[8] = ' ';
  }
  buffer[10] = ' ';
  formatTwoDigits(timeptr->tm_hour,0xb,buffer);
  buffer[0xd] = ':';
  formatTwoDigits(timeptr->tm_min,0xe,buffer);
  buffer[0x10] = ':';
  formatTwoDigits(timeptr->tm_sec,0x11,buffer);
  buffer[0x13] = ' ';
  iVar2 = timeptr->tm_year;
  formatTwoDigits(iVar2 / 100 + 0x13,0x14,buffer);
  formatTwoDigits(iVar2 % 100,0x16,buffer);
  buffer[0x18] = '\n';
  buffer[0x19] = '\0';
  return buffer;
}
