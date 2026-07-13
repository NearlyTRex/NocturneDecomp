// Name: __cftof
// Address: 100071a0
// Address Range: [[100071a0, 10007207]]
// Convention: __cdecl
// Signature: errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

#include "nocturne.h"

/* Library Function - Single Match
errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (local_28.sign == 0x2d),local_28.decpt + _SizeInBytes,(int)&local_28,unaff_EDI);
  __cftof2(_Buf,_SizeInBytes,&local_28,0);
  return (errno_t)_Buf;
}
