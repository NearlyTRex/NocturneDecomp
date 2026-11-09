// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0
// Address: 004724c0
// Address Range: [[004724c0, 00472545]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

{
  CDemonPart *pCVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)&this_ptr->field_0x4c != 0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < *(int *)&this_ptr->field_0x48 *
                *(int *)&this_ptr->field_0x40 * *(int *)&this_ptr->field_0x44; iVar3 = iVar3 + 1) {
      puVar2 = (uint *)(*(int *)&this_ptr->field_0x4c + iVar4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[0x15] = 0;
      if ((CDemonPart *)puVar2[3] != (CDemonPart *)0x0) {
        pCVar1 = core_dpart_cpp_FUN_004614b0((CDemonPart *)puVar2[3],0);
        FUN_005b7fdc(pCVar1);
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    FUN_005b86a0(*(uint *)&this_ptr->field_0x4c);
  }
  *(uint *)&this_ptr->field_0x4c = 0;
  return;
}
