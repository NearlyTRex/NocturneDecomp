// Name: core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10
// Address: 00570f10
// Address Range: [[00570f10, 00570f9e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)

{
  C3DSLight *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  if (0 < this_ptr->light_count) {
    iVar4 = 0;
    do {
      pCVar1 = (C3DSLight *)(this_ptr->lights[0].name + iVar4 + -4);
      *out_light = pCVar1;
      if (pCVar1->light_type == 0) {
        iVar2 = stricmp(pCVar1->name,light_name);
        if (iVar2 == 0) {
          *out_master_light = g_MasterLightList[iVar5];
          return;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1898;
    } while (iVar3 < this_ptr->light_count);
  }
  *out_light = (C3DSLight *)0x0;
  *out_master_light = (CDemonLight *)0x0;
  return;
}
