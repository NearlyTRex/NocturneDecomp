// Name: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
// Address: 00431622
// Address Range: [[00431622, 00431727]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622 (void *dest_buffer,void *src_buffer,int byte_count)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622
          (void *dest_buffer,void *src_buffer,int byte_count)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (((uint)dest_buffer & 0x1f) != 0) {
    uVar5 = 0x20 - ((uint)dest_buffer & 0x1f);
    if (byte_count < (int)uVar5) {
      uVar5 = byte_count;
    }
    byte_count = byte_count - uVar5;
    uVar6 = uVar5 & 3;
    if (uVar6 != 0) {
      uVar5 = uVar5 - uVar6;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(byte *)dest_buffer = *(byte *)src_buffer;
        src_buffer = (uint *)((int)src_buffer + 1);
        dest_buffer = (uint *)((int)dest_buffer + 1);
      }
    }
    uVar5 = uVar5 >> 2;
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)dest_buffer = *(uint *)src_buffer;
        src_buffer = (uint *)((int)src_buffer + 4);
        dest_buffer = (uint *)((int)dest_buffer + 4);
      }
    }
    if (byte_count == 0) {
      return;
    }
  }
  iVar7 = byte_count - 0x100;
  if (-1 < iVar7) {
    do {
      iVar8 = iVar7 + -0x100;
      bVar4 = 0xff < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  uVar5 = (uint)byte_count >> 5;
  if (uVar5 != 0) {
    iVar7 = uVar5 * 0x20;
    do {
      iVar8 = iVar7 + -0x20;
      uVar1 = *(ulonglong *)(iVar7 + -0x18 + (int)src_buffer);
      uVar2 = *(ulonglong *)(iVar7 + -0x10 + (int)src_buffer);
      uVar3 = *(ulonglong *)(iVar7 + -8 + (int)src_buffer);
      *(ulonglong *)(iVar8 + (int)dest_buffer) = *(ulonglong *)(iVar8 + (int)src_buffer);
      *(ulonglong *)(iVar7 + -0x18 + (int)dest_buffer) = uVar1;
      *(ulonglong *)(iVar7 + -0x10 + (int)dest_buffer) = uVar2;
      *(ulonglong *)(iVar7 + -8 + (int)dest_buffer) = uVar3;
      iVar7 = iVar8;
    } while (0x1f < iVar8);
    byte_count = byte_count + uVar5 * -0x20;
    src_buffer = (void *)((int)src_buffer + uVar5 * 0x20);
    dest_buffer = (void *)((int)dest_buffer + uVar5 * 8 * 4);
  }
  if (byte_count != 0) {
    uVar6 = (uint)byte_count >> 2;
    uVar5 = uVar6;
    if (uVar6 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)dest_buffer = *(uint *)src_buffer;
        src_buffer = (uint *)((int)src_buffer + 4);
        dest_buffer = (uint *)((int)dest_buffer + 4);
      }
      byte_count = byte_count + uVar6 * -4;
    }
    for (; byte_count != 0; byte_count = byte_count - 1) {
      *(byte *)dest_buffer = *(byte *)src_buffer;
      src_buffer = (uint *)((int)src_buffer + 1);
      dest_buffer = (uint *)((int)dest_buffer + 1);
    }
  }
  return;
}
