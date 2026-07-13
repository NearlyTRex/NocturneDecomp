// Name: __wctomb_lk
// Address: 10009240
// Address Range: [[10009240, 100092d3]]
// Convention: unknown
// Signature: int __wctomb_lk(LPSTR param_1,WCHAR param_2)

#include "nocturne.h"

/* Library Function - Single Match
int __wctomb_lk(LPSTR param_1,WCHAR param_2)

{
  uint *puVar1;
  int iVar2;
  BOOL local_4;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10017760 == 0) {
    if (0xff < (ushort)param_2) {
      puVar1 = (uint *)FUN_10008a20();
      *puVar1 = 0x2a;
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_4 = 0;
  iVar2 = WideCharToMultiByte(DAT_10017770,0x220,&param_2,1,param_1,DAT_10017690,(LPCSTR)0x0,
                              &local_4);
  if ((iVar2 == 0) || (local_4 != 0)) {
    puVar1 = (uint *)FUN_10008a20();
    *puVar1 = 0x2a;
    iVar2 = -1;
  }
  return iVar2;
}
