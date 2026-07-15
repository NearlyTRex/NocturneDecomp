// Name: crt_time.c__expandtime_FUN_1000ed30
// Address: 1000ed30
// Address Range: [[1000ed30, 1000f1df]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__expandtime_FUN_1000ed30(uchar code,tm *tb,char **buf,size_t *count)

#include "nocturne.h"

void __cdecl _expandtime(uchar code,tm *tb,char **buf,size_t *count)

{
  int iVar1;
  byte *puVar2;
  int value;
  int iVar3;
  
  puVar2 = PTR_PTR_1001820c;
  switch(code) {
  case '%':
    **buf = '%';
    *buf = *buf + 1;
    *count = *count - 1;
    return;
  case 'A':
    _store_str
              (*(char **)(PTR_PTR_1001820c + tb->tm_wday * 4 + 0x1c),buf,(int *)count);
    return;
  case 'B':
    _store_str
              (*(char **)(PTR_PTR_1001820c + tb->tm_mon * 4 + 0x68),buf,(int *)count);
    return;
  case 'H':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_hour,2,buf,count);
    return;
  case 'I':
    DAT_10018214 = DAT_10018210;
    iVar3 = tb->tm_hour % 0xc;
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    _store_number(iVar3,2,buf,count);
    return;
  case 'M':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_min,2,buf,count);
    return;
  case 'S':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_sec,2,buf,count);
    return;
  case 'U':
    iVar3 = tb->tm_wday;
    goto LAB_1000eea0;
  case 'W':
    if (tb->tm_wday == 0) {
      iVar3 = 6;
    }
    else {
      iVar3 = tb->tm_wday + -1;
    }
LAB_1000eea0:
    DAT_10018214 = DAT_10018210;
    iVar1 = tb->tm_yday;
    if (iVar1 < iVar3) {
      value = 0;
    }
    else {
      value = iVar1 / 7;
      if (iVar3 <= iVar1 % 7) {
        value = value + 1;
      }
    }
    _store_number(value,2,buf,count);
    return;
  case 'X':
    DAT_10018210 = 0;
    _expand_locale_picture
              (*(char **)(PTR_PTR_1001820c + 0xa8),(uint)tb,buf,count);
    return;
  case 'Y':
    DAT_10018214 = DAT_10018210;
    _store_number
              (((tb->tm_year / 100) * 4 + 0x4c) * 0x19 + tb->tm_year % 100,4,buf,count);
    return;
  case 'Z':
  case 'z':
    __tzset();
    _store_str
              ((&PTR_DAT_100185b4)[-(uint)(tb->tm_isdst == 0)],buf,(int *)count);
    return;
  case 'a':
    _store_str
              (*(char **)(PTR_PTR_1001820c + tb->tm_wday * 4),buf,(int *)count);
    return;
  case 'b':
    _store_str
              (*(char **)(PTR_PTR_1001820c + tb->tm_mon * 4 + 0x38),buf,(int *)count);
    return;
  case 'c':
    if (DAT_10018210 == 0) {
      _expand_locale_picture
                (*(char **)(PTR_PTR_1001820c + 0xa0),(uint)tb,buf,count);
      if (*count != 0) {
        **buf = ' ';
        *buf = *buf + 1;
        *count = *count - 1;
        _expand_locale_picture(*(char **)(puVar2 + 0xa8),(uint)tb,buf,count)
        ;
        return;
      }
    }
    else {
      DAT_10018210 = 0;
      _expand_locale_picture
                (*(char **)(PTR_PTR_1001820c + 0xa4),(uint)tb,buf,count);
      if (*count != 0) {
        **buf = ' ';
        *buf = *buf + 1;
        *count = *count - 1;
        _expand_locale_picture(*(char **)(puVar2 + 0xa8),(uint)tb,buf,count)
        ;
        return;
      }
    }
    break;
  case 'd':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_mday,2,buf,count);
    return;
  case 'j':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_yday + 1,3,buf,count);
    return;
  case 'm':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_mon + 1,2,buf,count);
    return;
  case 'p':
    if (tb->tm_hour < 0xc) {
      _store_str(*(char **)(PTR_PTR_1001820c + 0x98),buf,(int *)count);
      return;
    }
    _store_str(*(char **)(PTR_PTR_1001820c + 0x9c),buf,(int *)count);
    return;
  case 'w':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_wday,1,buf,count);
    return;
  case 'x':
    if (DAT_10018210 != 0) {
      DAT_10018210 = 0;
      _expand_locale_picture
                (*(char **)(PTR_PTR_1001820c + 0xa4),(uint)tb,buf,count);
      return;
    }
    _expand_locale_picture
              (*(char **)(PTR_PTR_1001820c + 0xa0),(uint)tb,buf,count);
    return;
  case 'y':
    DAT_10018214 = DAT_10018210;
    _store_number(tb->tm_year % 100,2,buf,count);
  }
  return;
}
