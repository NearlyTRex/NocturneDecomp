// Name: crt_stdio.c__cftoe_FUN_10007030
// Address: 10007030
// Address Range: [[10007030, 100070a6]]
// Convention: __cdecl
// Signature: errno_t __cdecl crt_stdio_c__cftoe_FUN_10007030(double *value,char *buf,size_t size_in_bytes,int dec,int caps)

#include "nocturne.h"

errno_t __cdecl _cftoe(double *value,char *buf,size_t size_in_bytes,int dec,int caps)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  _fltout2((_CRT_DOUBLE)*value,&local_28,local_18,(size_t)unaff_EDI);
  _fptostr
            (buf + (uint)(0 < (int)size_in_bytes) + (uint)(local_28.sign == 0x2d),size_in_bytes + 1,
             (int)&local_28,unaff_EDI);
  _cftoe2(buf,size_in_bytes,dec,&local_28.sign,'\0');
  return (errno_t)buf;
}
