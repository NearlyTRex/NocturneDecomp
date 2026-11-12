// Name: crt_unknown.c_FUN_0057096c
// Address: 0057096c
// Address Range: [[0057096c, 005709a3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0057096c(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)

#include "nocturne.h"

uint FUN_0057096c(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)

{
  BOOL BVar1;
  
  while( true ) {
    if (param_3->dwFileAttributes == 0) {
      param_3->dwFileAttributes = 0x80;
    }
    if ((param_3->dwFileAttributes & param_2) != 0) break;
    BVar1 = FindNextFileA(param_1,param_3);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
