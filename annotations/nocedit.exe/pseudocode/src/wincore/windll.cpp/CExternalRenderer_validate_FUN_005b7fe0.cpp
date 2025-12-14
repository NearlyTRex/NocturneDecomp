// Name: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
// Address Range: [[005b7fe0, 005b8116]]
// Convention: __cdecl
// Signature: bool wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)

#include "nocturne.h"

bool __cdecl
wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
          (CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = capabilities == (CExternalRenderer *)0x0;
  if (capabilities != (CExternalRenderer *)0x0) {
    if ((this_ptr->api_version == capabilities->api_version) || (this_ptr->api_version == 0xffff)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && ((~this_ptr->feature_flags & capabilities->feature_flags) != 0)) {
      return false;
    }
    if (bVar5) {
      if (capabilities->hardware_flag1 != 0) {
        bVar5 = *(int *)(this_ptr->dll_identifier + 0xfe) >> 0x18 ==
                *(int *)(capabilities->dll_identifier + 0xfe) >> 0x18;
      }
      if ((bVar5) && (capabilities->hardware_flag2 != 0)) {
        iVar3._0_2_ = this_ptr->hardware_flag1;
        iVar3._2_2_ = this_ptr->hardware_flag2;
        iVar2._0_2_ = capabilities->hardware_flag1;
        iVar2._2_2_ = capabilities->hardware_flag2;
        bVar5 = iVar3 >> 0x18 == iVar2 >> 0x18;
      }
    }
    if ((bVar5) && (capabilities->dll_identifier[0] != '\0')) {
      iVar3 = crt_string_c_strcmp_FUN_005fef20
                        (capabilities->dll_identifier,this_ptr->dll_identifier);
      bVar5 = iVar3 == 0;
    }
    bVar4 = false;
    if (bVar5) {
      if (this_ptr->function_count != 0x10) {
        return false;
      }
      iVar3 = 0;
      do {
        puVar1 = this_ptr->function_table;
        this_ptr = (CExternalRenderer *)(this_ptr->processing_data + 4);
        bVar5 = capabilities->function_table[0] == *puVar1;
        capabilities = (CExternalRenderer *)(capabilities->processing_data + 4);
        iVar3 = iVar3 + 1;
        if (0xf < iVar3) {
          return bVar5;
        }
        bVar4 = false;
      } while (bVar5);
    }
  }
  return bVar4;
}
