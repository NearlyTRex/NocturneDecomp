// Name: FID_conflict:_memcpy
// Address: 1000a4a0
// Address Range: [[1000a4a0, 1000a4d6] [1000a4e8, 1000a4fa] [1000a4fc, 1000a508] [1000a50c, 1000a516] [1000a518, 1000a53c] [1000a540, 1000a548] [1000a54c, 1000a56f] [1000a580, 1000a595] [1000a598, 1000a5b5] [1000a5b8, 1000a5e2] [1000a5e4, 1000a5ed]]
// Convention: __cdecl
// Signature: void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

#include "nocturne.h"

/* Library Function - Multiple Matches With Different Base Names
void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  int in_EDX;
  uint uVar2;
  uint *puVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  
  if ((_Src < _Dst) && (_Dst < (void *)((int)_Src + _Size))) {
    puVar3 = (uint *)((int)_Src + _Size);
    puVar5 = (uint *)((int)_Dst + _Size);
    if (((uint)puVar5 & 3) == 0) {
      uVar1 = _Size >> 2;
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar3 = puVar3 + -1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *puVar5 = *puVar3;
      }
      switch(_Size & 3) {
      case 1:
switchD_1000a569_caseD_1:
        *(byte *)((int)puVar5 + 3) = *(byte *)((int)puVar3 + 3);
        return _Dst;
      case 2:
switchD_1000a569_caseD_2:
        *(ushort *)((int)puVar5 + 2) = *(ushort *)((int)puVar3 + 2);
        return _Dst;
      case 3:
switchD_1000a569_caseD_3:
        *(ushort *)((int)puVar5 + 2) = *(ushort *)((int)puVar3 + 2);
        *(byte *)((int)puVar5 + 1) = *(byte *)((int)puVar3 + 1);
        return _Dst;
      }
    }
    else {
      puVar4 = (byte *)((int)puVar3 + -1);
      puVar6 = (byte *)((int)puVar5 + -1);
      if (_Size < 0xd) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar6 = puVar6 + -1;
        }
        return _Dst;
      }
      uVar2 = -in_EDX & 3;
      uVar1 = _Size - uVar2;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar6 = puVar6 + -1;
      }
      puVar3 = (uint *)(puVar4 + -3);
      puVar5 = (uint *)(puVar6 + -3);
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(uVar1 & 3) {
      case 1:
        goto switchD_1000a569_caseD_1;
      case 2:
        goto switchD_1000a569_caseD_2;
      case 3:
        goto switchD_1000a569_caseD_3;
      }
    }
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    for (uVar1 = _Size >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *(uint *)_Src;
      _Src = (uint *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(_Size & 3) {
    case 1:
switchD_1000a4d0_caseD_1:
      *(byte *)puVar3 = *(byte *)_Src;
      return _Dst;
    case 2:
switchD_1000a4d0_caseD_2:
      *(ushort *)puVar3 = *(ushort *)_Src;
      return _Dst;
    case 3:
switchD_1000a4d0_caseD_3:
      *(ushort *)puVar3 = *(ushort *)_Src;
      *(byte *)((int)puVar3 + 2) = *(byte *)((int)_Src + 2);
      return _Dst;
    }
  }
  else {
    puVar4 = _Dst;
    if (_Size < 0xd) {
      for (; _Size != 0; _Size = _Size - 1) {
        *puVar4 = *(byte *)_Src;
        _Src = (byte *)((int)_Src + 1);
        puVar4 = puVar4 + 1;
      }
      return _Dst;
    }
    uVar2 = -(int)_Dst & 3;
    uVar1 = _Size - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar3 = *(byte *)_Src;
      _Src = (uint *)((int)_Src + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *(uint *)_Src;
      _Src = (uint *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(uVar1 & 3) {
    case 1:
      goto switchD_1000a4d0_caseD_1;
    case 2:
      goto switchD_1000a4d0_caseD_2;
    case 3:
      goto switchD_1000a4d0_caseD_3;
    }
  }
  return _Dst;
}
