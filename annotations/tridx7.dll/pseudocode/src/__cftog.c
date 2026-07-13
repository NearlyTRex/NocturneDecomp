// Name: __cftog
// Address: 100072d0
// Address Range: [[100072d0, 1000737a]]
// Convention: unknown
// Signature: void __cftog(double *param_1,int param_2,size_t param_3,undefined4 param_4)

#include "nocturne.h"

/* Library Function - Single Match
void __cftog(double *param_1,int param_2,size_t param_3,uint param_4)

{
  char *_Buf;
  int iVar1;
  STRFLT unaff_EBP;
  char *pcVar2;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*param_1,&local_28,local_18,(size_t)unaff_EBP);
  iVar1 = local_28.decpt + -1;
  _Buf = (char *)((uint)(local_28.sign == 0x2d) + param_2);
  __fptostr(_Buf,param_3,(int)&local_28,unaff_EBP);
  local_28.decpt = local_28.decpt + -1;
  if ((-5 < local_28.decpt) && (local_28.decpt < (int)param_3)) {
    if (iVar1 < local_28.decpt) {
      do {
        pcVar2 = _Buf;
        _Buf = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2[-1] = '\0';
    }
    __cftof2(param_2,param_3,&local_28,1);
    return;
  }
  __cftoe2(param_2,param_3,param_4,&local_28,1);
  return;
}
