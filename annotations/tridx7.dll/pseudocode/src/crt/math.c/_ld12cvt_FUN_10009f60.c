// Name: crt_math.c__ld12cvt_FUN_10009f60
// Address: 10009f60
// Address Range: [[10009f60, 1000a12a]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__ld12cvt_FUN_10009f60(ushort *ld,uint *result,int *prec)

#include "nocturne.h"

int __cdecl _ld12cvt(ushort *ld,uint *result,int *prec)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c [3];
  
  uVar1 = ld[5];
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_14 = *(uint *)(ld + 1);
  local_18 = *(uint *)(ld + 3);
  local_10 = (uint)*ld << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = _IsZeroMan((int *)&local_18);
    if (iVar2 == 0) {
      _FillZeroMan((int *)&local_18);
      iVar2 = 2;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    _CopyMan(local_c,(int *)&local_18);
    iVar2 = _RoundMan((int)&local_18,prec[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = prec[1];
    if (iVar4 < iVar2 - prec[2]) {
      iVar4 = 0;
      _FillZeroMan((int *)&local_18);
      iVar2 = 2;
    }
    else if (iVar2 < iVar4) {
      if (iVar4 < *prec) {
        iVar4 = iVar4 + prec[5];
        local_18 = local_18 & 0x7fffffff;
        _ShrMan(&local_18,prec[3]);
        iVar2 = 0;
      }
      else {
        _FillZeroMan((int *)&local_18);
        local_18 = local_18 | 0x80000000;
        _ShrMan(&local_18,prec[3]);
        iVar4 = prec[5] + *prec;
        iVar2 = 1;
      }
    }
    else {
      _CopyMan((int *)&local_18,local_c);
      _ShrMan(&local_18,iVar2 - iVar4);
      _RoundMan((int)&local_18,prec[2]);
      iVar4 = 0;
      _ShrMan(&local_18,prec[3] + 1);
      iVar2 = 2;
    }
  }
  local_18 = iVar4 << (0x1fU - (char)prec[3] & 0x1f) | ((uVar1 & 0x8000) == 0) - 1 & 0x80000000 |
             local_18;
  if (prec[4] == 0x40) {
    result[1] = local_18;
    *result = local_14;
    return iVar2;
  }
  if (prec[4] == 0x20) {
    *result = local_18;
  }
  return iVar2;
}
