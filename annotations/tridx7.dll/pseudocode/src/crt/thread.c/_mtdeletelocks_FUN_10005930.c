// Name: crt_thread.c__mtdeletelocks_FUN_10005930
// Address: 10005930
// Address Range: [[10005930, 10005993]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__mtdeletelocks_FUN_10005930(void)

#include "nocturne.h"

void __cdecl _mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_10016c78)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      free((void *)(&DAT_10016c78)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection(LPCRITICAL_SECTION_10016c9c);
  DeleteCriticalSection(LPCRITICAL_SECTION_10016cac);
  DeleteCriticalSection(LPCRITICAL_SECTION_10016cbc);
  DeleteCriticalSection(LPCRITICAL_SECTION_10016c7c);
  return;
}
