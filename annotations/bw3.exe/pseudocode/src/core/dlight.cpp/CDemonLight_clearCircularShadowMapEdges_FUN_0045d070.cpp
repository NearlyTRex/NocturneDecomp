// Name: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070
// Address: 0045d070
// Address Range: [[0045d070, 0045d16e]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)&this_ptr->field_0x1cb8 != 0) {
    for (iVar6 = 0; iVar6 < *(int *)&this_ptr->field_0x1cc4 / 2; iVar6 = iVar6 + 1) {
      for (iVar4 = 0; iVar1 = *(int *)&this_ptr->field_0x1cc0 / 2, iVar4 < iVar1; iVar4 = iVar4 + 1)
      {
        iVar2 = *(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4;
        iVar3 = iVar2 >> 0x1f;
        iVar1 = iVar1 - iVar4;
        iVar5 = *(int *)&this_ptr->field_0x1cc4 / 2 - iVar6;
        if ((int)((iVar2 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2 <
            iVar1 * iVar1 + iVar5 * iVar5) {
          *(ushort *)
           (*(int *)&this_ptr->field_0x2f94 + (*(int *)&this_ptr->field_0x1cc0 * iVar6 + iVar4) * 2)
               = 0;
          *(ushort *)
           (*(int *)&this_ptr->field_0x2f94 +
           (*(int *)&this_ptr->field_0x1cc0 * iVar6 +
           ((*(int *)&this_ptr->field_0x1cc0 + -1) - iVar4)) * 2) = 0;
          *(ushort *)
           (*(int *)&this_ptr->field_0x2f94 +
           (((*(int *)&this_ptr->field_0x1cc0 + -1) - iVar4) +
           *(int *)&this_ptr->field_0x1cc0 * ((*(int *)&this_ptr->field_0x1cc4 + -1) - iVar6)) * 2)
               = 0;
          *(ushort *)
           (*(int *)&this_ptr->field_0x2f94 +
           (((*(int *)&this_ptr->field_0x1cc4 + -1) - iVar6) * *(int *)&this_ptr->field_0x1cc0 +
           iVar4) * 2) = 0;
        }
      }
    }
  }
  return;
}
