// Name: core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10
// Address: 00570f10
// Address Range: [[00570f10, 00570f9e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  iVar3 = 0;
  iVar5 = 0;
  if (0 < this_ptr->light_count) {
    iVar4 = 0;
    do {
      pcVar1 = this_ptr->lights[0].name + iVar4 + -4;
      *in_stack_0000000c = pcVar1;
      if (*(int *)pcVar1 == 0) {
        iVar2 = stricmp(pcVar1 + 4,in_stack_00000008);
        if (iVar2 == 0) {
          *in_stack_00000010 = g_MasterLightList[iVar5];
          return;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1898;
    } while (iVar3 < this_ptr->light_count);
  }
  *in_stack_0000000c = 0;
  *in_stack_00000010 = 0;
  return;
}
