// Name: crt_stdio.c__cfltcvt_FUN_10007380
// Address: 10007380
// Address Range: [[10007380, 100073e4]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__cfltcvt_FUN_10007380(double *value,char *buf,int format,size_t size_in_bytes,int precision,int caps)

#include "nocturne.h"

void __cdecl _cfltcvt(double *value,char *buf,int format,size_t size_in_bytes,int precision,int caps)

{
  int unaff_retaddr;
  
  if ((format != 0x65) && (format != 0x45)) {
    if (format == 0x66) {
      _cftof(value,buf,size_in_bytes,unaff_retaddr);
      return;
    }
    _cftog(value,buf,size_in_bytes,precision);
    return;
  }
  _cftoe(value,buf,size_in_bytes,precision,unaff_retaddr);
  return;
}
