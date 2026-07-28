// Name: FUN_00568ed0
// Address: 00568ed0
// Address Range: [[00568ed0, 00568f60]]
// Convention: unknown
// Signature: void FUN_00568ed0(_FILE *param_1)

#include "nocturne.h"

void FUN_00568ed0(_FILE *param_1)

{
  streambuf *psVar1;
  char *pcVar2;
  byte bVar3;
  
  DetectDeviceAndSetBuffering(param_1);
  if (param_1->_bufsize == 0) {
    if ((param_1->_flag & 0x200) == 0) {
      if ((param_1->_flag & 0x400) == 0) {
        param_1->_bufsize = 0x1000;
      }
      else {
        param_1->_bufsize = 1;
      }
    }
    else {
      param_1->_bufsize = 0x86;
    }
  }
  pcVar2 = (char *)malloc(param_1->_bufsize);
  param_1->_link->__reserve_end = pcVar2;
  if (param_1->_link->__reserve_end == (char *)0x0) {
    bVar3 = *(byte *)((int)&param_1->_flag + 1) & 0xf8;
    *(byte *)((int)&param_1->_flag + 1) = bVar3;
    psVar1 = param_1->_link;
    *(byte *)((int)&param_1->_flag + 1) = bVar3 | 4;
    psVar1->__reserve_end = (char *)&param_1->_ungotten;
    param_1->_bufsize = 1;
  }
  else {
    *(byte *)&param_1->_flag = (byte)param_1->_flag | 8;
  }
  pcVar2 = param_1->_link->__reserve_end;
  param_1->_cnt = 0;
  param_1->_ptr = pcVar2;
  return;
}
