// Name: dll_dx7.cpp_APIDLLbuildCardList_FUN_100052e0
// Address: 100052e0
// Address Range: [[100052e0, 10005341]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLbuildCardList_FUN_100052e0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLbuildCardList_FUN_100052e0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
                    /* 0x52e0  7  APIDLLbuildCardList */
  iVar2 = g_AdapterCount;
  *out_card_count = g_AdapterCount;
  if (0 < iVar2) {
    puVar4 = g_AdapterDeviceId;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *out_device_ids = *puVar4;
      puVar4 = puVar4 + 1;
      out_device_ids = out_device_ids + 1;
    }
    puVar4 = g_AdapterVendorId;
    for (iVar1 = iVar2; iVar3 = 0, iVar1 != 0; iVar1 = iVar1 + -1) {
      *out_vendor_ids = *puVar4;
      puVar4 = puVar4 + 1;
      out_vendor_ids = out_vendor_ids + 1;
    }
    do {
      *out_driver_names = g_AdapterDriverName[0] + iVar3;
      out_driver_names = out_driver_names + 1;
      iVar2 = iVar2 + -1;
      *out_card_names = g_AdapterDescription[0] + iVar3;
      out_card_names = out_card_names + 1;
      iVar3 = iVar3 + 0x200;
    } while (iVar2 != 0);
  }
  return 1;
}
