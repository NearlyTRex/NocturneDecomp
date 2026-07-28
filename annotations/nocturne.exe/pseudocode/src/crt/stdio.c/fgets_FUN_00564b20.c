// Name: crt_stdio.c_fgets_FUN_00564b20
// Address: 00564b20
// Address Range: [[00564b20, 00564baf]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_fgets_FUN_00564b20(char *str,int num,_FILE *stream)

#include "nocturne.h"

char * __cdecl _fgets(char *str,int num,_FILE *stream)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iStack_18;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(stream->_handle);
  uVar1 = stream->_flag;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xcf;
  pcVar2 = str;
  do {
    num = num + -1;
    pcVar3 = pcVar2;
    if (num < 1) break;
    iStack_18 = _fgetc(stream);
    if (iStack_18 == -1) break;
    pcVar3 = pcVar2 + 1;
    *pcVar2 = (char)iStack_18;
    pcVar2 = pcVar3;
  } while ((char)iStack_18 != '\n');
  if ((iStack_18 == -1) && ((pcVar3 == str || ((stream->_flag & 0x20) != 0)))) {
    str = (char *)0x0;
  }
  else {
    *pcVar3 = '\0';
  }
  stream->_flag = stream->_flag | uVar1 & 0x30;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(stream->_handle);
  return str;
}
