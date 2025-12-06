// Name: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
// Address: 00609cb0
// Address Range: [[00609cb0, 00609cdd]]
// Convention: __cdecl
// Signature: void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)

#include "nocturne.h"

void __cdecl
crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME *filetime,WORD *dos_date,WORD *dos_time)

{
  BADSPACEBASE *in_ESP;
  LPWORD in_stack_00000014;
  
  (*PTR_FileTimeToLocalFileTime_00611540)(filetime,(LPFILETIME)&stack0xfffffff4);
  (*PTR_FileTimeToDosDateTime_0061153c)((FILETIME *)&stack0x00000000,in_stack_00000014,dos_time);
  return;
}
