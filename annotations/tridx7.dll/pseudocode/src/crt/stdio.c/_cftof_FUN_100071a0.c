// Name: crt_stdio.c__cftof_FUN_100071a0
// Address: 100071a0
// Address Range: [[100071a0, 10007207]]
// Convention: __cdecl
// Signature: errno_t __cdecl crt_stdio_c__cftof_FUN_100071a0(double *value,char *buf,size_t size_in_bytes,int dec)

#include "nocturne.h"

errno_t __cdecl _cftof(double *value,char *buf,size_t size_in_bytes,int dec)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  _fltout2((_CRT_DOUBLE)*value,&local_28,local_18,(size_t)unaff_EDI);
  _fptostr
            (buf + (local_28.sign == 0x2d),local_28.decpt + size_in_bytes,(int)&local_28,unaff_EDI);
  _cftof2(buf,size_in_bytes,&local_28.sign,'\0');
  return (errno_t)buf;
}
