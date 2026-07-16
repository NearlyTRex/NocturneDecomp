// Name: crt_stdio.c__flsbuf_FUN_10007420
// Address: 10007420
// Address Range: [[10007420, 1000756c]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__flsbuf_FUN_10007420(int ch,_FILE *str)

#include "nocturne.h"

int __cdecl _flsbuf(int ch,_FILE *str)

{
  uint fh;
  _FILE *file;
  int iVar1;
  byte *puVar2;
  uint uVar3;
  uint uVar4;
  
  file = str;
  fh = str->_file;
  uVar3 = str->_flag;
  if (((uVar3 & 0x82) == 0) || ((uVar3 & 0x40) != 0)) {
    str->_flag = uVar3 | 0x20;
    return -1;
  }
  if ((uVar3 & 1) != 0) {
    str->_cnt = 0;
    if ((str->_flag & 0x10U) == 0) {
      str->_flag = str->_flag | 0x20;
      return -1;
    }
    str->_ptr = str->_base;
    str->_flag = str->_flag & 0xfffffffe;
  }
  uVar3 = str->_flag;
  uVar4 = 0;
  str->_flag = uVar3 | 2;
  str->_flag = uVar3 & 0xffffffef | 2;
  str->_cnt = 0;
  if ((str->_flag & 0x10cU) == 0) {
    if ((str == (_FILE *)&DAT_100170a8) || (str == (_FILE *)&DAT_100170c8)) {
      iVar1 = _isatty(fh);
      if (iVar1 != 0) goto LAB_100074a4;
    }
    _getbuf(file);
  }
LAB_100074a4:
  if ((file->_flag & 0x108U) == 0) {
    uVar3 = 1;
    uVar4 = _write(fh,&ch,1);
  }
  else {
    uVar3 = (int)file->_ptr - (int)file->_base;
    file->_ptr = file->_base + 1;
    file->_cnt = file->_bufsiz + -1;
    if ((int)uVar3 < 1) {
      puVar2 = &DAT_10016db0;
      if (fh != 0xffffffff) {
        puVar2 = (byte *)
                 (*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7) >> 3)) + (fh & 0x1f) * 0x24)
        ;
      }
      if ((puVar2[4] & 0x20) != 0) {
        _write_dup(fh,(void *)0x0,2);
      }
    }
    else {
      uVar4 = _write(fh,file->_base,uVar3);
    }
    *file->_base = (char)ch;
  }
  if (uVar4 != uVar3) {
    file->_flag = file->_flag | 0x20;
    return -1;
  }
  return ch & 0xff;
}
