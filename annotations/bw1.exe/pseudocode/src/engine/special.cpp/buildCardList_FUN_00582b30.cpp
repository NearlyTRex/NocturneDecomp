// Name: engine_special.cpp_buildCardList_FUN_00582b30
// Address: 00582b30
// Address Range: [[00582b30, 00582b67]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_buildCardList_FUN_00582b30(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_buildCardList_FUN_00582b30(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)

{
  int iVar1;
  
  if (_DAT_02c834ac == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c83418)(out_card_count,out_driver_names,out_card_names,out_vendor_ids,
                           out_device_ids);
  return iVar1;
}
