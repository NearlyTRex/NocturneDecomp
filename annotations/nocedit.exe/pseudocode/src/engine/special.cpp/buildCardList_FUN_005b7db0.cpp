// Name: engine_special.cpp_buildCardList_FUN_005b7db0
// Address: 005b7db0
// Address Range: [[005b7db0, 005b7de7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_buildCardList_FUN_005b7db0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

#include "nocturne.h"

int __cdecl engine_special_cpp_buildCardList_FUN_005b7db0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_buildCardList)
                    (out_card_count,out_driver_names,out_card_names,out_vendor_ids,out_device_ids);
  return iVar1;
}
