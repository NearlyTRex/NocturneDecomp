// Name: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
// MANUAL RECONSTRUCTION
// Address Range: [[005b7fe0, 005b8116]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

{
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)(capabilities == (CExternalRenderer *)0x0);
  if (capabilities != (CExternalRenderer *)0x0) {
    if ((this_ptr->api_version == capabilities->api_version) || (this_ptr->api_version == 0xffff)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if ((uVar3 != 0) &&
       ((~(this_ptr->feature_flags).dword & (capabilities->feature_flags).dword) != 0)) {
      return 0;
    }
    if (uVar3 != 0) {
      if (capabilities->interface_version != 0) {
        uVar3 = (uint)(this_ptr->interface_version >> 8 ==
                      capabilities->interface_version >> 8);
      }
      if ((uVar3 != 0) && (capabilities->driver_version != 0)) {
        uVar3 = (uint)(this_ptr->driver_version >> 8 ==
                      capabilities->driver_version >> 8);
      }
    }
    if ((uVar3 != 0) && (capabilities->vendor_name[0] != '\0')) {
      iVar4 = _strcmp(capabilities->vendor_name,this_ptr->vendor_name);
      uVar3 = (uint)(iVar4 == 0);
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      if (this_ptr->function_count != 0x10) {
        return 0;
      }
      iVar4 = 0;
      uVar5 = uVar3;
      do {
        if (uVar5 == 0) {
          return 0;
        }
        uVar5 = (uint)(capabilities->function_table[iVar4] == this_ptr->function_table[iVar4]);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
    }
  }
  return uVar5;
}
