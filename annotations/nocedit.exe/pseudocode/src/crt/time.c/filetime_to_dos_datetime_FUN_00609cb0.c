// Name: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
// Address: 00609cb0
// Address Range: [[00609cb0, 00609cdd]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME *filetime,WORD *dos_date,WORD *dos_time)

#include "nocturne.h"

void __cdecl filetime_to_dos_datetime(FILETIME *filetime,WORD *dos_date,WORD *dos_time)

{
  _FILETIME _Stack_c;
  
  (*g_FileTimeToLocalFileTimeFunc)(filetime,&_Stack_c);
  (*g_FileTimeToDosDateTimeFunc)(&_Stack_c,dos_date,dos_time);
  return;
}
