// Name: APIDLLbuildCardList
// Address: 100052e0
// Address Range: [[100052e0, 10005341]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLbuildCardList(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,int *out_device_ids)

#include "nocturne.h"

int __cdecl APIDLLbuildCardList(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,int *out_device_ids)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x52e0  7  APIDLLbuildCardList */
  iVar2 = g_AdapterCount;
  *out_card_count = g_AdapterCount;
  if (0 < iVar2) {
    piVar4 = &DAT_101386b0;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *out_device_ids = *piVar4;
      piVar4 = piVar4 + 1;
      out_device_ids = out_device_ids + 1;
    }
    piVar4 = &DAT_10138ef0;
    for (iVar1 = iVar2; iVar3 = 0, iVar1 != 0; iVar1 = iVar1 + -1) {
      *out_vendor_ids = *piVar4;
      piVar4 = piVar4 + 1;
      out_vendor_ids = out_vendor_ids + 1;
    }
    do {
      *(int *)enum_data_buffer = (int)&DAT_101398d0 + iVar3;
      enum_data_buffer = (void *)((int)enum_data_buffer + 4);
      iVar2 = iVar2 + -1;
      *out_card_names = (char *)((int)&DAT_10236910 + iVar3);
      out_card_names = out_card_names + 1;
      iVar3 = iVar3 + 0x200;
    } while (iVar2 != 0);
  }
  return 1;
}
