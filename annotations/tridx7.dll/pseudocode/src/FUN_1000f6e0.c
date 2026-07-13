// Name: FUN_1000f6e0
// Address: 1000f6e0
// Address Range: [[1000f6e0, 1000f895]]
// Convention: unknown
// Signature: undefined4 FUN_1000f6e0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

uint FUN_1000f6e0(int param_1,uint param_2,uint param_3,char *param_4)

{
  bool bVar1;
  size_t _Count;
  DWORD DVar2;
  int iVar3;
  byte *pbVar4;
  char *_Dest;
  uint uVar5;
  byte local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_1000f9a0(param_2,param_3,&DAT_10240798,4,0);
    if (iVar3 != 0) {
      pbVar4 = &DAT_10240798;
      *param_4 = '\0';
      while( true ) {
        local_80[0] = *pbVar4;
        if (DAT_10017690 < 2) {
          uVar5 = *(ushort *)(PTR_DAT_10017480 + (uint)local_80[0] * 2) & 4;
        }
        else {
          uVar5 = __isctype((uint)local_80[0],4);
        }
        if (uVar5 == 0) break;
        pbVar4 = pbVar4 + 2;
        *param_4 = local_80[0] + *param_4 * '\n' + -0x30;
        if (&DAT_102407a0 <= pbVar4) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  pbVar4 = local_80;
  bVar1 = false;
  _Count = FUN_1000fad0(param_2,param_3,local_80,0x80,0);
  if (_Count == 0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) || (iVar3 = FUN_1000fad0(param_2,param_3,0,0,0), iVar3 == 0)) ||
       (pbVar4 = (byte *)FUN_10008830(iVar3), pbVar4 == (byte *)0x0)) goto LAB_1000f7b7;
    bVar1 = true;
    _Count = FUN_1000fad0(param_2,param_3,pbVar4,iVar3,0);
    if (_Count == 0) goto LAB_1000f7b7;
  }
  _Dest = (char *)FUN_10008830(_Count);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,(char *)pbVar4,_Count);
    if (bVar1) {
      FUN_10005b30(pbVar4);
    }
    return 0;
  }
LAB_1000f7b7:
  if (bVar1) {
    FUN_10005b30(pbVar4);
  }
  return 0xffffffff;
}
