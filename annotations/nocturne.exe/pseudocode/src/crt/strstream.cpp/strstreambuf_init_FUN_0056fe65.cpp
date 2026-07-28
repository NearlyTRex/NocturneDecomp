// Name: crt_strstream.cpp_strstreambuf_init_FUN_0056fe65
// Address: 0056fe65
// Address Range: [[0056fe65, 0056ff29]]
// Convention: unknown
// Signature: void crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(streambuf *param_1,char *param_2,int param_3,char *param_4)

#include "nocturne.h"

void crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(streambuf *param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  param_1[1].__reserve_base = (char *)0x0;
  param_1[1].__reserve_end = (char *)0x0;
  param_1[1].__get_base = (char *)0x20;
  param_1[1].__get_end = (char *)0x0;
  *(byte *)&param_1[1].__get_ptr = *(byte *)&param_1[1].__get_ptr & 0xf8;
  if (param_2 == (char *)0x0) {
    *(byte *)&param_1[1].__get_ptr = *(byte *)&param_1[1].__get_ptr | 2;
    return;
  }
  if (param_3 < 1) {
    if (param_3 != 0) {
      pcVar5 = param_2 + 0x200;
      *(byte *)&param_1[1].__get_ptr = *(byte *)&param_1[1].__get_ptr | 4;
      goto LAB_0056feab;
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = ~uVar3 - 1;
  }
  pcVar5 = param_2 + param_3;
LAB_0056feab:
  crt_iostream_cpp_setBuffer_FUN_00571df8(param_1,param_2,pcVar5,0);
  if (((param_4 == (char *)0x0) || (param_4 < param_2)) ||
     ((pcVar2 = param_2, pcVar4 = pcVar5, pcVar5 <= param_4 &&
      (((uint)param_1[1].__get_ptr & 4) == 0)))) {
    param_4 = (char *)0x0;
    pcVar2 = (char *)0x0;
    pcVar4 = (char *)0x0;
  }
  param_1->__get_base = param_2;
  param_1->__get_ptr = param_2;
  param_1->__get_end = pcVar5;
  param_1->__put_base = pcVar2;
  param_1->__put_ptr = pcVar2;
  param_1->__put_end = pcVar4;
  if (pcVar2 < param_4) {
    param_1->__put_ptr = param_1->__put_ptr + ((int)param_4 - (int)pcVar2);
    return;
  }
  return;
}
