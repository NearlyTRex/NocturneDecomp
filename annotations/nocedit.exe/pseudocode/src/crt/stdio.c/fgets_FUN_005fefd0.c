// Name: crt_stdio.c_fgets_FUN_005fefd0
// Address: 005fefd0
// Address Range: [[005fefd0, 005ff05f]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)

#include "nocturne.h"

char * __cdecl crt_stdio_c_fgets_FUN_005fefd0(char *str,int num,FILE *stream)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int unaff_EDI;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream->_handle);
  uVar1 = stream->_flag;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xcf;
  pcVar2 = str;
  do {
    num = num + -1;
    pcVar3 = pcVar2;
    if (num < 1) break;
    unaff_EDI = crt_stdio_c_fgetc_FUN_005fe840(stream);
    if (unaff_EDI == -1) break;
    pcVar3 = pcVar2 + 1;
    *pcVar2 = (char)unaff_EDI;
    pcVar2 = pcVar3;
  } while ((char)unaff_EDI != '\n');
  if ((unaff_EDI == -1) && ((pcVar3 == str || ((stream->_flag & 0x20) != 0)))) {
    str = (char *)0x0;
  }
  else {
    *pcVar3 = '\0';
  }
  stream->_flag = stream->_flag | uVar1 & 0x30;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
  return str;
}
