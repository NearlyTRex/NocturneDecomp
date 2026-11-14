// Name: support_trstream.cpp_COutStream_vprintf_FUN_005a14f0
// Address: 005a14f0
// Address Range: [[005a14f0, 005a17c8]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStream_vprintf_FUN_005a14f0(COutStream *this_ptr,char *format,va_list_t args)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl support_trstream_cpp_COutStream_vprintf_FUN_005a14f0(COutStream *this_ptr,char *format,va_list_t args)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  char local_91c [2048];
  byte local_11c;
  byte local_11b [255];
  int local_1c;
  uint local_18;
  byte *local_14;
  
  local_1c = 0;
  if (*format != '\0') {
    local_14 = local_11b;
    do {
      pbVar6 = (byte *)(format + 1);
      if (*format == 0x25) {
        local_18 = *(uint *)args.value[0];
        bVar1 = *pbVar6;
        bVar5 = 0x20;
        bVar3 = false;
        local_11c = 0x25;
        pbVar7 = local_14;
joined_r0x005a155a:
        if (bVar1 != 0) {
LAB_005a155c:
          if (bVar3) goto LAB_005a1564;
          pbVar8 = pbVar7 + 1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *pbVar7 = bVar1;
          pbVar7 = pbVar8;
          if (99 < bVar1) {
            if (bVar1 < 0x65) goto LAB_005a160a;
            if (bVar1 < 0x6e) {
              if ((0x66 < bVar1) && (0x67 < bVar1)) {
                if ((bVar1 < 0x69) || (bVar1 == 0x6c)) goto LAB_005a15fa;
                bVar1 = *pbVar6;
                goto joined_r0x005a1747;
              }
              goto LAB_005a17b0;
            }
            if (bVar1 < 0x6f) {
              puVar2 = *(uint **)args.value[0];
              *(uint **)args.value[0] = puVar2 + 1;
              pbVar8 = &local_11c;
              *(int *)*puVar2 = local_1c;
              goto LAB_005a1661;
            }
            if (0x72 < bVar1) {
              if (bVar1 < 0x74) goto LAB_005a162d;
              if (bVar1 < 0x75) goto LAB_005a1666;
              if ((0x75 < bVar1) && (bVar1 != 0x78)) {
                bVar1 = *pbVar6;
                goto joined_r0x005a1747;
              }
              goto LAB_005a160a;
            }
            if (bVar1 < 0x70) goto LAB_005a160a;
            if (bVar1 != 0x70) {
              bVar1 = *pbVar6;
              goto joined_r0x005a1747;
            }
            *(int *)args.value[0] = *(int *)args.value[0] + 4;
            bVar1 = *pbVar6;
joined_r0x005a1683:
            bVar3 = true;
            goto joined_r0x005a1747;
          }
          if (bVar1 < 0x46) {
            if (bVar1 < 0x43) {
              if (bVar1 == 0x25) {
LAB_005a1661:
                bVar3 = true;
LAB_005a1666:
                bVar1 = *pbVar6;
                pbVar7 = pbVar8;
              }
              else {
                bVar1 = *pbVar6;
              }
            }
            else {
              if (0x43 < bVar1) {
                if (bVar1 < 0x45) goto LAB_005a160a;
                goto LAB_005a17b0;
              }
LAB_005a162d:
              bVar3 = true;
              *(int *)args.value[0] = *(int *)args.value[0] + 4;
              bVar1 = *pbVar6;
            }
            goto joined_r0x005a1747;
          }
          if (0x46 < bVar1) goto code_r0x005a1754;
          goto LAB_005a17b0;
        }
LAB_005a1564:
        *pbVar7 = 0;
        iVar4 = _vsprintf(local_91c,(char *)&local_11c,(va_list_t)&local_18)
        ;
        iVar4 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,local_91c,iVar4);
        if (iVar4 < 0) {
          return iVar4;
        }
        local_1c = local_1c + iVar4;
      }
      else {
        iVar4 = (**(code **)((int)this_ptr->vtable + 4))(this_ptr,*format);
        if (iVar4 != 0) {
          return iVar4;
        }
        local_1c = local_1c + 1;
      }
      format = (char *)pbVar6;
    } while (*pbVar6 != 0);
  }
  return local_1c;
code_r0x005a1754:
  if (0x4e < bVar1) {
    if (bVar1 < 0x50) {
LAB_005a160a:
      if (bVar5 == 0x6c) {
        *(int *)args.value[0] = *(int *)args.value[0] + 4;
        goto LAB_005a1661;
      }
      *(int *)args.value[0] = *(int *)args.value[0] + 4;
      bVar1 = *pbVar6;
      goto joined_r0x005a1683;
    }
    if (bVar1 < 0x58) goto LAB_005a1666;
    if (bVar1 < 0x59) goto LAB_005a160a;
    if (bVar1 == 99) goto LAB_005a162d;
    bVar1 = *pbVar6;
    goto joined_r0x005a155a;
  }
  if (bVar1 < 0x48) {
LAB_005a17b0:
    *(int *)args.value[0] = *(int *)args.value[0] + 8;
    bVar3 = true;
    bVar1 = *pbVar6;
joined_r0x005a1747:
    if (bVar1 == 0) goto LAB_005a1564;
    goto LAB_005a155c;
  }
  if (bVar1 == 0x4c) {
LAB_005a15fa:
    bVar5 = *pbVar6;
    bVar1 = *pbVar6;
    goto joined_r0x005a1747;
  }
  bVar1 = *pbVar6;
  goto joined_r0x005a155a;
}
