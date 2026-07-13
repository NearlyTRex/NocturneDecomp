// Name: __mtdeletelocks
// Address: 10005930
// Address Range: [[10005930, 10005993]]
// Convention: __cdecl
// Signature: void __cdecl __mtdeletelocks(void)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_10016c78)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_10005b30((&DAT_10016c78)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016c9c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016cac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016cbc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016c7c);
  return;
}
