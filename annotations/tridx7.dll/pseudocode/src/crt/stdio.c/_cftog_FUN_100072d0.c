// Name: crt_stdio.c__cftog_FUN_100072d0
// Address: 100072d0
// Address Range: [[100072d0, 1000737a]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__cftog_FUN_100072d0(double *value,char *buf,size_t size_in_bytes,int caps)

#include "nocturne.h"

void __cdecl _cftog(double *value,char *buf,size_t size_in_bytes,int caps)

{
  char *pcVar1;
  int iVar2;
  STRFLT unaff_EBP;
  char *pcVar3;
  _strflt local_28;
  char local_18 [24];
  
  _fltout2((_CRT_DOUBLE)*value,&local_28,local_18,(size_t)unaff_EBP);
  iVar2 = local_28.decpt + -1;
  _fptostr
            (buf + (local_28.sign == 0x2d),size_in_bytes,(int)&local_28,unaff_EBP);
  local_28.decpt = local_28.decpt + -1;
  if ((-5 < local_28.decpt) && (local_28.decpt < (int)size_in_bytes)) {
    pcVar1 = buf + (local_28.sign == 0x2d);
    if (iVar2 < local_28.decpt) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    _cftof2(buf,size_in_bytes,&local_28.sign,'\x01');
    return;
  }
  _cftoe2(buf,size_in_bytes,caps,&local_28.sign,'\x01');
  return;
}
