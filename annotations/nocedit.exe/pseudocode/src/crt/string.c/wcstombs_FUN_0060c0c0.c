// Name: crt_string.c_wcstombs_FUN_0060c0c0
// Address: 0060c0c0
// Address Range: [[0060c0c0, 0060c180]]
// Convention: __cdecl
// Signature: int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)

#include "nocturne.h"

int __cdecl crt_string_c_wcstombs_FUN_0060c0c0(char *dest,wchar_t *src,SIZE_T dest_size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  byte bVar8;
  uint in_stack_00000010;
  byte local_14 [4];
  
  bVar8 = 0;
  iVar5 = 0;
  pwVar4 = src;
  if (dest == (char *)0x0) {
    while( true ) {
      iVar2 = iVar5;
      if ((*src == L'\0') ||
         (iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                            ((wchar_t)local_14,(char *)(uint)(ushort)*src), iVar2 == -1)) break;
      src = src + 1;
      iVar5 = iVar5 + iVar2;
    }
  }
  else {
    while (iVar2 = iVar5, dest_size != 0) {
      if (*pwVar4 == L'\0') {
        *dest = '\0';
        return iVar5;
      }
      uVar1 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)*pwVar4);
      if (uVar1 == 0xffffffff) {
        return -1;
      }
      if (in_stack_00000010 < uVar1) {
        return iVar5;
      }
      puVar6 = (uint *)&stack0xfffffff0;
      pwVar7 = src;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pwVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        pwVar7 = pwVar7 + (uint)bVar8 * -4 + 2;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)pwVar7 = *(byte *)puVar6;
        puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
        pwVar7 = (wchar_t *)((int)pwVar7 + (uint)bVar8 * -2 + 1);
      }
      pwVar4 = pwVar4 + 1;
      iVar5 = iVar5 + uVar1;
      src = (wchar_t *)((int)src + uVar1);
      in_stack_00000010 = in_stack_00000010 - uVar1;
    }
  }
  return iVar2;
}
