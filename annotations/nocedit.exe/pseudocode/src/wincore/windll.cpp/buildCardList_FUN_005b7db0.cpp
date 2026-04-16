// Name: wincore_windll.cpp_buildCardList_FUN_005b7db0
// Address: 005b7db0
// Address Range: [[005b7db0, 005b7de7]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_buildCardList_FUN_005b7db0(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,int *out_device_ids)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_buildCardList_FUN_005b7db0(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,int *out_device_ids)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_buildCardList)
                    (out_card_count,enum_data_buffer,out_card_names,out_vendor_ids,out_device_ids);
  return iVar1;
}
