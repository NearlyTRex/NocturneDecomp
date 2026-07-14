// Name: FUN_10008d20
// Address: 10008d20
// Address Range: [[10008d20, 10008dd3]]
// Convention: unknown
// Signature: uint FUN_10008d20(HANDLE param_1,uint param_2)

#include "nocturne.h"

uint FUN_10008d20(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  uint *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((param_2 & 8) != 0) {
    bVar3 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar3 = bVar3 | 0x80;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    return 0xffffffff;
  }
  if (DVar1 == 2) {
    bVar3 = bVar3 | 0x40;
  }
  else if (DVar1 == 3) {
    bVar3 = bVar3 | 8;
  }
  _Filehandle = __alloc_osfhnd();
  if (_Filehandle == 0xffffffff) {
    puVar2 = (uint *)FUN_10008a20();
    *puVar2 = 0x18;
    puVar2 = (uint *)FUN_10008a30();
    *puVar2 = 0;
    return 0xffffffff;
  }
  FUN_10008b80(_Filehandle,param_1);
  *(byte *)(*(int *)((int)&DAT_10241870 + ((int)(_Filehandle & 0xffffffe7) >> 3)) + 4 +
           (_Filehandle & 0x1f) * 0x24) = bVar3 | 1;
  __unlock_fhandle(_Filehandle);
  return _Filehandle;
}
