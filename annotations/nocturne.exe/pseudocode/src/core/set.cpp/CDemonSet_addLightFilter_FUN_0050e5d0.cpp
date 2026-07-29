// Name: core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0
// Address: 0050e5d0
// Address Range: [[0050e5d0, 0050e65e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)

{
  C3DSLight *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  if (0 < (int)this_ptr->cameras[0xf7].position.y) {
    iVar4 = 0;
    do {
      pCVar1 = (C3DSLight *)((int)this_ptr->cameras[0xf7].rotation_matrix.m + iVar4 + -0x10);
      *out_light = pCVar1;
      if (pCVar1->light_type == 0) {
        iVar2 = _stricmp(pCVar1->name,light_name);
        if (iVar2 == 0) {
          *out_master_light = *(CDemonLight **)(&DAT_01fb99d4 + iVar5 * 4);
          return;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1898;
    } while (iVar3 < (int)this_ptr->cameras[0xf7].position.y);
  }
  *out_light = (C3DSLight *)0x0;
  *out_master_light = (CDemonLight *)0x0;
  return;
}
