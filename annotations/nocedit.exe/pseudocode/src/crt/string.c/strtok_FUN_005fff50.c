// Name: crt_string.c_strtok_FUN_005fff50
// Address: 005fff50
// Address Range: [[005fff50, 00600001]]
// Convention: __cdecl
// Signature: char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)

#include "nocturne.h"

char * __cdecl crt_string_c_strtok_FUN_005fff50(char *str,char *delimiters)

{
  byte bVar1;
  ThreadData *pTVar2;
  byte *pbVar3;
  byte *pbVar4;
  BADSPACEBASE *in_ESP;
  byte local_28 [32];
  
  if (str == (char *)0x0) {
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    str = *(char **)pTVar2->unknown_10;
    if ((byte *)str == (byte *)0x0) {
      return (char *)0x0;
    }
  }
  crt_unknown_c_FUN_00607080();
  while( true ) {
    bVar1 = *str;
    pbVar3 = (byte *)(uint)bVar1;
    if ((pbVar3 == (byte *)0x0) || ((local_28[bVar1 >> 3] & (&DAT_00665f28)[bVar1 & 7]) == 0))
    break;
    str = (char *)((byte *)str + 1);
  }
  pbVar4 = (byte *)str;
  if (pbVar3 != (byte *)0x0) {
    for (; bVar1 = *pbVar4, bVar1 != 0; pbVar4 = pbVar4 + 1) {
      if ((local_28[bVar1 >> 3] & (&DAT_00665f28)[bVar1 & 7]) != 0) {
        *pbVar4 = 0;
        pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
        *(byte **)pTVar2->unknown_10 = pbVar4 + 1;
        return (char *)(byte *)str;
      }
    }
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pTVar2->unknown_10[0] = '\0';
    pTVar2->unknown_10[1] = '\0';
    pTVar2->unknown_10[2] = '\0';
    pTVar2->unknown_10[3] = '\0';
    pbVar3 = (byte *)str;
  }
  return (char *)pbVar3;
}
