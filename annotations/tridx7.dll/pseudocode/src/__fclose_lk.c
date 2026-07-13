// Name: __fclose_lk
// Address: 10005470
// Address Range: [[10005470, 100054ce]]
// Convention: unknown
// Signature: int __fclose_lk(FILE *param_1)

#include "nocturne.h"

/* Library Function - Single Match
int __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10005b30(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}
