// Name: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
// Address Range: [[005b7fe0, 005b8116]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0 (CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
          (CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)(capabilities == (CExternalRenderer *)0x0);
  if (capabilities != (CExternalRenderer *)0x0) {
    if ((this_ptr->api_version == capabilities->api_version) || (this_ptr->api_version == 0xffff)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    if ((uVar4 != 0) && ((~this_ptr->feature_flags & capabilities->feature_flags) != 0)) {
      return 0;
    }
    if (uVar4 != 0) {
      if (capabilities->hardware_flag1 != 0) {
        uVar4 = (uint)(*(int *)(this_ptr->dll_identifier + 0xfe) >> 0x18 ==
                      *(int *)(capabilities->dll_identifier + 0xfe) >> 0x18);
      }
      if ((uVar4 != 0) && (capabilities->hardware_flag2 != 0)) {
        iVar5._0_2_ = this_ptr->hardware_flag1;
        iVar5._2_2_ = this_ptr->hardware_flag2;
        iVar3._0_2_ = capabilities->hardware_flag1;
        iVar3._2_2_ = capabilities->hardware_flag2;
        uVar4 = (uint)(iVar5 >> 0x18 == iVar3 >> 0x18);
      }
    }
    if ((uVar4 != 0) && (capabilities->dll_identifier[0] != '\0')) {
      iVar5 = crt_string_c_strcmp_FUN_005fef20
                        (capabilities->dll_identifier,this_ptr->dll_identifier);
      uVar4 = (uint)(iVar5 == 0);
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      if (this_ptr->function_count != 0x10) {
        return 0;
      }
      iVar5 = 0;
      uVar6 = uVar4;
      do {
        if (uVar6 == 0) {
          return 0;
        }
        puVar1 = this_ptr->function_table;
        puVar2 = capabilities->function_table;
        this_ptr = (CExternalRenderer *)(this_ptr->processing_data + 4);
        capabilities = (CExternalRenderer *)(capabilities->processing_data + 4);
        uVar6 = (uint)(*puVar2 == *puVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
    }
  }
  return uVar6;
}
