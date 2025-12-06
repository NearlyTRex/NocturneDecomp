// Name: crt_time.c_formatTwoDigits_FUN_00601640
// Address: 00601640
// Address Range: [[00601640, 00601675]]
// Convention: __watcallStack
// Signature: void crt_time.c_formatTwoDigits_FUN_00601640(int number, int position, char * buffer)

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
