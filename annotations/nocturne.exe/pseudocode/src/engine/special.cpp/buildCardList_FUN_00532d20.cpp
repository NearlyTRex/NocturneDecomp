// Name: engine_special.cpp_buildCardList_FUN_00532d20
// Address: 00532d20
// Address Range: [[00532d20, 00532d57]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_buildCardList_FUN_00532d20(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

#include "nocturne.h"

int __cdecl engine_special_cpp_buildCardList_FUN_00532d20(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_buildCardList)
                    (out_card_count,out_driver_names,out_card_names,out_vendor_ids,out_device_ids);
  return iVar1;
}
