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
      if ((capabilities->hardware_flags).words[0] != 0) {
        uVar3 = (uint)(*(int *)(this_ptr->dll_identifier + 0xfe) >> 0x18 ==
                      *(int *)(capabilities->dll_identifier + 0xfe) >> 0x18);
      }
      if ((uVar3 != 0) && ((capabilities->hardware_flags).words[1] != 0)) {
        uVar3 = (uint)((int)(this_ptr->hardware_flags).dword >> 0x18 ==
                      (int)(capabilities->hardware_flags).dword >> 0x18);
      }
    }
    if ((uVar3 != 0) && (capabilities->dll_identifier[0] != '\0')) {
      iVar4 = _strcmp
                        (capabilities->dll_identifier,this_ptr->dll_identifier);
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
