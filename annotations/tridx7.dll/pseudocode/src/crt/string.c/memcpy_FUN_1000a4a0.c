// Name: crt_string.c_memcpy_FUN_1000a4a0
// Address: 1000a4a0
// Address Range: [[1000a4a0, 1000a4d6] [1000a4e8, 1000a4fa] [1000a4fc, 1000a508] [1000a50c, 1000a516] [1000a518, 1000a53c] [1000a540, 1000a548] [1000a54c, 1000a56f] [1000a580, 1000a595] [1000a598, 1000a5b5] [1000a5b8, 1000a5e2] [1000a5e4, 1000a5ed]]
// Convention: __cdecl
// Signature: void * __cdecl crt_string_c_memcpy_FUN_1000a4a0(void *dst,void *src,size_t size)

#include "nocturne.h"

void * __cdecl memcpy(void *dst,void *src,size_t size)

{
  uint uVar1;
  int in_EDX;
  uint uVar2;
  uint *puVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  
  if ((src < dst) && (dst < (void *)((int)src + size))) {
    puVar3 = (uint *)((int)src + size);
    puVar5 = (uint *)((int)dst + size);
    if (((uint)puVar5 & 3) == 0) {
      uVar1 = size >> 2;
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar3 = puVar3 + -1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *puVar5 = *puVar3;
      }
      switch(size & 3) {
      case 1:
switchD_1000a569_caseD_1:
        *(byte *)((int)puVar5 + 3) = *(byte *)((int)puVar3 + 3);
        return dst;
      case 2:
switchD_1000a569_caseD_2:
        *(ushort *)((int)puVar5 + 2) = *(ushort *)((int)puVar3 + 2);
        return dst;
      case 3:
switchD_1000a569_caseD_3:
        *(ushort *)((int)puVar5 + 2) = *(ushort *)((int)puVar3 + 2);
        *(byte *)((int)puVar5 + 1) = *(byte *)((int)puVar3 + 1);
        return dst;
      }
    }
    else {
      puVar4 = (byte *)((int)puVar3 + -1);
      puVar6 = (byte *)((int)puVar5 + -1);
      if (size < 0xd) {
        for (; size != 0; size = size - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar6 = puVar6 + -1;
        }
        return dst;
      }
      uVar2 = -in_EDX & 3;
      uVar1 = size - uVar2;
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
    return dst;
  }
  puVar3 = dst;
  if (((uint)dst & 3) == 0) {
    for (uVar1 = size >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *(uint *)src;
      src = (uint *)((int)src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(size & 3) {
    case 1:
switchD_1000a4d0_caseD_1:
      *(byte *)puVar3 = *(byte *)src;
      return dst;
    case 2:
switchD_1000a4d0_caseD_2:
      *(ushort *)puVar3 = *(ushort *)src;
      return dst;
    case 3:
switchD_1000a4d0_caseD_3:
      *(ushort *)puVar3 = *(ushort *)src;
      *(byte *)((int)puVar3 + 2) = *(byte *)((int)src + 2);
      return dst;
    }
  }
  else {
    puVar4 = dst;
    if (size < 0xd) {
      for (; size != 0; size = size - 1) {
        *puVar4 = *(byte *)src;
        src = (byte *)((int)src + 1);
        puVar4 = puVar4 + 1;
      }
      return dst;
    }
    uVar2 = -(int)dst & 3;
    uVar1 = size - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar3 = *(byte *)src;
      src = (uint *)((int)src + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *(uint *)src;
      src = (uint *)((int)src + 4);
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
  return dst;
}
