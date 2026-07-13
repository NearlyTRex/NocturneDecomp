// Name: __cftoe
// Address: 10007030
// Address Range: [[10007030, 100070a6]]
// Convention: __cdecl
// Signature: errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

#include "nocturne.h"

/* Library Function - Single Match
errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(local_28.sign == 0x2d),_SizeInBytes + 1,
            (int)&local_28,unaff_EDI);
  __cftoe2(_Buf,_SizeInBytes,_Dec,&local_28,0);
  return (errno_t)_Buf;
}
